#!/usr/bin/env python3

import rospy
from rospy_tutorials.srv import AddTwoInts

def handle_callback(req):
    result_sum = req.a + req.b
    rospy.loginfo(str(req.a)+ " + " + str(req.b) + " = " + str(result_sum))
    return result_sum



if __name__ == '__main__':
    rospy.init_node("add_two_ints_service_server")

    server = rospy.Service("/add_two_ints", AddTwoInts, handle_callback)
    rospy.loginfo("Service started")
    rospy.spin()
