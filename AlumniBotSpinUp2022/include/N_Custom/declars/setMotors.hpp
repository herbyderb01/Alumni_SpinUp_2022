#ifndef SETMOTORS_HPP
#define SETMOTORS_HPP
namespace Drive{
  void setMechLFVel(int pct);
  void setMechLBVel(int pct);
  void setMechRFVel(int pct);
  void setMechRBVel(int pct);

  void setMechDriveVel(int LF,int LB,int RF,int RB);
  void DriveMechVelSend(int j1,int j2,int j3,int j4);
  void setDriveVel(int left, int right);
}

namespace FlyWheel{
  void setFlyWheelVel(int vel);
}
namespace Intake{
  void setIntakeVel(int vel);
}
namespace Roller{
  void setRollerVel(int vel);
}
namespace Loader{
  void setLoadVel(int vel);
}
namespace Puncher{
  void Punch();
}

#endif /* end of include guard: SETMOTORS_HPP */
