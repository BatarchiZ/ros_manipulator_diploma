#include "ros/ros.h"

int main(int argc, char **argv)
{
    // Initialize the node, and give it a name
    ros::init(argc, argv, "node_cpp_practice");
    ros::NodeHandle n;

    // Add a comment that will be printed on the terminal when the node is running
    ROS_INFO("Hello, node is started");
    ros::Duration(3.0).sleep();

    ros::Rate loop_rate(10);

    while (ros::ok())
    {
        ROS_INFO("This is a node running in CPP");
        ros::spinOnce();
        loop_rate.sleep();
    }

    ROS_INFO("Finished to execute the node, Exit now!");
};