#include "rclcpp/rclcpp.hpp"
#include "opencv2/opencv.hpp"
#include "opencv2/calib3d.hpp"
#include "yaml-cpp/yaml.h"
#include <fstream>
#include <filesystem>
#include "Eigen/Dense"

class CalibrationCalculation : public rclcpp::Node
{
public:
    CalibrationCalculation() : Node("calibration_calculation_node")
    {
        clearHandEyeTransformer();

        loadCalibrationData();
        loadRobotPose();

        performCalculation();
        saveHandEyeTransformer();
    }
private:
    std::vector<cv::Mat> robot_to_gripper_;  // 机器人基座到末端执行器的变换
    std::vector<cv::Mat> camera_to_target_;  // 相机到标定板的变换
    cv::Mat hand_eye_transform_;             // 手眼标定结果（末端执行器到相机）
    
    void loadCalibrationData()
    {
        YAML::Node calibration_data_yaml = YAML::LoadFile("/home/user/ws_siasun/src/aivt/config/calibration_data.yaml");
        YAML::Node calibration_data_node = calibration_data_yaml["calibration_data"];

        for(const auto& node : calibration_data_node)
        {
            if(!node["position"] || !node["orientation"])
            {
                RCLCPP_ERROR(this->get_logger(), "Invalid node");
                continue;
            }
            //读取position
            double px = node["position"]["x"].as<double>();
            double py = node["position"]["y"].as<double>();
            double pz = node["position"]["z"].as<double>();
            //读取orientation
            double qx = node["orientation"]["x"].as<double>();
            double qy = node["orientation"]["y"].as<double>();
            double qz = node["orientation"]["z"].as<double>();
            double qw = node["orientation"]["w"].as<double>();
            //四元数->旋转矩阵
            Eigen::Quaterniond q(qw, qx, qy, qz);
            q.normalize();
            Eigen::Matrix3d R = q.toRotationMatrix();
            //齐次矩阵
            Eigen::Matrix4d T = Eigen::Matrix4d::Identity();
            T.block<3,3>(0,0) = R;
            T(0,3) = px;
            T(1,3) = py;
            T(2,3) = pz;
            cv::Mat T_cv(4, 4, CV_64F);
            for(int i = 0; i < 4; i++)
            {
                for(int j = 0; j < 4; j++)
                {
                    T_cv.at<double>(i,j) = T(i,j);
                }
            }
            camera_to_target_.push_back(T_cv);
        }
        RCLCPP_INFO(this->get_logger(), "Loaded %zu camera_to_target transformers", camera_to_target_.size());
    }

    void loadRobotPose()
    {
        YAML::Node robot_pose_yaml = YAML::LoadFile("/home/user/ws_siasun/src/aivt/config/robot_pose.yaml");
        YAML::Node robot_pose_node = robot_pose_yaml["robot_pose"];
        for(const auto& node : robot_pose_node)
        {
            if(!node["duco_robot_state"]) continue; // 只处理duco_robot_state

            double x     = node["duco_robot_state"][0].as<double>();
            double y     = node["duco_robot_state"][1].as<double>();
            double z     = node["duco_robot_state"][2].as<double>();
            double roll  = node["duco_robot_state"][3].as<double>();
            double pitch = node["duco_robot_state"][4].as<double>();
            double yaw   = node["duco_robot_state"][5].as<double>();

            Eigen::AngleAxisd Rx(roll, Eigen::Vector3d::UnitX());
            Eigen::AngleAxisd Ry(pitch, Eigen::Vector3d::UnitY());
            Eigen::AngleAxisd Rz(yaw, Eigen::Vector3d::UnitZ());
            Eigen::Matrix3d R = Rz.toRotationMatrix() * 
                                Ry.toRotationMatrix() * 
                                Rx.toRotationMatrix();

            cv::Mat T = cv::Mat::eye(4, 4, CV_64F);
            for(int i = 0; i < 3; i++)
            {
                for(int j = 0; j < 3; j++)
                {
                    T.at<double>(i, j) = R(i, j);
                }
            }
            T.at<double>(0,3) = x;
            T.at<double>(1,3) = y;
            T.at<double>(2,3) = z;

            robot_to_gripper_.push_back(T);
        }
        RCLCPP_INFO(this->get_logger(), "Loaded %zu robot_to_gripper transformers", robot_to_gripper_.size());
    }
    
    void performCalculation()
    {
        // 提取旋转和平移向量用于OpenCV标定
        std::vector<cv::Mat> R_gripper2base, t_gripper2base;
        std::vector<cv::Mat> R_target2cam, t_target2cam;
        for (const auto& robot_transform : robot_to_gripper_)
        {
            cv::Mat R = robot_transform(cv::Rect(0, 0, 3, 3)).clone();
            cv::Mat t = robot_transform(cv::Rect(3, 0, 1, 3)).clone();
            R_gripper2base.push_back(R);
            t_gripper2base.push_back(t);
        }
        for (const auto& camera_transform : camera_to_target_)
        {
            cv::Mat R = camera_transform(cv::Rect(0, 0, 3, 3)).clone();   // 左上角 3x3
            cv::Mat t = camera_transform(cv::Rect(3, 0, 1, 3)).clone();   // 右上角 3x1
        
            R_target2cam.push_back(R);
            t_target2cam.push_back(t);
        }
            
        // 执行手眼标定
        cv::Mat R_cam2gripper, t_cam2gripper;
        cv::calibrateHandEye(
            R_gripper2base, t_gripper2base,
            R_target2cam, t_target2cam,
            R_cam2gripper, t_cam2gripper,
            cv::CALIB_HAND_EYE_TSAI  // 使用Tsai方法
        );
        hand_eye_transform_ = cv::Mat::eye(4, 4, CV_64F);
        R_cam2gripper.copyTo(hand_eye_transform_(cv::Rect(0, 0, 3, 3)));
        t_cam2gripper.copyTo(hand_eye_transform_(cv::Rect(3, 0, 1, 3)));
        hand_eye_transform_.at<double>(3,0) = 0.0;
        hand_eye_transform_.at<double>(3,1) = 0.0;
        hand_eye_transform_.at<double>(3,2) = 0.0;
        hand_eye_transform_.at<double>(3,3) = 1.0;

        //打印结果
        for(int i = 0; i < 4; i++)
        {
            std::ostringstream oss;
            for(int j = 0; j < 4; j++)
            {
                oss << hand_eye_transform_.at<double>(i,j);
                if(j < 3) oss << ", ";
            }
            RCLCPP_INFO(this->get_logger(), "%s", oss.str().c_str());
        }
    }
    
    void saveHandEyeTransformer()
    {
        //加载文件或者创建空序列
        YAML::Node hand_eye_transformer_yaml;
        try
        {
            hand_eye_transformer_yaml = 
                YAML::LoadFile("/home/user/ws_siasun/src/aivt/config/hand_eye_transformer.yaml");
        }catch(const std::exception& e)
        {
            hand_eye_transformer_yaml["hand_eye_transformer"] = YAML::Node(YAML::NodeType::Sequence);
        }

        YAML::Node rotation_node, translation_node;
        for (int i = 0; i < 3; ++i)
        {
            YAML::Node row;
            for (int j = 0; j < 3; ++j)
            {
                row.push_back(hand_eye_transform_.at<double>(i,j));
            }
            rotation_node.push_back(row);
            translation_node.push_back(hand_eye_transform_.at<double>(i,3));
        }
        hand_eye_transformer_yaml["rotation"] = rotation_node;
        hand_eye_transformer_yaml["translation"] = translation_node;

        //保存文件
        std::ofstream fout("/home/user/ws_siasun/src/aivt/config/hand_eye_transformer.yaml");
        if (!fout.is_open()) return;
        fout << hand_eye_transformer_yaml;
        fout.close();
    }

    void clearHandEyeTransformer()
    {
        std::string file = "/home/user/ws_siasun/src/aivt/config/hand_eye_transformer.yaml";
    
        if (std::filesystem::exists(file)) {
            std::filesystem::remove(file);
        }
    }
};

int main(int argc, char** argv)
{
    rclcpp::init(argc, argv);
    
    auto node = std::make_shared<CalibrationCalculation>();
    
    // 由于这是一个一次性计算任务，不需要spin
    rclcpp::shutdown();
    
    return 0;
}