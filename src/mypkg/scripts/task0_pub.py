#!/usr/bin/env python

import rospy
from std_msgs.msg import String

def talker():
	pub1 = rospy.Publisher('chatter',String, queue_size = 10)
	pub2 = rospy.Publisher('chatter1',String, queue_size = 10)
	rospy.init_node('talker', anonymous = True)
	rate = rospy.Rate(5) 

	while not rospy.is_shutdown():
		msg_to_pub = "Hey there! %s" % rospy.get_time()
		pub1.publish(msg_to_pub)
		pub2.publish(msg_to_pub)
		rate.sleep

if __name__ == '__main__':
	try:
		talker()

	except rospy.ROSIterruptException:
		pass


