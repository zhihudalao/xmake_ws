// Generated by gencpp from file motor_controller/cmdRequest.msg
// DO NOT EDIT!


#ifndef MOTOR_CONTROLLER_MESSAGE_CMDREQUEST_H
#define MOTOR_CONTROLLER_MESSAGE_CMDREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace motor_controller
{
template <class ContainerAllocator>
struct cmdRequest_
{
  typedef cmdRequest_<ContainerAllocator> Type;

  cmdRequest_()
    : angle(0.0)
    , speed(0.0)
    , distance(0.0)  {
    }
  cmdRequest_(const ContainerAllocator& _alloc)
    : angle(0.0)
    , speed(0.0)
    , distance(0.0)  {
  (void)_alloc;
    }



   typedef double _angle_type;
  _angle_type angle;

   typedef double _speed_type;
  _speed_type speed;

   typedef double _distance_type;
  _distance_type distance;





  typedef boost::shared_ptr< ::motor_controller::cmdRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::motor_controller::cmdRequest_<ContainerAllocator> const> ConstPtr;

}; // struct cmdRequest_

typedef ::motor_controller::cmdRequest_<std::allocator<void> > cmdRequest;

typedef boost::shared_ptr< ::motor_controller::cmdRequest > cmdRequestPtr;
typedef boost::shared_ptr< ::motor_controller::cmdRequest const> cmdRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::motor_controller::cmdRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::motor_controller::cmdRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace motor_controller

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::motor_controller::cmdRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::motor_controller::cmdRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::motor_controller::cmdRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::motor_controller::cmdRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::motor_controller::cmdRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::motor_controller::cmdRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::motor_controller::cmdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "206e942db74d81f3a5da602b8336b721";
  }

  static const char* value(const ::motor_controller::cmdRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x206e942db74d81f3ULL;
  static const uint64_t static_value2 = 0xa5da602b8336b721ULL;
};

template<class ContainerAllocator>
struct DataType< ::motor_controller::cmdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "motor_controller/cmdRequest";
  }

  static const char* value(const ::motor_controller::cmdRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::motor_controller::cmdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 angle\n\
float64 speed\n\
float64 distance\n\
\n\
\n\
\n\
";
  }

  static const char* value(const ::motor_controller::cmdRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::motor_controller::cmdRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.angle);
      stream.next(m.speed);
      stream.next(m.distance);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct cmdRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::motor_controller::cmdRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::motor_controller::cmdRequest_<ContainerAllocator>& v)
  {
    s << indent << "angle: ";
    Printer<double>::stream(s, indent + "  ", v.angle);
    s << indent << "speed: ";
    Printer<double>::stream(s, indent + "  ", v.speed);
    s << indent << "distance: ";
    Printer<double>::stream(s, indent + "  ", v.distance);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOTOR_CONTROLLER_MESSAGE_CMDREQUEST_H
