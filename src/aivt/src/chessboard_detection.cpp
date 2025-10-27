#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/image.hpp>
#include <sensor_msgs/msg/camera_info.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <cv_bridge/cv_bridge.h>
#include <opencv2/opencv.hpp>
#include <opencv2/calib3d.hpp>
#include <vector>
#include <memory>
#include <Eigen/Dense>

class ChessboardDetection : public rclcpp::Node
{
public:
    ChessboardDetection() : Node("chessboard_detection_node"){
        // 初始化参数
        this->declare_parameter<int>("board_width", 11);
        this->declare_parameter<int>("board_height", 8);
        this->declare_parameter<double>("square_size", 0.020);  // 2.0cm
        // this->declare_parameter<bool>("save_detected_images", false);

        // 获取参数
        int board_width = this->get_parameter("board_width").as_int();
        int board_height = this->get_parameter("board_height").as_int();
        board_size_ = cv::Size(board_width, board_height);
        square_size_ = this->get_parameter("square_size").as_double();
        // bool save_images = this->get_parameter("save_detected_images").as_bool();

        // 初始化变量
        camera_info_received_ = false;
        detection_active_ = true;
        detection_count_ = 0;
        saved_images_count_ = 0;
        total_frames_ = 0;
        successful_detections_ = 0;

        // 创建订阅者
        image_sub_ = this->create_subscription<sensor_msgs::msg::Image>(
            "/camera/camera/color/image_raw", 10,
            std::bind(&ChessboardDetection::imageCallback, this, std::placeholders::_1));
            
        camera_info_sub_ = this->create_subscription<sensor_msgs::msg::CameraInfo>(
            "/camera/camera/color/camera_info", 10,
            std::bind(&ChessboardDetection::cameraInfoCallback, this, std::placeholders::_1));
        
        // 创建发布者 - 发布检测到的棋盘格位姿
        pose_pub_ = this->create_publisher<geometry_msgs::msg::PoseStamped>("/chessboard_pose", 10);
        

        // 初始化棋盘格3D点
        initializeBoardPoints();

        RCLCPP_INFO(this->get_logger(), "Chessboard Detector node initialized");
        RCLCPP_INFO(this->get_logger(), "Board size: %dx%d, Square size: %.3fm", 
                    board_width, board_height, square_size_);
        RCLCPP_INFO(this->get_logger(), "Controls:");
        RCLCPP_INFO(this->get_logger(), "  SPACE - Toggle detection on/off");
        RCLCPP_INFO(this->get_logger(), "  's' - Save current image");
        RCLCPP_INFO(this->get_logger(), "  'r' - Reset statistics");
        RCLCPP_INFO(this->get_logger(), "  'q' - Quit");
    }

private:
    void initializeBoardPoints()
    {
        board_points_3d_.clear();
        for (int i = 0; i < board_size_.height; i++) {
            for (int j = 0; j < board_size_.width; j++) {
                board_points_3d_.push_back(cv::Point3f(
                    j * square_size_, 
                    i * square_size_, 
                    0.0f));
            }
        }
        
        RCLCPP_INFO(this->get_logger(), "Initialized %ld 3D board points", board_points_3d_.size());
    }

    void cameraInfoCallback(const sensor_msgs::msg::CameraInfo::SharedPtr msg)
    {
        if (!camera_info_received_) {
            // 提取相机内参
            camera_matrix_ = cv::Mat::eye(3, 3, CV_64F);
            camera_matrix_.at<double>(0, 0) = msg->k[0];  // fx
            camera_matrix_.at<double>(1, 1) = msg->k[4];  // fy
            camera_matrix_.at<double>(0, 2) = msg->k[2];  // cx
            camera_matrix_.at<double>(1, 2) = msg->k[5];  // cy
            
            // 提取畸变系数
            dist_coeffs_ = cv::Mat::zeros(1, 5, CV_64F);
            for (size_t i = 0; i < std::min(msg->d.size(), size_t(5)); i++) {
                dist_coeffs_.at<double>(0, i) = msg->d[i];
            }
            
            camera_info_received_ = true;
            RCLCPP_INFO(this->get_logger(), "Camera parameters received");
            RCLCPP_INFO(this->get_logger(), "Camera matrix: fx=%.2f, fy=%.2f, cx=%.2f, cy=%.2f",
                       camera_matrix_.at<double>(0,0), camera_matrix_.at<double>(1,1),
                       camera_matrix_.at<double>(0,2), camera_matrix_.at<double>(1,2));
        }
    }
    
    void imageCallback(const sensor_msgs::msg::Image::SharedPtr msg)
    {
        if (!camera_info_received_) {
            return;
        }
        
        try {
            // 转换图像格式
            cv_bridge::CvImagePtr cv_ptr = cv_bridge::toCvCopy(msg, sensor_msgs::image_encodings::BGR8);
            cv::Mat image = cv_ptr->image;
            cv::Mat gray;
            cv::cvtColor(image, gray, cv::COLOR_BGR2GRAY);
            
            // 检测棋盘格子
            std::vector<cv::Point2f> corners;
            bool found = false;
            
            if (detection_active_) 
            {
                found = cv::findChessboardCorners(gray, board_size_, corners,
                    cv::CALIB_CB_ADAPTIVE_THRESH | 
                    cv::CALIB_CB_NORMALIZE_IMAGE |
                    cv::CALIB_CB_FAST_CHECK);
                
                if (found) {
                    // 亚像素精度优化
                    cv::cornerSubPix(gray, corners, cv::Size(11, 11), cv::Size(-1, -1),
                        cv::TermCriteria(cv::TermCriteria::EPS + cv::TermCriteria::COUNT, 30, 0.1));
                    
                    detection_count_++;
                    successful_detections_++;

                    //计算棋盘格位姿
                    calculateAndPublishPose(corners, msg->header);
                }
            }
            double rms = computeReprojectionRMS(
                board_points_3d_, 
                corners,         
                camera_matrix_,   
                dist_coeffs_     
            );
            static int count = 0;
            if(count <= 50)
            {
                count++;
            }
            else 
            {
                RCLCPP_INFO(this->get_logger(), "Frame reprojection RMS (px): %f", rms);
                count = 0;
            }



            // 创建显示图像
            cv::Mat display_image = image.clone();

            //绘制检测结果
            if (found && detection_active_){
                cv::drawChessboardCorners(display_image, board_size_, corners, found);
                
                drawCoordinateSystem(display_image, corners);
            }
            
            // 显示状态信息
            displayStatus(display_image, found);
            
            // 显示图像
            cv::imshow("Chessboard Detection", display_image);
            
            // 处理键盘输入
            int key = cv::waitKey(1) & 0xFF;
            handleKeyPress(key, image);
            
        } catch (cv_bridge::Exception& e) {
            RCLCPP_ERROR(this->get_logger(), "cv_bridge exception: %s", e.what());
        }
    }
    
    double computeReprojectionRMS(
        const std::vector<cv::Point3f>& object_points,
        const std::vector<cv::Point2f>& image_points,
        const cv::Mat& camera_matrix,
        const cv::Mat& dist_coeffs)
    {
        if(object_points.size() != image_points.size() || object_points.empty())
            return -1.0;
    
        cv::Mat rvec, tvec;
        bool ok = cv::solvePnP(object_points, image_points, camera_matrix, dist_coeffs, rvec, tvec, false, cv::SOLVEPNP_ITERATIVE);
        if(!ok) return -1.0;
    
        std::vector<cv::Point2f> projected_points;
        cv::projectPoints(object_points, rvec, tvec, camera_matrix, dist_coeffs, projected_points);
    
        double err_sq = 0.0;
        for(size_t i=0;i<projected_points.size();i++)
        {
            double dx = projected_points[i].x - image_points[i].x;
            double dy = projected_points[i].y - image_points[i].y;
            err_sq += dx*dx + dy*dy;
        }
    
        return std::sqrt(err_sq / projected_points.size());
    }

    void calculateAndPublishPose(const std::vector<cv::Point2f>& corners, 
        const std_msgs::msg::Header& header)
    {
        // 使用PnP求解棋盘格位姿
        cv::Mat rvec, tvec;
        bool success = cv::solvePnP(board_points_3d_, corners, camera_matrix_, 
                                    dist_coeffs_, rvec, tvec);
    
        if (success) {    
            // 转换为ROS消息并发布
            geometry_msgs::msg::PoseStamped pose_msg;
            pose_msg.header = header;
            pose_msg.header.frame_id = "camera_color_optical_frame";  

            // 设置位置
            pose_msg.pose.position.x = tvec.at<double>(0);
            pose_msg.pose.position.y = tvec.at<double>(1);
            pose_msg.pose.position.z = tvec.at<double>(2);

            // 将旋转向量转换为旋转矩阵，再转换为四元数
            cv::Mat rotation_matrix;
            cv::Rodrigues(rvec, rotation_matrix);
            
            // 转换为四元数（简化版本）
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
            Eigen::Quaternionf q(w, x, y, z);
            Eigen::Matrix3f R = q.toRotationMatrix();
            Eigen::Vector3f rpy = R.eulerAngles(2, 1, 0);
            // 发布位姿
            pose_pub_->publish(pose_msg);
            
            // 打印位姿信息（每10次检测打印一次）
            if (detection_count_ % 10 == 0) {
                RCLCPP_INFO(this->get_logger(), 
                           "Chessboard pose: pos(%.3f, %.3f, %.3f) orient(%.3f, %.3f, %.3f, %.3f), rpy(%.3f, %.3f, %.3f)",
                           pose_msg.pose.position.x, pose_msg.pose.position.y, pose_msg.pose.position.z,
                           pose_msg.pose.orientation.w, pose_msg.pose.orientation.x,
                           pose_msg.pose.orientation.y, pose_msg.pose.orientation.z,
                           rpy[2], rpy[1], rpy[0]);
            }           
        }
    }

    void drawCoordinateSystem(cv::Mat& image, const std::vector<cv::Point2f>& corners)
    {
        if (corners.size() < 4) return;
        
        // 计算位姿
        cv::Mat rvec, tvec;
        bool success = cv::solvePnP(board_points_3d_, corners, camera_matrix_, 
                                    dist_coeffs_, rvec, tvec);
        
        if (success) {
            // 定义坐标轴点（3D）
            std::vector<cv::Point3f> axis_points;
            axis_points.push_back(cv::Point3f(0, 0, 0));  // 原点
            axis_points.push_back(cv::Point3f(3*square_size_, 0, 0));  // X轴
            axis_points.push_back(cv::Point3f(0, 3*square_size_, 0));  // Y轴
            axis_points.push_back(cv::Point3f(0, 0, -3*square_size_)); // Z轴
            
            // 投影到图像平面
            std::vector<cv::Point2f> projected_points;
            cv::projectPoints(axis_points, rvec, tvec, camera_matrix_, dist_coeffs_, projected_points);
            
            if (projected_points.size() == 4) {
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

    void displayStatus(cv::Mat& image, bool detection_success)
    {
        // 设置状态背景
        cv::Mat overlay = image.clone();
        cv::rectangle(overlay, cv::Point(0, 0), cv::Point(400, 120), cv::Scalar(0, 0, 0), -1);
        cv::addWeighted(image, 0.7, overlay, 0.3, 0, image);
        
        // 检测状态
        std::string status = detection_active_ ? "DETECTION: ON" : "DETECTION: OFF";
        cv::Scalar status_color = detection_active_ ? cv::Scalar(0, 255, 0) : cv::Scalar(0, 0, 255);
        cv::putText(image, status, cv::Point(10, 25), cv::FONT_HERSHEY_SIMPLEX, 0.6, status_color, 2);
        
        // 当前帧检测结果
        std::string detection_result = detection_success ? "DETECTED" : "NOT DETECTED";
        cv::Scalar result_color = detection_success ? cv::Scalar(0, 255, 0) : cv::Scalar(0, 255, 255);
        cv::putText(image, detection_result, cv::Point(10, 50), cv::FONT_HERSHEY_SIMPLEX, 0.6, result_color, 2);
        
        // 统计信息
        double success_rate = total_frames_ > 0 ? (double)successful_detections_ / total_frames_ * 100.0 : 0.0;
        std::string stats = "Success: " + std::to_string(successful_detections_) + "/" + 
                           std::to_string(total_frames_) + " (" + 
                           std::to_string((int)success_rate) + "%)";
        cv::putText(image, stats, cv::Point(10, 75), cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(255, 255, 255), 1);
        
        // 控制说明
        cv::putText(image, "SPACE-toggle | s-save | r-reset | q-quit", 
                   cv::Point(10, image.rows - 10), cv::FONT_HERSHEY_SIMPLEX, 0.4, cv::Scalar(255, 255, 255), 1);
        
        // 参数信息
        std::string board_info = "Board: " + std::to_string(board_size_.width) + "x" + 
                                std::to_string(board_size_.height) + ", Size: " + 
                                std::to_string((int)(square_size_*1000)) + "mm";
        cv::putText(image, board_info, cv::Point(10, 100), cv::FONT_HERSHEY_SIMPLEX, 0.4, cv::Scalar(200, 200, 200), 1);
    }

    void handleKeyPress(int key, const cv::Mat& image)
    {
        switch(key) {
            case ' ':  // 空格键 - 切换检测开关
                detection_active_ = !detection_active_;
                RCLCPP_INFO(this->get_logger(), "Detection %s", detection_active_ ? "ON" : "OFF");
                break;
                
            case 's':  // s键 - 保存当前图像
                saveImage(image);
                break;
                
            case 'r':  // r键 - 重置统计
                resetStatistics();
                break;
                
            case 'q':  // q键 - 退出
                RCLCPP_INFO(this->get_logger(), "Shutting down...");
                rclcpp::shutdown();
                break;
                
            default:
                break;
        }
    }

    void saveImage(const cv::Mat& image)
    {
        std::string filename = "chessboard_" + std::to_string(saved_images_count_) + ".jpg";
        cv::imwrite(filename, image);
        saved_images_count_++;
        RCLCPP_INFO(this->get_logger(), "Image saved: %s", filename.c_str());
    }
    
    void resetStatistics()
    {
        total_frames_ = 0;
        successful_detections_ = 0;
        detection_count_ = 0;
        RCLCPP_INFO(this->get_logger(), "Statistics reset");
    }

    // ROS2 订阅者和发布者
    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr image_sub_;
    rclcpp::Subscription<sensor_msgs::msg::CameraInfo>::SharedPtr camera_info_sub_;
    rclcpp::Publisher<geometry_msgs::msg::PoseStamped>::SharedPtr pose_pub_;

    // 相机参数
    cv::Mat camera_matrix_;
    cv::Mat dist_coeffs_;
    bool camera_info_received_;

    // 棋盘格参数
    cv::Size board_size_;           // 棋盘格内角点数量 (cols-1, rows-1)
    float square_size_;             // 棋盘格方格大小(米)
    std::vector<cv::Point3f> board_points_3d_;  // 棋盘格3D点

    // 检测状态
    bool detection_active_;
    int detection_count_;
    int saved_images_count_;   

   // 统计信息
   int total_frames_;
   int successful_detections_;
};


int main(int argc, char** argv)
{
    rclcpp::init(argc, argv);
    
    auto node = std::make_shared<ChessboardDetection>();
    
    RCLCPP_INFO(node->get_logger(), "Starting chessboard detection...");
    
    rclcpp::spin(node);
    
    cv::destroyAllWindows();
    rclcpp::shutdown();
    
    return 0;
}