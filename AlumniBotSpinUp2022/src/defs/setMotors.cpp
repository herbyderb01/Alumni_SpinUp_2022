#include "N_Custom/main_config.hpp"
/*Drive Motor Vel Sends*/
namespace Drive{
  void setMechLFVel(int vel){
      if(vel==0) LeftFMotor.moveVelocity(0);
      else LeftFMotor.moveVelocity(vel);
  }
  void setMechLBVel(int vel){
      if(vel==0) LeftBMotor.moveVelocity(0);
      else LeftBMotor.moveVelocity(vel);
  }
  void setMechRFVel(int vel){
      if(vel==0) RightFMotor.moveVelocity(0);
      else RightFMotor.moveVelocity(vel);
  }
  void setMechRBVel(int vel){
      if(vel==0) RightBMotor.moveVelocity(0);
      else RightBMotor.moveVelocity(vel);
  }
  void setMechDriveVel(int LF,int LB,int RF,int RB){
      setMechLFVel(LF);
      setMechLBVel(LB);
      setMechRFVel(RF);
      setMechRBVel(RB);
  }
  void DriveMechVelSend(int j1,int j2,int j3=0,int j4=0){//left,right,side1,side2
      int LF=j1;//left
      int RF=j2;//right
      int SD=(j3+j4)/2;//side

      setMechDriveVel(//left go apart && right go into when going right
          LF+SD,
          LF-SD,
          RF-SD,
          RF+SD);
  }
  void setDriveVel(int left, int right){
      setMechLFVel(left);
      setMechLBVel(left);
      setMechRFVel(right);
      setMechRBVel(right);
  }
}

/*Intake Motor Vel Sends*/
namespace Intake{
  void setIntakeVel(int vel){
    if(vel==0) IntakeMotor.moveVelocity(0);
    else IntakeMotor.moveVelocity(vel);
  }
}
/*Loader Piston Function*/
namespace Loader{
  void Load(bool pos){
    //LoaderPiston.set_value(pos); //true is down | false is up
  }
}
/*Puncher Pistion Function*/
namespace Puncher{
  void Punch(){
    PuncherPiston.set_value(HIGH);
    std::cout << "High" << std::endl;
    std::cout << "FIRE" << std::endl;
    pros::delay(300);
    PuncherPiston.set_value(LOW);
    std::cout << "Low" << std::endl;
  }
}

/*FlyWheel Motor Vel Sends*/
namespace FlyWheel{
  void setFlyWheelVel(int vel){
    if(vel==0){
      FlyWheelMotorR.moveVelocity(0);
      FlyWheelMotorL.moveVelocity(0);
    }
    else {
      FlyWheelMotorR.moveVelocity(-vel);
      FlyWheelMotorL.moveVelocity(vel);
    }
  }
}

/*Roller Motor Vel Sends*/
namespace Roller{
  void setRollerVel(int vel){
    if(vel==0) RollerMotor.moveVelocity(0);
    else RollerMotor.moveVelocity(vel);
  }
}
