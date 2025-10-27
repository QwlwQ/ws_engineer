#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "std_msgs/msg/bool.hpp"
#include "std_msgs/msg/float32.hpp"
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <fcntl.h>

struct ClientInfo {
    int socket;
    std::string ip_address;
    bool connected;
};

class GraspTouchControlNode : public rclcpp::Node
{
public:
    GraspTouchControlNode() : Node("grasp_touch_control_node")
    {
        //声明参数
        this->declare_parameter("server_port", 8888);
        this->declare_parameter("max_clients", 10);
        this->declare_parameter("topic_prefix", "esp32");

        // 获取参数
        server_port_ = this->get_parameter("server_port").as_int();
        max_clients_ = this->get_parameter("max_clients").as_int();
        topic_prefix_ = this->get_parameter("topic_prefix").as_string();

        //创建订阅
        tool_switch_motor_control_subscriber_ = this->create_subscription<std_msgs::msg::Bool>(
            topic_prefix_ + "/tool_switch_motor_control", 10, 
            std::bind(&GraspTouchControlNode::tool_switch_motor_control_callback, this, std::placeholders::_1));
        grasp_motor_control_subscriber_ = this->create_subscription<std_msgs::msg::Bool>(
            topic_prefix_ + "/grasp_motor_control", 10,
            std::bind(&GraspTouchControlNode::grasp_motor_control_callback, this, std::placeholders::_1));
        //创建发布
        pressure_publisher_ = this->create_publisher<std_msgs::msg::Float32>(
            topic_prefix_ + "/pressure", 10);
        
        // 启动TCP服务器
        if (start_tcp_server()) 
        {
            RCLCPP_INFO(this->get_logger(), "TCP Server started on port %d", server_port_);
            running_ = true;
            server_thread_ = std::thread(&GraspTouchControlNode::server_loop, this);
        }
        else 
        {
            RCLCPP_ERROR(this->get_logger(), "Failed to start TCP server");
        }
    }

    ~GraspTouchControlNode()
    {

    }

private:

    bool start_tcp_server()
    {
        server_socket_ = socket(AF_INET, SOCK_STREAM, 0);     
        // 设置socket选项
        int opt = 1;
        setsockopt(server_socket_, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt));

        // 绑定地址和端口
        struct sockaddr_in address;
        address.sin_family = AF_INET;
        address.sin_addr.s_addr = INADDR_ANY;
        address.sin_port = htons(server_port_);
        bind(server_socket_, (struct sockaddr*)&address, sizeof(address));
 
        listen(server_socket_, max_clients_);
        
        return true;
    }

    void server_loop()
    {
        while(running_)
        {
            fd_set read_fds;
            FD_ZERO(&read_fds);
            FD_SET(server_socket_, &read_fds);
    
            int max_fd = server_socket_;

            // 添加所有客户端socket到fd_set
            {
                std::lock_guard<std::mutex> lock(clients_mutex_);
                for (auto& [fd, client] : clients_) {
                    if (client.connected) {
                        FD_SET(fd, &read_fds);
                        max_fd = std::max(max_fd, fd);
                    }
                }
            }

            struct timeval timeout;
            timeout.tv_sec = 1;
            timeout.tv_usec = 0;
            int activity = select(max_fd + 1, &read_fds, NULL, NULL, &timeout);


            if(activity == 0)
            {
                continue;
            }
            else if(activity < 0)
            {
                break;
            }

            //检查新连接
            if(FD_ISSET(server_socket_, &read_fds))
            {
                accept_new_connection();
            }

            //检查现有客户端的数据
            std::vector<int> clients__to_check;
            {
                std::lock_guard<std::mutex> lock(clients_mutex_);
                for(auto& [fd, client] : clients_)
                {
                    if(client.connected && FD_ISSET(fd, &read_fds))
                    {
                        clients__to_check.push_back(fd);
                    }
                }
            }

            for(int client_fd : clients__to_check)
            {
                client_data_handle(client_fd);
            }
        }
    }

    void accept_new_connection()
    {
        struct sockaddr_in client_addr;
        socklen_t client_len = sizeof(client_addr);
        int client_socket = accept(server_socket_, (struct sockaddr*)&client_addr, &client_len);

        if(client_socket < 0)   return;

        //设置socket为非阻塞
        int flags = fcntl(client_socket, F_GETFL, 0);
        fcntl(client_socket, F_SETFL, flags | O_NONBLOCK);

        std::string client_ip = inet_ntoa(client_addr.sin_addr);

        ClientInfo client_info;
        client_info.socket = client_socket;
        client_info.ip_address = client_ip;
        client_info.connected = true;
        {
            std::lock_guard<std::mutex> lock(clients_mutex_);
            clients_[client_socket] = client_info;
        }    
    }

    void client_data_handle(int client_socket)
    {
        char buffer[1024];
        int received_bytes = recv(client_socket, buffer, sizeof(buffer)-1, 0);

        if(received_bytes > 0)
        {
            buffer[received_bytes] = '\0';
            std::string message(buffer);
            process_client_message(client_socket, message);
        }
        else if(received_bytes == 0)
        {
            
        }
        else if(errno != EWOULDBLOCK && errno != EAGAIN)
        {

        }
    }

    void process_client_message(int client_socket, const std::string& message)
    {
        std::string ip_address;
        {
            std::lock_guard<std::mutex> lock(clients_mutex_);
            auto it = clients_.find(client_socket);
            if(it != clients_.end())
            {
                ip_address = it->second.ip_address;
            }
        }

        if(message.find("ESP32_STATUS:") == 0)
        {
            auto status_msg = std_msgs::msg::String();
            status_msg.data = ip_address + ":" + message;
        }
        else if(message.find("MOTOR_STATUS:") == 0)
        {
            parse_motor_data(message, ip_address);
        }
        else if(message.find("PRESSURE:") == 0)
        {
            parse_pressure_data(message, ip_address);
        }
    }

    void parse_motor_data(const std::string& message, const std::string& ip_address)
    {
        std::string s = message;
        std::string ip = ip_address;
    }

    void parse_pressure_data(const std::string& message, const std::string& ip_address)
    {
        std::string s = message;
        std::string ip = ip_address;
        
        const std::string pressure_prefix = "PRESSURE:";
        if(message.find(pressure_prefix, 0) != 0)
            return;
        std::string pressure_value_str = message.substr(pressure_prefix.size());
        float pressure_value = std::stof(pressure_value_str);
        auto msg = std_msgs::msg::Float32();
        msg.data = pressure_value;
        pressure_publisher_->publish(msg);
    }

    bool send_to_client(int client_socket, const std::string& message)
    {
        {
            auto it = clients_.find(client_socket);
            if (it == clients_.end() || !it->second.connected) {
                return false;
            }
        }
        
        int sent_bytes = send(client_socket, message.c_str(), message.length(), 0);
        return sent_bytes == static_cast<int>(message.length());
    }

    void broadcast_message(const std::string& message)
    {
        std::lock_guard<std::mutex> lock(clients_mutex_);
        for (auto& [fd, client] : clients_) {
            if (client.connected) {
                send_to_client(fd, message);
            }
        }
    }

    // ros2 topic pub /esp32/tool_switch_motor_control std_msgs/Bool "data: true"
    void tool_switch_motor_control_callback(const std_msgs::msg::Bool::SharedPtr msg)
    {
        std::string command = "tool_switch_status:" + std::string(msg->data ? "grasp" : "touch");
        RCLCPP_INFO(this->get_logger(), "tool_switch_status: %s", msg->data ? "grasp" : "touch");
        broadcast_message(command);
    }

    // ros2 topic pub --once /esp32/grasp_motor_control std_msgs/Bool "data: true"
    void grasp_motor_control_callback(const std_msgs::msg::Bool::SharedPtr msg)
    {
        std::string command = "grasp_status:" + std::string(msg->data ? "on" : "off");
        RCLCPP_INFO(this->get_logger(), "grasp_status: %s", msg->data ? "on" : "off");
        broadcast_message(command);
    }


    int server_port_;
    int max_clients_;
    std::string topic_prefix_;

    int server_socket_;

    bool running_;
    std::thread server_thread_;
    std::mutex clients_mutex_;
    std::map<int, ClientInfo> clients_;

    rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr tool_switch_motor_control_subscriber_;
    rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr grasp_motor_control_subscriber_;
    rclcpp::Publisher<std_msgs::msg::Float32>::SharedPtr pressure_publisher_;
};


int main(int argc, char** argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<GraspTouchControlNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
