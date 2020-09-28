#!/usr/bin/env python

import rospy
from std_msgs.msg import Float64

def talker():
	pub1 = rospy.Publisher('/rrbot/joint1_position_controller/command',Float64, queue_size = 10)
	
	rospy.init_node('talker', anonymous = True)
	rate = rospy.Rate(5) 

	while not rospy.is_shutdown():
		msg_to_pub = 5
		pub1.publish(msg_to_pub)
		rate.sleep

if __name__ == '__main__':
	try:
		talker()

	except rospy.ROSIterruptException:
		pass

