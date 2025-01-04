#include "ros/ros.h"
#include "std_msgs/String.h"


int main(int argc, char **argv)
{
    ros::init(argc, argv, "publisher");
    ros::NodeHandle n;
    ros::Publisher pub = n.advertise<std_msgs::String>("message_topic", 1000);

    ROS_INFO("Hello, node is started");

    ros::Rate loop_rate(10);

    while (ros::ok())
    {
        std_msgs::String msg;
        msg.data = "This is a message to publish: Hello!!!";

        pub.publish(msg);
        ros::spinOnce();
        loop_rate.sleep();
    }
};