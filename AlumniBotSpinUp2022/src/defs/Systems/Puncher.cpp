#include "main.h"
#include "N_Custom\declars\Systems\Puncher.hpp"

namespace Puncher{ //Inside Puncher namespace
//Functoin for Puncher Manual Controll
  void PuncherManualContTask(void*PuncherFunctionTask){ 
    bool DoneFiring = false;
    if(Fire.isPressed() && DoneFiring) {
      std::cout << "pressed" << std::endl;
      DoneFiring = false;
      Punch();
      DoneFiring = true;
    }
    std::cout << "running" << std::endl;
  }
}