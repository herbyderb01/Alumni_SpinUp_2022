#include "main.h"
#include "N_Custom/declars/Aton/Roller.hpp"

namespace Roller{ //inside Roller namespace 
  void RotateTo(double pos, int vel, bool wait){ //function to rotate to spesific value
    RollerMotor.moveAbsolute(pos,vel);
    if(wait) while(RollerMotor.isStopped()==0) pros::delay(5);
  }
}
