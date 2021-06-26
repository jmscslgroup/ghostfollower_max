#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "ghostfollower_max";

// For Block ghostfollower_max/Subscribe1
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_ghostfollower_max_geometry_msgs_Twist> Sub_ghostfollower_max_187;

// For Block ghostfollower_max/Subscribe2
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_ghostfollower_max_geometry_msgs_Twist> Sub_ghostfollower_max_207;

// For Block ghostfollower_max/Subscribe3
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_ghostfollower_max_geometry_msgs_Twist> Sub_ghostfollower_max_41;

// For Block ghostfollower_max/Follower Stopper Switch Control/Publish1
SimulinkPublisher<std_msgs::Float64, SL_Bus_ghostfollower_max_std_msgs_Float64> Pub_ghostfollower_max_234;

// For Block ghostfollower_max/Publish
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_ghostfollower_max_geometry_msgs_Twist> Pub_ghostfollower_max_37;

// For Block ghostfollower_max/Publish Region/Publish1
SimulinkPublisher<std_msgs::UInt8, SL_Bus_ghostfollower_max_std_msgs_UInt8> Pub_ghostfollower_max_165;

// For Block ghostfollower_max/Publish1
SimulinkPublisher<std_msgs::Float64, SL_Bus_ghostfollower_max_std_msgs_Float64> Pub_ghostfollower_max_223;

// For Block ghostfollower_max/Follower Stopper Switch Control/Get Parameter1
SimulinkParameterGetter<real64_T, double> ParamGet_ghostfollower_max_228;

// For Block ghostfollower_max/Follower Stopper Switch Control/Get Parameter2
SimulinkParameterGetter<real64_T, double> ParamGet_ghostfollower_max_226;

// For Block ghostfollower_max/Follower Stopper Switch Control/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_ghostfollower_max_230;

// For Block ghostfollower_max/Follower Stopper Switch Control/Get Parameter4
SimulinkParameterGetter<real64_T, double> ParamGet_ghostfollower_max_245;

// For Block ghostfollower_max/Get Parameter2
SimulinkParameterGetter<real64_T, double> ParamGet_ghostfollower_max_236;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

