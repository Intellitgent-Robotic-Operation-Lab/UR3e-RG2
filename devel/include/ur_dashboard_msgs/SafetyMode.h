// Generated by gencpp from file ur_dashboard_msgs/SafetyMode.msg
// DO NOT EDIT!


#ifndef UR_DASHBOARD_MSGS_MESSAGE_SAFETYMODE_H
#define UR_DASHBOARD_MSGS_MESSAGE_SAFETYMODE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ur_dashboard_msgs
{
template <class ContainerAllocator>
struct SafetyMode_
{
  typedef SafetyMode_<ContainerAllocator> Type;

  SafetyMode_()
    : mode(0)  {
    }
  SafetyMode_(const ContainerAllocator& _alloc)
    : mode(0)  {
  (void)_alloc;
    }



   typedef uint8_t _mode_type;
  _mode_type mode;



  enum {
    NORMAL = 1u,
    REDUCED = 2u,
    PROTECTIVE_STOP = 3u,
    RECOVERY = 4u,
    SAFEGUARD_STOP = 5u,
    SYSTEM_EMERGENCY_STOP = 6u,
    ROBOT_EMERGENCY_STOP = 7u,
    VIOLATION = 8u,
    FAULT = 9u,
    VALIDATE_JOINT_ID = 10u,
    UNDEFINED_SAFETY_MODE = 11u,
    AUTOMATIC_MODE_SAFEGUARD_STOP = 12u,
    SYSTEM_THREE_POSITION_ENABLING_STOP = 13u,
  };


  typedef boost::shared_ptr< ::ur_dashboard_msgs::SafetyMode_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ur_dashboard_msgs::SafetyMode_<ContainerAllocator> const> ConstPtr;

}; // struct SafetyMode_

typedef ::ur_dashboard_msgs::SafetyMode_<std::allocator<void> > SafetyMode;

typedef boost::shared_ptr< ::ur_dashboard_msgs::SafetyMode > SafetyModePtr;
typedef boost::shared_ptr< ::ur_dashboard_msgs::SafetyMode const> SafetyModeConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ur_dashboard_msgs::SafetyMode_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ur_dashboard_msgs::SafetyMode_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ur_dashboard_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'ur_dashboard_msgs': ['/home/will/ur3_ws/src/Universal_Robots_ROS_Driver/ur_dashboard_msgs/msg', '/home/will/ur3_ws/devel/share/ur_dashboard_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ur_dashboard_msgs::SafetyMode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ur_dashboard_msgs::SafetyMode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ur_dashboard_msgs::SafetyMode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ur_dashboard_msgs::SafetyMode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ur_dashboard_msgs::SafetyMode_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ur_dashboard_msgs::SafetyMode_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ur_dashboard_msgs::SafetyMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5da08725a63d4237bad689481131a84b";
  }

  static const char* value(const ::ur_dashboard_msgs::SafetyMode_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5da08725a63d4237ULL;
  static const uint64_t static_value2 = 0xbad689481131a84bULL;
};

template<class ContainerAllocator>
struct DataType< ::ur_dashboard_msgs::SafetyMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ur_dashboard_msgs/SafetyMode";
  }

  static const char* value(const ::ur_dashboard_msgs::SafetyMode_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ur_dashboard_msgs::SafetyMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 NORMAL=1\n\
uint8 REDUCED=2\n\
uint8 PROTECTIVE_STOP=3\n\
uint8 RECOVERY=4\n\
uint8 SAFEGUARD_STOP=5\n\
uint8 SYSTEM_EMERGENCY_STOP=6\n\
uint8 ROBOT_EMERGENCY_STOP=7\n\
uint8 VIOLATION=8\n\
uint8 FAULT=9\n\
uint8 VALIDATE_JOINT_ID=10\n\
uint8 UNDEFINED_SAFETY_MODE=11\n\
uint8 AUTOMATIC_MODE_SAFEGUARD_STOP=12\n\
uint8 SYSTEM_THREE_POSITION_ENABLING_STOP=13\n\
\n\
uint8 mode\n\
";
  }

  static const char* value(const ::ur_dashboard_msgs::SafetyMode_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ur_dashboard_msgs::SafetyMode_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.mode);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SafetyMode_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ur_dashboard_msgs::SafetyMode_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ur_dashboard_msgs::SafetyMode_<ContainerAllocator>& v)
  {
    s << indent << "mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mode);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UR_DASHBOARD_MSGS_MESSAGE_SAFETYMODE_H
