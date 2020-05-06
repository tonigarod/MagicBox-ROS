// Generated by gencpp from file hrwros_msgs/TargetToolPoses.msg
// DO NOT EDIT!


#ifndef HRWROS_MSGS_MESSAGE_TARGETTOOLPOSES_H
#define HRWROS_MSGS_MESSAGE_TARGETTOOLPOSES_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/PoseStamped.h>
#include <geometry_msgs/PoseStamped.h>
#include <geometry_msgs/PoseStamped.h>
#include <geometry_msgs/PoseStamped.h>

namespace hrwros_msgs
{
template <class ContainerAllocator>
struct TargetToolPoses_
{
  typedef TargetToolPoses_<ContainerAllocator> Type;

  TargetToolPoses_()
    : header()
    , pick_approach()
    , pick_pose()
    , pick_retreat()
    , place_pose()  {
    }
  TargetToolPoses_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , pick_approach(_alloc)
    , pick_pose(_alloc)
    , pick_retreat(_alloc)
    , place_pose(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::geometry_msgs::PoseStamped_<ContainerAllocator>  _pick_approach_type;
  _pick_approach_type pick_approach;

   typedef  ::geometry_msgs::PoseStamped_<ContainerAllocator>  _pick_pose_type;
  _pick_pose_type pick_pose;

   typedef  ::geometry_msgs::PoseStamped_<ContainerAllocator>  _pick_retreat_type;
  _pick_retreat_type pick_retreat;

   typedef  ::geometry_msgs::PoseStamped_<ContainerAllocator>  _place_pose_type;
  _place_pose_type place_pose;





  typedef boost::shared_ptr< ::hrwros_msgs::TargetToolPoses_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hrwros_msgs::TargetToolPoses_<ContainerAllocator> const> ConstPtr;

}; // struct TargetToolPoses_

typedef ::hrwros_msgs::TargetToolPoses_<std::allocator<void> > TargetToolPoses;

typedef boost::shared_ptr< ::hrwros_msgs::TargetToolPoses > TargetToolPosesPtr;
typedef boost::shared_ptr< ::hrwros_msgs::TargetToolPoses const> TargetToolPosesConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hrwros_msgs::TargetToolPoses_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hrwros_msgs::TargetToolPoses_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace hrwros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'shape_msgs': ['/opt/ros/melodic/share/shape_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'moveit_msgs': ['/opt/ros/melodic/share/moveit_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/melodic/share/trajectory_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'object_recognition_msgs': ['/opt/ros/melodic/share/object_recognition_msgs/cmake/../msg'], 'octomap_msgs': ['/opt/ros/melodic/share/octomap_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'hrwros_msgs': ['/home/tonigarod/git/MagicBox-ROS/hrwros_ws/src/hrwros/hrwros_msgs/msg', '/home/tonigarod/git/MagicBox-ROS/hrwros_ws/devel/.private/hrwros_msgs/share/hrwros_msgs/msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::hrwros_msgs::TargetToolPoses_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hrwros_msgs::TargetToolPoses_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hrwros_msgs::TargetToolPoses_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hrwros_msgs::TargetToolPoses_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hrwros_msgs::TargetToolPoses_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hrwros_msgs::TargetToolPoses_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hrwros_msgs::TargetToolPoses_<ContainerAllocator> >
{
  static const char* value()
  {
    return "92d21c88158c4209a26e8da56b2c4ba2";
  }

  static const char* value(const ::hrwros_msgs::TargetToolPoses_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x92d21c88158c4209ULL;
  static const uint64_t static_value2 = 0xa26e8da56b2c4ba2ULL;
};

template<class ContainerAllocator>
struct DataType< ::hrwros_msgs::TargetToolPoses_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hrwros_msgs/TargetToolPoses";
  }

  static const char* value(const ::hrwros_msgs::TargetToolPoses_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hrwros_msgs::TargetToolPoses_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"geometry_msgs/PoseStamped pick_approach  # Robot tool pose right before picking\n"
"geometry_msgs/PoseStamped pick_pose      # Robot tool makes contact with the object and closes its gripper\n"
"geometry_msgs/PoseStamped pick_retreat   # Robot tool moves the object away from its resting surface\n"
"geometry_msgs/PoseStamped place_pose     # Robot tool moves object to this location and opens gripper\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseStamped\n"
"# A Pose with reference coordinate frame and timestamp\n"
"Header header\n"
"Pose pose\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::hrwros_msgs::TargetToolPoses_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hrwros_msgs::TargetToolPoses_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.pick_approach);
      stream.next(m.pick_pose);
      stream.next(m.pick_retreat);
      stream.next(m.place_pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TargetToolPoses_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hrwros_msgs::TargetToolPoses_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hrwros_msgs::TargetToolPoses_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "pick_approach: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.pick_approach);
    s << indent << "pick_pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.pick_pose);
    s << indent << "pick_retreat: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.pick_retreat);
    s << indent << "place_pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.place_pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HRWROS_MSGS_MESSAGE_TARGETTOOLPOSES_H
