#include "main.h"

namespace Roller{
  void RollerManualCont(){
    if(Roll.isPressed()) setRollerVel(200);
    else setRollerVel(0);
  }
}
