// Generated by gencpp from file localizer_dwm1001/Anchor_0.msg
// DO NOT EDIT!


#ifndef LOCALIZER_DWM1001_MESSAGE_ANCHOR_0_H
#define LOCALIZER_DWM1001_MESSAGE_ANCHOR_0_H

#include <ros/service_traits.h>


#include <localizer_dwm1001/Anchor_0Request.h>
#include <localizer_dwm1001/Anchor_0Response.h>


namespace localizer_dwm1001
{

struct Anchor_0
{

typedef Anchor_0Request Request;
typedef Anchor_0Response Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Anchor_0
} // namespace localizer_dwm1001


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::localizer_dwm1001::Anchor_0 > {
  static const char* value()
  {
    return "4a842b65f413084dc2b10fb484ea7f17";
  }

  static const char* value(const ::localizer_dwm1001::Anchor_0&) { return value(); }
};

template<>
struct DataType< ::localizer_dwm1001::Anchor_0 > {
  static const char* value()
  {
    return "localizer_dwm1001/Anchor_0";
  }

  static const char* value(const ::localizer_dwm1001::Anchor_0&) { return value(); }
};


// service_traits::MD5Sum< ::localizer_dwm1001::Anchor_0Request> should match
// service_traits::MD5Sum< ::localizer_dwm1001::Anchor_0 >
template<>
struct MD5Sum< ::localizer_dwm1001::Anchor_0Request>
{
  static const char* value()
  {
    return MD5Sum< ::localizer_dwm1001::Anchor_0 >::value();
  }
  static const char* value(const ::localizer_dwm1001::Anchor_0Request&)
  {
    return value();
  }
};

// service_traits::DataType< ::localizer_dwm1001::Anchor_0Request> should match
// service_traits::DataType< ::localizer_dwm1001::Anchor_0 >
template<>
struct DataType< ::localizer_dwm1001::Anchor_0Request>
{
  static const char* value()
  {
    return DataType< ::localizer_dwm1001::Anchor_0 >::value();
  }
  static const char* value(const ::localizer_dwm1001::Anchor_0Request&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::localizer_dwm1001::Anchor_0Response> should match
// service_traits::MD5Sum< ::localizer_dwm1001::Anchor_0 >
template<>
struct MD5Sum< ::localizer_dwm1001::Anchor_0Response>
{
  static const char* value()
  {
    return MD5Sum< ::localizer_dwm1001::Anchor_0 >::value();
  }
  static const char* value(const ::localizer_dwm1001::Anchor_0Response&)
  {
    return value();
  }
};

// service_traits::DataType< ::localizer_dwm1001::Anchor_0Response> should match
// service_traits::DataType< ::localizer_dwm1001::Anchor_0 >
template<>
struct DataType< ::localizer_dwm1001::Anchor_0Response>
{
  static const char* value()
  {
    return DataType< ::localizer_dwm1001::Anchor_0 >::value();
  }
  static const char* value(const ::localizer_dwm1001::Anchor_0Response&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // LOCALIZER_DWM1001_MESSAGE_ANCHOR_0_H
