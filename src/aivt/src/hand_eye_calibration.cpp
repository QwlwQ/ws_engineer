#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/bool.hpp"
#include "sensor_msgs/msg/camera_info.hpp"
#include "sensor_msgs/msg/image.hpp"
#include "sensor_msgs/msg/joint_state.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "duco_msg/msg/duco_robot_state.hpp"
#include "duco_msg/srv/robot_move.hpp"
#include "aivt_interfaces/msg/target_pose.hpp"
#include <opencv2/opencv.hpp>
#include <cv_bridge/cv_bridge.h>
#include <yaml-cpp/yaml.h>
#include <fstream>
#include <filesystem>
//PREPARE 提前准备，找到合适的位置
//CALIBRATION 正式手眼标定
enum class CalibrationMode
{
    PREPARE,
    CALIBRATION
};

enum class CalibrationStatus
{
    MOVE,
    WAIT,
    DETECT
};

class HandEyeCalibration: public rclcpp::Node{
public:
    HandEyeCalibration():Node("hand_eye_calibration_node_cpp")
    {
        calibrationParamInit();
        calibrationModeInit();
        chessBoardPointInit();
        
        robot_move_client_ = this->create_client<duco_msg::srv::RobotMove>("/duco_robot/robot_move");
        camera_info_sub_ = this->create_subscription<sensor_msgs::msg::CameraInfo>(
                            "/camera/camera/color/camera_info", 10,
                            std::bind(&HandEyeCalibration::cameraInfoCallback, this, std::placeholders::_1));
        image_sub_ = this->create_subscription<sensor_msgs::msg::Image>(
                        "/camera/camera/color/image_raw", 10,
                        std::bind(&HandEyeCalibration::imageCallback, this, std::placeholders::_1));
        duco_robot_state_sub_ = this->create_subscription<duco_msg::msg::DucoRobotState>(
                                "/duco_cobot/robot_state", 10,
                                std::bind(&HandEyeCalibration::ducoRobotStateCallback, this, std::placeholders::_1));
        joint_state_sub_ = this->create_subscription<sensor_msgs::msg::JointState>(
            "joint_states", 10, std::bind(&HandEyeCalibration::jointStateCallback, this, std::placeholders::_1));
        
        teach_mode_pub_ = this->create_publisher<std_msgs::msg::Bool>(
                            "/teach_mode_control", 10);
        while(!robot_move_client_->wait_for_service(std::chrono::seconds(1))){
            RCLCPP_INFO(this->get_logger(), "等待服务中...");
        }
    }
private:
    void calibrationParamInit()
    {
        //棋盘格参数初始化
        board_width_ = 11;
        board_height_ = 8;
        square_size_ = 0.020;
        board_size_ = cv::Size(board_width_, board_height_);
        //相机变量初始化
        camera_info_received_ = false;
        //手眼标定模式初始化
        calibration_mode_ = CalibrationMode::CALIBRATION;
    }

    void calibrationModeInit()
    {
        if(calibration_mode_ == CalibrationMode::PREPARE)
        {
            clearRobotPose();
            saved_poses_count_ = 0;
            calculate_pose_ = false;
            teach_mode_ = false;
        }
        else if(calibration_mode_ == CalibrationMode::CALIBRATION)
        {
            clearCalibrationData();
            clearImage();
            loadSavedRobotPoses();
            saved_images_count_ = 0;
            current_pose_index_ = 0;
            calibration_status_ = CalibrationStatus::MOVE;
            pose_wait_time_ = 5.0;
            calculate_pose_ = true;
            pose_start_time_ = std::chrono::steady_clock::now();
        }
    }

    void chessBoardPointInit()
    {
        board_points_3d_.clear();
        for(int i = 0; i < board_size_.height; i++)
        {
            for(int j = 0; j < board_size_.width; j++)
            {
                board_points_3d_.push_back(cv::Point3f(
                    j * square_size_,
                    i * square_size_,
                    0.0f));
            }
        }
    }

    void loadSavedRobotPoses()
    {
        saved_poses_.clear();
        YAML::Node robot_pose_yaml;
        try
        {
            robot_pose_yaml = YAML::LoadFile("/home/user/ws_siasun/src/aivt/config/robot_pose.yaml");
        }
        catch(const std::exception& e)
        {
            return;
        }
            
        //遍历YAML
        for(const auto& node : robot_pose_yaml["robot_pose"])
        {
            if(!node["joint_state"]) continue;  // 只取 duco_robot_state
    
            std::array<float, 6> pose;
            for(int i = 0; i < 6; i++)
                pose[i] = node["joint_state"][i].as<float>();
    
            saved_poses_.push_back(pose);
        }

        //更新计数
        saved_poses_count_ = static_cast<int>(saved_poses_.size());   
    }

    void saveCalibrationData(const geometry_msgs::msg::PoseStamped pose_msg)
    {
        //加载文件或者创建空序列
        YAML::Node calibration_data_yaml;
        try
        {
            calibration_data_yaml = 
                YAML::LoadFile("/home/user/ws_siasun/src/aivt/config/calibration_data.yaml");
        }catch(const std::exception& e)
        {
            calibration_data_yaml["calibration_data"] = YAML::Node(YAML::NodeType::Sequence);
        }

        //添加新数据
        YAML::Node new_data;
        new_data["position"]["x"] = pose_msg.pose.position.x;
        new_data["position"]["x"] = pose_msg.pose.position.x;
        new_data["position"]["y"] = pose_msg.pose.position.y;
        new_data["position"]["z"] = pose_msg.pose.position.z;
        new_data["orientation"]["x"] = pose_msg.pose.orientation.x;
        new_data["orientation"]["y"] = pose_msg.pose.orientation.y;
        new_data["orientation"]["z"] = pose_msg.pose.orientation.z;
        new_data["orientation"]["w"] = pose_msg.pose.orientation.w;
        calibration_data_yaml["calibration_data"].push_back(new_data);

        YAML::Emitter out;
        out.SetIndent(4);                          // 缩进
        out.SetMapFormat(YAML::Block);             // map 用缩进块风格
        out.SetSeqFormat(YAML::Block);             // seq 用缩进块风格
        out << calibration_data_yaml;
        //保存文件
        std::ofstream fout("/home/user/ws_siasun/src/aivt/config/calibration_data.yaml");
        if (!fout.is_open()) return;
        fout << calibration_data_yaml;
        fout.close();
    }

    void clearCalibrationData()
    {
        std::string file = "/home/user/ws_siasun/src/aivt/config/calibration_data.yaml";
    
        if (std::filesystem::exists(file)) {
            std::filesystem::remove(file);
        }
    }
    

    void saveRobotPose()
    {
        std::lock_guard<std::mutex> joint_state_lock(joint_state_mutex_);
        if(!current_joint_state_)  return;
        std::lock_guard<std::mutex> duco_robot_state_lock(duco_robot_state_mutex_);
        if(!current_joint_state_) return;
        //保存到vector
        std::array<float, 6> joint_state;
        std::array<float, 6> duco_robot_state;
        for(int i = 0; i < 6; i++)
        {
            joint_state[i] = current_joint_state_->position[i];
        }
        for(int i = 0; i < 6; i++)
        {
            duco_robot_state[i] = current_duco_robot_state_->cart_actual_position[i];
        }
        saved_poses_.push_back(joint_state);
        saved_poses_count_++;

        //保存到yaml
        YAML::Node robot_pose_yaml;
        try
        {
            robot_pose_yaml = 
                YAML::LoadFile("/home/user/ws_siasun/src/aivt/config/robot_pose.yaml");
        }catch(const std::exception& e)
        {
            robot_pose_yaml["robot_pose"] = YAML::Node(YAML::NodeType::Sequence);
        }

        //添加新pose
        YAML::Node new_joint_state;
        for(int i = 0; i < 6; i++)
        {
            new_joint_state["joint_state"].push_back(joint_state[i]);
        }
        robot_pose_yaml["robot_pose"].push_back(new_joint_state);

        YAML::Node new_duco_robot_state;
        for(int i = 0; i < 6; i++)
        {
            new_duco_robot_state["duco_robot_state"].push_back(duco_robot_state[i]);
        }
        robot_pose_yaml["robot_pose"].push_back(new_duco_robot_state);
        
        //保存文件
        std::ofstream fout("/home/user/ws_siasun/src/aivt/config/robot_pose.yaml");
        if (!fout.is_open()) return;
        fout << robot_pose_yaml;
        fout.close();
    }

    void clearRobotPose()
    {
        std::string file = ("/home/user/ws_siasun/src/aivt/config/robot_pose.yaml");
        if (std::filesystem::exists(file)) {
            std::filesystem::remove(file);
        }
    }
    
    void saveImage(const cv::Mat& image)
    {
        //生成文件路径
        std::string filename = "/home/user/ws_siasun/src/aivt/config/chessboard_" +
                                std::to_string(saved_images_count_) + ".jpg";
        //保存图片
        if(cv::imwrite(filename, image))
            saved_images_count_++;
    }

    void clearImage()
    {
        std::string folder = "/home/user/ws_siasun/src/aivt/config/";

        for (const auto& entry : std::filesystem::directory_iterator(folder)) 
        {
            if (entry.is_regular_file()) 
            {
                std::string path = entry.path().string();
                // 删除所有 chessboard_ 开头的图片
                if (path.find("chessboard_") != std::string::npos) 
                {
                    std::filesystem::remove(entry.path());
                }
            }
        }
    }

    void calculatePose(const std::vector<cv::Point2f>& corners, const std_msgs::msg::Header& header)
    {
        //PnP求解棋盘格位姿
        cv::Mat rvec, tvec;  //旋转向量和平移向量
        bool success = cv::solvePnP(board_points_3d_, corners, camera_matrix_, 
                                    dist_coeffs_, rvec, tvec);
        
        if(success)
        {
            //转换为ROS消息并发布
            geometry_msgs::msg::PoseStamped pose_msg;
            pose_msg.header = header;
            pose_msg.header.frame_id = "camera_color_frame";
            //设置位置
            pose_msg.pose.position.x = tvec.at<double>(0);
            pose_msg.pose.position.y = tvec.at<double>(1);
            pose_msg.pose.position.z = tvec.at<double>(2);
            //将旋转向量转换为旋转矩阵，再转换为四元数
            cv::Mat rotation_matrix;
            cv::Rodrigues(rvec, rotation_matrix);
            //转换为四元数（简化版本）
            double trace = rotation_matrix.at<double>(0,0) + rotation_matrix.at<double>(1,1) + rotation_matrix.at<double>(2,2);
            double w, x, y, z;
            
            if (trace > 0) {
                double s = sqrt(trace + 1.0) * 2;
                w = 0.25 * s;
                x = (rotation_matrix.at<double>(2,1) - rotation_matrix.at<double>(1,2)) / s;
                y = (rotation_matrix.at<double>(0,2) - rotation_matrix.at<double>(2,0)) / s;
                z = (rotation_matrix.at<double>(1,0) - rotation_matrix.at<double>(0,1)) / s;
            } else if ((rotation_matrix.at<double>(0,0) > rotation_matrix.at<double>(1,1)) && 
                      (rotation_matrix.at<double>(0,0) > rotation_matrix.at<double>(2,2))) {
                double s = sqrt(1.0 + rotation_matrix.at<double>(0,0) - rotation_matrix.at<double>(1,1) - rotation_matrix.at<double>(2,2)) * 2;
                w = (rotation_matrix.at<double>(2,1) - rotation_matrix.at<double>(1,2)) / s;
                x = 0.25 * s;
                y = (rotation_matrix.at<double>(0,1) + rotation_matrix.at<double>(1,0)) / s;
                z = (rotation_matrix.at<double>(0,2) + rotation_matrix.at<double>(2,0)) / s;
            } else if (rotation_matrix.at<double>(1,1) > rotation_matrix.at<double>(2,2)) {
                double s = sqrt(1.0 + rotation_matrix.at<double>(1,1) - rotation_matrix.at<double>(0,0) - rotation_matrix.at<double>(2,2)) * 2;
                w = (rotation_matrix.at<double>(0,2) - rotation_matrix.at<double>(2,0)) / s;
                x = (rotation_matrix.at<double>(0,1) + rotation_matrix.at<double>(1,0)) / s;
                y = 0.25 * s;
                z = (rotation_matrix.at<double>(1,2) + rotation_matrix.at<double>(2,1)) / s;
            } else {
                double s = sqrt(1.0 + rotation_matrix.at<double>(2,2) - rotation_matrix.at<double>(0,0) - rotation_matrix.at<double>(1,1)) * 2;
                w = (rotation_matrix.at<double>(1,0) - rotation_matrix.at<double>(0,1)) / s;
                x = (rotation_matrix.at<double>(0,2) + rotation_matrix.at<double>(2,0)) / s;
                y = (rotation_matrix.at<double>(1,2) + rotation_matrix.at<double>(2,1)) / s;
                z = 0.25 * s;
            }
            pose_msg.pose.orientation.w = w;
            pose_msg.pose.orientation.x = x;
            pose_msg.pose.orientation.y = y;
            pose_msg.pose.orientation.z = z; 
            //保存位姿
            saveCalibrationData(pose_msg);
        }
    }

    void moveToNextPose()
    {
        if(current_pose_index_ < saved_poses_.size())
        {
            auto request = std::make_shared<duco_msg::srv::RobotMove_Request>();
            request->command = "movej2";
            request->arm_num = 0;
            request->q = {saved_poses_[current_pose_index_][0], saved_poses_[current_pose_index_][1], saved_poses_[current_pose_index_][2],
                        saved_poses_[current_pose_index_][3], saved_poses_[current_pose_index_][4], saved_poses_[current_pose_index_][5]};
            request->p = {1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f};
            request->v = 1.0 * M_PI;
            request->a = 5.0 * M_PI;
            request->r = 0.0f;
            request->tool = "default";
            request->wobj = "default";
            request->block = true;
            RCLCPP_INFO(this->get_logger(), "位姿%ld:", current_pose_index_);
            for(int i = 0; i < 6; i++)
            {
                RCLCPP_INFO(this->get_logger(), "%f", saved_poses_[current_pose_index_][i]);
            }
    
            using ServiceResponseFuture = 
                rclcpp::Client<duco_msg::srv::RobotMove>::SharedFuture;
            auto response_received_callback = [this](ServiceResponseFuture future){
                try {
                    auto response = future.get();        
                } catch (const std::exception& e) {
    
                }
            };
            robot_move_client_->async_send_request(request, response_received_callback);
    
            //等待机器人移动到位置
            calibration_status_ = CalibrationStatus::WAIT;
            pose_start_time_ = std::chrono::steady_clock::now();
            current_pose_index_++;
        }
    }

    void drawCoordinateSystem(cv::Mat& image, const std::vector<cv::Point2f>& corners)
    {
        if(corners.size() < 4) return;
        //计算位姿
        cv::Mat rvec, tvec;
        bool success = cv::solvePnP(board_points_3d_, corners, camera_matrix_, 
                                    dist_coeffs_, rvec, tvec);
        //绘制操作
        if(success)
        {
            // 定义坐标轴点（3D）
            std::vector<cv::Point3f> axis_points;
            axis_points.push_back(cv::Point3f(0, 0, 0));  // 原点
            axis_points.push_back(cv::Point3f(3*square_size_, 0, 0));  // X轴
            axis_points.push_back(cv::Point3f(0, 3*square_size_, 0));  // Y轴
            axis_points.push_back(cv::Point3f(0, 0, -3*square_size_)); // Z轴
            // 投影到图像平面
            std::vector<cv::Point2f> projected_points;
            cv::projectPoints(axis_points, rvec, tvec, camera_matrix_, dist_coeffs_, projected_points);
            //绘制结果
            if (projected_points.size() == 4) 
            {
                // 绘制坐标轴
                cv::Point2f origin = projected_points[0];
                cv::Point2f x_axis = projected_points[1];
                cv::Point2f y_axis = projected_points[2];
                cv::Point2f z_axis = projected_points[3];
                // X轴 - 红色
                cv::arrowedLine(image, origin, x_axis, cv::Scalar(0, 0, 255), 3);
                cv::putText(image, "X", x_axis, cv::FONT_HERSHEY_SIMPLEX, 0.6, cv::Scalar(0, 0, 255), 2);
                // Y轴 - 绿色
                cv::arrowedLine(image, origin, y_axis, cv::Scalar(0, 255, 0), 3);
                cv::putText(image, "Y", y_axis, cv::FONT_HERSHEY_SIMPLEX, 0.6, cv::Scalar(0, 255, 0), 2);
                // Z轴 - 蓝色
                cv::arrowedLine(image, origin, z_axis, cv::Scalar(255, 0, 0), 3);
                cv::putText(image, "Z", z_axis, cv::FONT_HERSHEY_SIMPLEX, 0.6, cv::Scalar(255, 0, 0), 2);
            }
        }
    }

    void drawDisplayStatus(cv::Mat& image, bool found)
    {
        // 设置状态背景
        cv::Mat overlay = image.clone();
        cv::rectangle(overlay, cv::Point(0, 0), cv::Point(450, 150), cv::Scalar(0, 0, 0), -1);
        cv::addWeighted(image, 0.7, overlay, 0.3, 0, image);
        //模式显示
        std::string mode_str = (calibration_mode_ == CalibrationMode::PREPARE) ? "PREPARE" : "CALIBRATION";
        cv::putText(image, "MODE: " + mode_str, cv::Point(10, 25), cv::FONT_HERSHEY_SIMPLEX, 0.6, cv::Scalar(255, 255, 0), 2);
        // 当前帧检测结果
        std::string detection_result = found ? "DETECTED" : "NOT DETECTED";
        cv::Scalar result_color = found ? cv::Scalar(0, 255, 0) : cv::Scalar(0, 255, 255);
        cv::putText(image, detection_result, cv::Point(10, 75), cv::FONT_HERSHEY_SIMPLEX, 0.6, result_color, 2);
        //模式特定信息
        if(calibration_mode_ == CalibrationMode::PREPARE)
        {
            std::string saved_info = "Saved poses: " + std::to_string(saved_poses_count_);
            cv::putText(image, saved_info, cv::Point(10, 100), cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(255, 255, 255), 1);
        }
        else
        {
            std::string pos_info = "Position: " + std::to_string(current_pose_index_) + "/" + std::to_string(saved_poses_.size());
            cv::putText(image, pos_info, cv::Point(10, 100), cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(255, 255, 255), 1);
            if(waiting_at_pose_)
            {
                cv::putText(image, "WAITING AT POSITION...", cv::Point(10, 125), cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(0, 255, 255), 1);
            }
        }
        // 控制说明
        std::string controls = (calibration_mode_ == CalibrationMode::PREPARE) ? 
            "s-save pos | t-teach mode toggle | q-quit" : 
            "s-save image | q-quit";
        cv::putText(image, controls, 
                   cv::Point(10, image.rows - 10), cv::FONT_HERSHEY_SIMPLEX, 0.4, cv::Scalar(255, 255, 255), 1);
    }

    void keyPressHandle(int key, const cv::Mat& image)
    {
        switch(key)
        {
            case 's':   //s键 - 保存位置/图像
                if(calibration_mode_ == CalibrationMode::PREPARE)
                    saveRobotPose();
                else 
                    saveImage(image);
                break;
            case 't':
                if(calibration_mode_ == CalibrationMode::PREPARE)
                {
                    teach_mode_ = !teach_mode_;
                    std_msgs::msg::Bool msg;
                    msg.data = teach_mode_;
                    teach_mode_pub_->publish(msg);
                }
                break;
            case 'q':
                rclcpp::shutdown();
                break;
            default:
                break;
        }
    }

    void cameraInfoCallback(const sensor_msgs::msg::CameraInfo::SharedPtr msg)
    {
        if(!camera_info_received_)
        {
            //提取相机内参
            camera_matrix_ = cv::Mat::eye(3, 3, CV_64F);  //3X3单位阵
            camera_matrix_.at<double>(0, 0) = msg->k[0];  // fx
            camera_matrix_.at<double>(1, 1) = msg->k[4];  // fy
            camera_matrix_.at<double>(0, 2) = msg->k[2];  // cx
            camera_matrix_.at<double>(1, 2) = msg->k[5];  // cy
            //提取畸变参数
            dist_coeffs_ = cv::Mat::zeros(1, 5, CV_64F);
            for(size_t i = 0; i < std::min(msg->d.size(), size_t(5)); i++)
            {
                dist_coeffs_.at<double>(0, i) = msg->d[i];
            }
            //接收完成标志位
            camera_info_received_ = true;
        }
    }

    void imageCallback(const sensor_msgs::msg::Image::SharedPtr msg)
    {
        if(!camera_info_received_) return; 


        // //calibration模式时的位置等待
        // if(calibration_mode_ == CalibrationMode::CALIBRATION)
        // {
        //     auto current_time = std::chrono::steady_clock::now();
        //     auto elapsed = std::chrono::duration_cast<std::chrono::seconds>(current_time - pose_start_time_).count();
        //     if(elapsed >= pose_wait_time_ / 2.0 && elapsed < pose_wait_time_)
        //         moveToNextPose();
        //     else if(elapsed >= pose_wait_time_)
        //         ;
        //     else
        //         return;
        // }

        //calibration模式时的位置等待
        if(calibration_mode_ == CalibrationMode::CALIBRATION)
        {
            if(calibration_status_ == CalibrationStatus::MOVE)
            {
                moveToNextPose();
            }
            else if(calibration_status_ == CalibrationStatus::WAIT)
            {
                auto current_time = std::chrono::steady_clock::now();
                auto elapsed = std::chrono::duration_cast<std::chrono::seconds>(current_time - pose_start_time_).count();   
                if(elapsed >= pose_wait_time_)
                {
                    calibration_status_ = CalibrationStatus::DETECT;
                }
            }
            else if(calibration_status_ == CalibrationStatus::DETECT)
            {
                calibration_status_ = CalibrationStatus::MOVE;
            }
        }

        //处理图像
        try
        {
            //转换图像格式
            cv_bridge::CvImagePtr cv_ptr = cv_bridge::toCvCopy(msg, sensor_msgs::image_encodings::BGR8);
            cv::Mat image = cv_ptr->image;
            cv::Mat gray;
            cv::cvtColor(image, gray, cv::COLOR_BGR2GRAY);
            //检测棋盘格子
            std::vector<cv::Point2f> corners;

            bool found = false;
            found = cv::findChessboardCorners(gray, board_size_, corners,
                                                cv::CALIB_CB_ADAPTIVE_THRESH |
                                                cv::CALIB_CB_NORMALIZE_IMAGE |
                                                cv::CALIB_CB_FAST_CHECK);
            if(found)
            {
                //亚像素精度优化
                cv::cornerSubPix(gray, corners, cv::Size(11, 11), cv::Size(-1, -1),
                                cv::TermCriteria(cv::TermCriteria::EPS + cv::TermCriteria::COUNT, 30, 0.1));
                //根据模式决定是否计算位姿
                if(calculate_pose_ && calibration_status_ == CalibrationStatus::DETECT)
                {
                    calculatePose(corners, msg->header);
                    saveImage(image);
                }
            }
            //创建显示图像
            cv::Mat display_image = image.clone();
            //绘制检测结果
            if(found)
            {
                cv::drawChessboardCorners(display_image, board_size_, corners, found);
                if(calculate_pose_)
                    drawCoordinateSystem(display_image, corners);
            }
            //显示状态信息
            drawDisplayStatus(display_image, found);
            //显示图像
            cv::imshow("Chessboard Detection", display_image);

            //处理键盘输入
            int key = cv::waitKey(1) & 0xFF;
            keyPressHandle(key, image);
        }catch(cv_bridge::Exception& e)
        {

        }
    }

    void ducoRobotStateCallback(duco_msg::msg::DucoRobotState::SharedPtr msg)
    {
        std::lock_guard<std::mutex> lock(duco_robot_state_mutex_);
        current_duco_robot_state_ = msg;
    }

    void jointStateCallback(const sensor_msgs::msg::JointState::SharedPtr msg)
    {
        //使用互斥锁保护对current_joint_state_的访问
        std::lock_guard<std::mutex> lock(joint_state_mutex_);
        current_joint_state_ = msg;
    }
    rclcpp::Client<duco_msg::srv::RobotMove>::SharedPtr robot_move_client_;
    rclcpp::Subscription<sensor_msgs::msg::CameraInfo>::SharedPtr camera_info_sub_;
    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr image_sub_;
    rclcpp::Subscription<sensor_msgs::msg::JointState>::SharedPtr joint_state_sub_;
    rclcpp::Subscription<duco_msg::msg::DucoRobotState>::SharedPtr duco_robot_state_sub_;
    rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr teach_mode_pub_;

    //相机参数
    cv::Mat camera_matrix_;
    cv::Mat dist_coeffs_;
    bool camera_info_received_;
    //棋盘格参数
    int board_width_;
    int board_height_;
    float square_size_; 
    cv::Size board_size_;
    std::vector<cv::Point3f> board_points_3d_;
    //标定变量
    CalibrationMode calibration_mode_; //标定模式
    CalibrationStatus calibration_status_;

    bool waiting_at_pose_;         //等待标志位
    double pose_wait_time_;        //等待时间
    std::chrono::steady_clock::time_point pose_start_time_; 

    sensor_msgs::msg::JointState::SharedPtr current_joint_state_;
    mutable std::mutex joint_state_mutex_;
    duco_msg::msg::DucoRobotState::SharedPtr current_duco_robot_state_;
    mutable std::mutex duco_robot_state_mutex_;

    std::vector<std::array<float, 6>> saved_joint_states_;
    std::vector<std::array<float, 6>> saved_poses_;
    int saved_poses_count_;       //保存的位置数量
    int saved_images_count_;      //保存的图片数量
    size_t current_pose_index_;   //当前位置号
    bool calculate_pose_;         //计算姿态标志位
    bool teach_mode_;
};

int main(int argc, char const *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<HandEyeCalibration>());
    rclcpp::shutdown();
    return 0;
}