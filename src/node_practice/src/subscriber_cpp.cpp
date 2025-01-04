#include "ros/ros.h"
#include "std_msgs/String.h"

void Callback_function(const std_msgs::String& msg)
{
    ROS_INFO("This is the message I heard: %s", msg.data.c_str());

};


int main(int argc, char **argv)
{
    ros::init(argc, argv, "subscriber");
    ros::NodeHandle n;
    ros::Subscriber sub = n.subscribe("message_topic", 1000, Callback_function);
    ros::spin();
    return 0;
}