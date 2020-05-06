// Generated by gencpp from file hrwros_msgs/RobotTrajectories.msg
// DO NOT EDIT!


#ifndef HRWROS_MSGS_MESSAGE_ROBOTTRAJECTORIES_H
#define HRWROS_MSGS_MESSAGE_ROBOTTRAJECTORIES_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <moveit_msgs/RobotTrajectory.h>
#include <moveit_msgs/RobotTrajectory.h>
#include <moveit_msgs/RobotTrajectory.h>
#include <moveit_msgs/RobotTrajectory.h>

namespace hrwros_msgs
{
template <class ContainerAllocator>
struct RobotTrajectories_
{
  typedef RobotTrajectories_<ContainerAllocator> Type;

  RobotTrajectories_()
    : header()
    , cur_to_approach()
    , approach_to_pick()
    , pick_to_retreat()
    , retreat_to_place()
    , trajectory_delays()
    , execution_duration()
    , pick_deadline()  {
    }
  RobotTrajectories_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , cur_to_approach(_alloc)
    , approach_to_pick(_alloc)
    , pick_to_retreat(_alloc)
    , retreat_to_place(_alloc)
    , trajectory_delays(_alloc)
    , execution_duration(_alloc)
    , pick_deadline()  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::moveit_msgs::RobotTrajectory_<ContainerAllocator>  _cur_to_approach_type;
  _cur_to_approach_type cur_to_approach;

   typedef  ::moveit_msgs::RobotTrajectory_<ContainerAllocator>  _approach_to_pick_type;
  _approach_to_pick_type approach_to_pick;

   typedef  ::moveit_msgs::RobotTrajectory_<ContainerAllocator>  _pick_to_retreat_type;
  _pick_to_retreat_type pick_to_retreat;

   typedef  ::moveit_msgs::RobotTrajectory_<ContainerAllocator>  _retreat_to_place_type;
  _retreat_to_place_type retreat_to_place;

   typedef std::vector<ros::Duration, typename ContainerAllocator::template rebind<ros::Duration>::other >  _trajectory_delays_type;
  _trajectory_delays_type trajectory_delays;

   typedef std::vector<ros::Duration, typename ContainerAllocator::template rebind<ros::Duration>::other >  _execution_duration_type;
  _execution_duration_type execution_duration;

   typedef ros::Time _pick_deadline_type;
  _pick_deadline_type pick_deadline;





  typedef boost::shared_ptr< ::hrwros_msgs::RobotTrajectories_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hrwros_msgs::RobotTrajectories_<ContainerAllocator> const> ConstPtr;

}; // struct RobotTrajectories_

typedef ::hrwros_msgs::RobotTrajectories_<std::allocator<void> > RobotTrajectories;

typedef boost::shared_ptr< ::hrwros_msgs::RobotTrajectories > RobotTrajectoriesPtr;
typedef boost::shared_ptr< ::hrwros_msgs::RobotTrajectories const> RobotTrajectoriesConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hrwros_msgs::RobotTrajectories_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hrwros_msgs::RobotTrajectories_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::hrwros_msgs::RobotTrajectories_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hrwros_msgs::RobotTrajectories_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hrwros_msgs::RobotTrajectories_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hrwros_msgs::RobotTrajectories_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hrwros_msgs::RobotTrajectories_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hrwros_msgs::RobotTrajectories_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hrwros_msgs::RobotTrajectories_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bb6c13c9e47247b8435a83c302eeca2c";
  }

  static const char* value(const ::hrwros_msgs::RobotTrajectories_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbb6c13c9e47247b8ULL;
  static const uint64_t static_value2 = 0x435a83c302eeca2cULL;
};

template<class ContainerAllocator>
struct DataType< ::hrwros_msgs::RobotTrajectories_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hrwros_msgs/RobotTrajectories";
  }

  static const char* value(const ::hrwros_msgs::RobotTrajectories_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hrwros_msgs::RobotTrajectories_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"moveit_msgs/RobotTrajectory cur_to_approach       # Array of trajectories to be executed by the robot from current pose to approach pose\n"
"moveit_msgs/RobotTrajectory approach_to_pick  # Array of trajectories to be executed by the robot from approach pose to pick pose\n"
"moveit_msgs/RobotTrajectory pick_to_retreat   # Array of trajectories to be executed by the robot from pick pose to retreat pose\n"
"moveit_msgs/RobotTrajectory retreat_to_place  # Array of trajectories to be executed by the robot from retreat pose to place pose\n"
"duration[] trajectory_delays                  # Time delays before each trajectory.  Use 0 for no delay\n"
"duration[] execution_duration                 # Execution duration for each state of robot trajectories\n"
"time pick_deadline                            # The deadline to reach pick pose\n"
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
"MSG: moveit_msgs/RobotTrajectory\n"
"trajectory_msgs/JointTrajectory joint_trajectory\n"
"trajectory_msgs/MultiDOFJointTrajectory multi_dof_joint_trajectory\n"
"\n"
"================================================================================\n"
"MSG: trajectory_msgs/JointTrajectory\n"
"Header header\n"
"string[] joint_names\n"
"JointTrajectoryPoint[] points\n"
"================================================================================\n"
"MSG: trajectory_msgs/JointTrajectoryPoint\n"
"# Each trajectory point specifies either positions[, velocities[, accelerations]]\n"
"# or positions[, effort] for the trajectory to be executed.\n"
"# All specified values are in the same order as the joint names in JointTrajectory.msg\n"
"\n"
"float64[] positions\n"
"float64[] velocities\n"
"float64[] accelerations\n"
"float64[] effort\n"
"duration time_from_start\n"
"\n"
"================================================================================\n"
"MSG: trajectory_msgs/MultiDOFJointTrajectory\n"
"# The header is used to specify the coordinate frame and the reference time for the trajectory durations\n"
"Header header\n"
"\n"
"# A representation of a multi-dof joint trajectory (each point is a transformation)\n"
"# Each point along the trajectory will include an array of positions/velocities/accelerations\n"
"# that has the same length as the array of joint names, and has the same order of joints as \n"
"# the joint names array.\n"
"\n"
"string[] joint_names\n"
"MultiDOFJointTrajectoryPoint[] points\n"
"\n"
"================================================================================\n"
"MSG: trajectory_msgs/MultiDOFJointTrajectoryPoint\n"
"# Each multi-dof joint can specify a transform (up to 6 DOF)\n"
"geometry_msgs/Transform[] transforms\n"
"\n"
"# There can be a velocity specified for the origin of the joint \n"
"geometry_msgs/Twist[] velocities\n"
"\n"
"# There can be an acceleration specified for the origin of the joint \n"
"geometry_msgs/Twist[] accelerations\n"
"\n"
"duration time_from_start\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Transform\n"
"# This represents the transform between two coordinate frames in free space.\n"
"\n"
"Vector3 translation\n"
"Quaternion rotation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Twist\n"
"# This expresses velocity in free space broken into its linear and angular parts.\n"
"Vector3  linear\n"
"Vector3  angular\n"
;
  }

  static const char* value(const ::hrwros_msgs::RobotTrajectories_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hrwros_msgs::RobotTrajectories_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.cur_to_approach);
      stream.next(m.approach_to_pick);
      stream.next(m.pick_to_retreat);
      stream.next(m.retreat_to_place);
      stream.next(m.trajectory_delays);
      stream.next(m.execution_duration);
      stream.next(m.pick_deadline);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RobotTrajectories_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hrwros_msgs::RobotTrajectories_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hrwros_msgs::RobotTrajectories_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "cur_to_approach: ";
    s << std::endl;
    Printer< ::moveit_msgs::RobotTrajectory_<ContainerAllocator> >::stream(s, indent + "  ", v.cur_to_approach);
    s << indent << "approach_to_pick: ";
    s << std::endl;
    Printer< ::moveit_msgs::RobotTrajectory_<ContainerAllocator> >::stream(s, indent + "  ", v.approach_to_pick);
    s << indent << "pick_to_retreat: ";
    s << std::endl;
    Printer< ::moveit_msgs::RobotTrajectory_<ContainerAllocator> >::stream(s, indent + "  ", v.pick_to_retreat);
    s << indent << "retreat_to_place: ";
    s << std::endl;
    Printer< ::moveit_msgs::RobotTrajectory_<ContainerAllocator> >::stream(s, indent + "  ", v.retreat_to_place);
    s << indent << "trajectory_delays[]" << std::endl;
    for (size_t i = 0; i < v.trajectory_delays.size(); ++i)
    {
      s << indent << "  trajectory_delays[" << i << "]: ";
      Printer<ros::Duration>::stream(s, indent + "  ", v.trajectory_delays[i]);
    }
    s << indent << "execution_duration[]" << std::endl;
    for (size_t i = 0; i < v.execution_duration.size(); ++i)
    {
      s << indent << "  execution_duration[" << i << "]: ";
      Printer<ros::Duration>::stream(s, indent + "  ", v.execution_duration[i]);
    }
    s << indent << "pick_deadline: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.pick_deadline);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HRWROS_MSGS_MESSAGE_ROBOTTRAJECTORIES_H
