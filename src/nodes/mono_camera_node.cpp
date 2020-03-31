#include <ros/ros.h>
#include <avt_vimba_camera/mono_camera.h>

int main(int argc, char** argv)
{
	ros::init(argc, argv, "mono_camera_node");

  ros::NodeHandle nh;
  ros::NodeHandle nhp("~");

  avt_vimba_camera::MonoCamera mc(nh,nhp);
  
  //ros::Rate r(25);
  //while (1)
  //{
  //	  ros::spinOnce();
  //	  r.sleep();
  //}

  ros::spin();
  return 0;
}
