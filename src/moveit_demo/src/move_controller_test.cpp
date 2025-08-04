/*
   需求：
   流程：
    1.包含头文件；
    2.初始化ROS2客户端；
    3.自定义节点类；
      
    4.调用spin函数，并传入节点对象指针；
    5.资源释放。
*/

//ros2 run tf2_ros static_transform_publisher 0 0 0.0 0 0 1.57 virtual_base base_link
// 1.包含头文件；
#include "rclcpp/rclcpp.hpp"
//move_group相关库函数
#include <moveit/move_group_interface/move_group_interface.h>
//pose设置方面
#include <geometry_msgs/msg/pose_stamped.hpp>
//读取键盘值使用头文件
#include <termios.h>
#include <unistd.h>
#include <stdio.h>
//姿态设置
#include "tf2/LinearMath/Quaternion.h"

//无阻塞读取键盘值
char getKey()
{
    struct termios oldt, newt;
    char ch;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return ch;
}

// 3.自定义节点类；
class MoveControllerTest: public rclcpp::Node{
public:
    MoveControllerTest():Node("move_controller_test_node"){
        RCLCPP_INFO(this->get_logger(), "move_controller_test_node");
    }
    //执行运动规划
    void doMotionPlanning()
    {
        //根据group的名字获取move_group
        moveit::planning_interface::MoveGroupInterface move_group(shared_from_this(), "arm_group");
        //定义目标Pose并赋值
        geometry_msgs::msg::Pose target_pose;
            
        target_pose.position.x = -0.3;
        target_pose.position.y = 0.1;
        target_pose.position.z = 0.4;

        target_pose.orientation.w = 1.0;
        move_group.setPoseTarget(target_pose);

        //每次移动0.1米
        const double move_step = 0.005;
        while(rclcpp::ok())
        {
            char c = getKey();
            if(c == 'o' || c == 'O')
            {
                RCLCPP_INFO(this->get_logger(), "退出控制");
                break;
            }
            else if(c == 'w' || c == 'W')
                target_pose.position.x += move_step;
            else if(c == 's' || c == 'S')
                target_pose.position.x -= move_step;
            else if(c == 'a' || c == 'A')
                target_pose.position.y += move_step;
            else if(c == 'd' || c == 'D')
                target_pose.position.y -= move_step;
            else if(c == 'q' || c == 'Q')
                target_pose.position.z += move_step;
            else if(c == 'e' || c == 'E')
                target_pose.position.z -= move_step;
            else if(c == 'g' || c == 'G')
            {
                target_pose.position.x = -0.2678369879722595;
                target_pose.position.y = 0.09893878549337387;
                target_pose.position.z = 0.3571580648422241;
                target_pose.orientation.x = -2.232311453553848e-05;
                target_pose.orientation.y = 0.7368732690811157;
                target_pose.orientation.z = 2.328573100385256e-05;
                target_pose.orientation.w = 0.6760309338569641;
            }
            else if(c == 'h' || c == 'H')
            {
                target_pose.position.x = -0.26022106409072876;
                target_pose.position.y = 0.09894109517335892;
                target_pose.position.z = 0.44507527351379395;
                target_pose.orientation.x = -5.3150433814153075e-05;
                target_pose.orientation.y = 0.7369122505187988;
                target_pose.orientation.z = 5.842653627041727e-05;
                target_pose.orientation.w = 0.6759857535362244;
            }
            else if(c == 'j' || c == 'J')
            {
                target_pose.position.x = -0.37090638279914856;
                target_pose.position.y = 0.09911057353019714;
                target_pose.position.z = 0.12166137248277664;
                target_pose.orientation.x = 0.00029252987587824464;
                target_pose.orientation.y = 0.4613119065761566;
                target_pose.orientation.z = 0.0005652320687659085;
                target_pose.orientation.w = 0.8872377872467041;
            }
            else if(c == 'k' || c == 'K')
            {
                target_pose.position.x = -0.4506370425224304;
                target_pose.position.y = 0.19596727192401886;
                target_pose.position.z = 0.0658913254737854;
                target_pose.orientation.x = 0.6071493625640869;
                target_pose.orientation.y = 0.336870938539505;
                target_pose.orientation.z = -0.31518158316612244;
                target_pose.orientation.w = 0.6469529867172241;
            }
            move_group.setPoseTarget(target_pose);
            moveit::planning_interface::MoveGroupInterface::Plan plan;
            bool success = static_cast<bool>(move_group.plan(plan));
            if (success)
            {
              RCLCPP_INFO(this->get_logger(), "规划成功！执行中...");
              move_group.execute(plan);
            }
            else
            {
              RCLCPP_ERROR(this->get_logger(), "规划失败！");
            }
        }
    }
private:
};

int main(int argc, char const *argv[])
{
    // 2.初始化ROS2客户端；
    rclcpp::init(argc, argv);
    // 4.调用spin函数，并传入节点对象指针；
    auto node = std::make_shared<MoveControllerTest>();
    node->doMotionPlanning();
    rclcpp::spin(node);
    // 5.资源释放。
    rclcpp::shutdown();
    return 0;
}
