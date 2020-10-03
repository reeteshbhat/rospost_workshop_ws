// Generated by gencpp from file rotors_comm/OctomapResponse.msg
// DO NOT EDIT!


#ifndef ROTORS_COMM_MESSAGE_OCTOMAPRESPONSE_H
#define ROTORS_COMM_MESSAGE_OCTOMAPRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <octomap_msgs/Octomap.h>

namespace rotors_comm
{
template <class ContainerAllocator>
struct OctomapResponse_
{
  typedef OctomapResponse_<ContainerAllocator> Type;

  OctomapResponse_()
    : map()
    , origin_latitude(0.0)
    , origin_longitude(0.0)
    , origin_altitude(0.0)  {
    }
  OctomapResponse_(const ContainerAllocator& _alloc)
    : map(_alloc)
    , origin_latitude(0.0)
    , origin_longitude(0.0)
    , origin_altitude(0.0)  {
  (void)_alloc;
    }



   typedef  ::octomap_msgs::Octomap_<ContainerAllocator>  _map_type;
  _map_type map;

   typedef double _origin_latitude_type;
  _origin_latitude_type origin_latitude;

   typedef double _origin_longitude_type;
  _origin_longitude_type origin_longitude;

   typedef double _origin_altitude_type;
  _origin_altitude_type origin_altitude;





  typedef boost::shared_ptr< ::rotors_comm::OctomapResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rotors_comm::OctomapResponse_<ContainerAllocator> const> ConstPtr;

}; // struct OctomapResponse_

typedef ::rotors_comm::OctomapResponse_<std::allocator<void> > OctomapResponse;

typedef boost::shared_ptr< ::rotors_comm::OctomapResponse > OctomapResponsePtr;
typedef boost::shared_ptr< ::rotors_comm::OctomapResponse const> OctomapResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rotors_comm::OctomapResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rotors_comm::OctomapResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rotors_comm

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'rotors_comm': ['/home/reetesh/post_workshop_ws/src/edrone_rotors/rotors_comm/msg'], 'geometry_msgs': ['/home/reetesh/post_workshop_ws/src/geometry_msgs/msg'], 'octomap_msgs': ['/opt/ros/kinetic/share/octomap_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rotors_comm::OctomapResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rotors_comm::OctomapResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rotors_comm::OctomapResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rotors_comm::OctomapResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rotors_comm::OctomapResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rotors_comm::OctomapResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rotors_comm::OctomapResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "57e29816a04b311c573d5337632a1156";
  }

  static const char* value(const ::rotors_comm::OctomapResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x57e29816a04b311cULL;
  static const uint64_t static_value2 = 0x573d5337632a1156ULL;
};

template<class ContainerAllocator>
struct DataType< ::rotors_comm::OctomapResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rotors_comm/OctomapResponse";
  }

  static const char* value(const ::rotors_comm::OctomapResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rotors_comm::OctomapResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
octomap_msgs/Octomap map\n\
\n\
float64 origin_latitude\n\
\n\
float64 origin_longitude\n\
\n\
float64 origin_altitude\n\
\n\
\n\
================================================================================\n\
MSG: octomap_msgs/Octomap\n\
# A 3D map in binary format, as Octree\n\
Header header\n\
\n\
# Flag to denote a binary (only free/occupied) or full occupancy octree (.bt/.ot file)\n\
bool binary\n\
\n\
# Class id of the contained octree \n\
string id\n\
\n\
# Resolution (in m) of the smallest octree nodes\n\
float64 resolution\n\
\n\
# binary serialization of octree, use conversions.h to read and write octrees\n\
int8[] data\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::rotors_comm::OctomapResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rotors_comm::OctomapResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.map);
      stream.next(m.origin_latitude);
      stream.next(m.origin_longitude);
      stream.next(m.origin_altitude);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct OctomapResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rotors_comm::OctomapResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rotors_comm::OctomapResponse_<ContainerAllocator>& v)
  {
    s << indent << "map: ";
    s << std::endl;
    Printer< ::octomap_msgs::Octomap_<ContainerAllocator> >::stream(s, indent + "  ", v.map);
    s << indent << "origin_latitude: ";
    Printer<double>::stream(s, indent + "  ", v.origin_latitude);
    s << indent << "origin_longitude: ";
    Printer<double>::stream(s, indent + "  ", v.origin_longitude);
    s << indent << "origin_altitude: ";
    Printer<double>::stream(s, indent + "  ", v.origin_altitude);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROTORS_COMM_MESSAGE_OCTOMAPRESPONSE_H