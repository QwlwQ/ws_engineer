#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/point_cloud2.hpp"
#include "pcl/point_types.h"
#include "pcl_conversions/pcl_conversions.h"
#include "pcl/filters/voxel_grid.h"
#include "pcl/filters/passthrough.h"
#include <pcl/common/common.h>  
#include "visualization_msgs/msg/marker.hpp"

class ObstacleAvoidance: public rclcpp::Node{
public:
    ObstacleAvoidance():Node("obstacle_avoidance_node_cpp")
    {
        marker_pub_ = this->create_publisher<visualization_msgs::msg::Marker>("bounding_box_marker", 10);
        point_cloud_sub_ = this->create_subscription<sensor_msgs::msg::PointCloud2>
                            ("/camera/camera/depth/color/points", 10,
                            std::bind(&ObstacleAvoidance::pointCloudCallback, this, std::placeholders::_1));
        
        point_cloud_pub_ = this->create_publisher<sensor_msgs::msg::PointCloud2>("/filtered_point_cloud", 10);
    }

private:
    void pointCloudCallback(const sensor_msgs::msg::PointCloud2::SharedPtr msg)
    {
        //点云转换为PCL支持的格式
        pcl::PointCloud<pcl::PointXYZ>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZ>);
        pcl::fromROSMsg(*msg, *cloud);

        //采样滤波
        pcl::VoxelGrid<pcl::PointXYZ> sor;
        sor.setInputCloud(cloud);
        sor.setLeafSize(0.01f, 0.01f, 0.01f);
        pcl::PointCloud<pcl::PointXYZ>::Ptr filtered(new pcl::PointCloud<pcl::PointXYZ>);
        sor.filter(*filtered);

        pcl::PassThrough<pcl::PointXYZ> pass;
        pass.setInputCloud(filtered);
        pass.setFilterFieldName("z");
        pass.setFilterLimits(0.1, 0.5);
        pass.filter(*filtered);
        
        RCLCPP_INFO(this->get_logger(), "Received cloud with %zu points, after filtering: %zu points",
                    cloud->points.size(), filtered->points.size());
        
        pcl::PointXYZ min_point, max_point;
        pcl::getMinMax3D(*filtered, min_point, max_point);
        RCLCPP_INFO(this->get_logger(), "%f, %f, %f", min_point.x, min_point.y, min_point.z);
        RCLCPP_INFO(this->get_logger(), "%f, %f, %f", max_point.x, max_point.y, max_point.z);

        //将滤波后的点云转换为ROS2 PointCloud2消息
        sensor_msgs::msg::PointCloud2 output_msg;
        pcl::toROSMsg(*filtered, output_msg);
        output_msg.header.stamp = this->get_clock()->now();
        output_msg.header.frame_id = "camera_depth_optical_frame";

        // //发布滤波后的点云
        point_cloud_pub_->publish(output_msg);

        visualization_msgs::msg::Marker box_marker;
        box_marker.header.frame_id = "camera_depth_optical_frame";
        box_marker.header.stamp = this->get_clock()->now();
        box_marker.ns = "bounding_box";
        box_marker.id = 0;
        box_marker.type = visualization_msgs::msg::Marker::LINE_LIST;
        box_marker.action = visualization_msgs::msg::Marker::ADD;
        box_marker.scale.x = 0.01;  // 设置线的宽度
        box_marker.color.r = 1.0f;  // 设置颜色为红色
        box_marker.color.g = 0.0f;
        box_marker.color.b = 0.0f;
        box_marker.color.a = 1.0f;  // 设置透明度为1，不透明

        // 定义8个角点
        std::vector<geometry_msgs::msg::Point> points;
        geometry_msgs::msg::Point p1, p2, p3, p4, p5, p6, p7, p8;

        // 填充点坐标
        p1.x = min_point.x; p1.y = min_point.y; p1.z = min_point.z;
        p2.x = max_point.x; p2.y = min_point.y; p2.z = min_point.z;
        p3.x = max_point.x; p3.y = max_point.y; p3.z = min_point.z;
        p4.x = min_point.x; p4.y = max_point.y; p4.z = min_point.z;
        p5.x = min_point.x; p5.y = min_point.y; p5.z = max_point.z;
        p6.x = max_point.x; p6.y = min_point.y; p6.z = max_point.z;
        p7.x = max_point.x; p7.y = max_point.y; p7.z = max_point.z;
        p8.x = min_point.x; p8.y = max_point.y; p8.z = max_point.z;

        // 将点加入到points数组中
        points.push_back(p1);
        points.push_back(p2);
        points.push_back(p3);
        points.push_back(p4);
        points.push_back(p5);
        points.push_back(p6);
        points.push_back(p7);
        points.push_back(p8);

        // 手动连接点，确保每两个点之间连接一条线
        std::vector<geometry_msgs::msg::Point> lines;

        // 底面四条边
        lines.push_back(p1); lines.push_back(p2);  // p1 -> p2
        lines.push_back(p2); lines.push_back(p3);  // p2 -> p3
        lines.push_back(p3); lines.push_back(p4);  // p3 -> p4
        lines.push_back(p4); lines.push_back(p1);  // p4 -> p1

        // 顶面四条边
        lines.push_back(p5); lines.push_back(p6);  // p5 -> p6
        lines.push_back(p6); lines.push_back(p7);  // p6 -> p7
        lines.push_back(p7); lines.push_back(p8);  // p7 -> p8
        lines.push_back(p8); lines.push_back(p5);  // p8 -> p5

        // 连接底面和顶面四条边
        lines.push_back(p1); lines.push_back(p5);  // p1 -> p5
        lines.push_back(p2); lines.push_back(p6);  // p2 -> p6
        lines.push_back(p3); lines.push_back(p7);  // p3 -> p7
        lines.push_back(p4); lines.push_back(p8);  // p4 -> p8

        // 将连接的线添加到box_marker中
        for (size_t i = 0; i < lines.size(); i++) {
            box_marker.points.push_back(lines[i]);
        }
        // // 定义包围盒的8个角点
        // std::vector<geometry_msgs::msg::Point> points;
        // geometry_msgs::msg::Point p1;
        // p1.x = min_point.x;
        // p1.y = min_point.y;
        // p1.z = min_point.z;
        // points.push_back(p1);

        // geometry_msgs::msg::Point p2;
        // p2.x = max_point.x;
        // p2.y = min_point.y;
        // p2.z = min_point.z;
        // points.push_back(p2);
    
        // geometry_msgs::msg::Point p3;
        // p3.x = max_point.x;
        // p3.y = max_point.y;
        // p3.z = min_point.z;
        // points.push_back(p3);

        // geometry_msgs::msg::Point p4;
        // p4.x = min_point.x;
        // p4.y = max_point.y;
        // p4.z = min_point.z;
        // points.push_back(p4);

        // geometry_msgs::msg::Point p5;
        // p5.x = min_point.x;
        // p5.y = min_point.y;
        // p5.z = max_point.z;
        // points.push_back(p5);

        // geometry_msgs::msg::Point p6;
        // p6.x = max_point.x;
        // p6.y = min_point.y;
        // p6.z = max_point.z;
        // points.push_back(p6);
    
        // geometry_msgs::msg::Point p7;
        // p7.x = max_point.x;
        // p7.y = max_point.y;
        // p7.z = max_point.z;
        // points.push_back(p7);

        // geometry_msgs::msg::Point p8;
        // p8.x = min_point.x;
        // p8.y = max_point.y;
        // p8.z = max_point.z;
        // points.push_back(p8);

        // // 设置包围盒的点数据
        // for (size_t i = 0; i < 8; i++)
        // {
        //     box_marker.points.push_back(points[i]);
        // }

        // 发布边界框Marker
        marker_pub_->publish(box_marker);        
    }

    rclcpp::Subscription<sensor_msgs::msg::PointCloud2>::SharedPtr point_cloud_sub_;
    rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr point_cloud_pub_;
    rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr marker_pub_;
};    

int main(int argc, char const *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<ObstacleAvoidance>());
    rclcpp::shutdown();
    return 0;
}