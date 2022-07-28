#include "N_Custom/declars/vars.hpp"
#include "main.h"
#include "N_Custom\declars\Systems\Puncher.hpp"

namespace Puncher{ //Inside Puncher namespace
//Functoin for Puncher Manual Controll
  void PuncherManualContTask(/*void*PuncherFunctionTask*/){ 
    if(Fire.isPressed()) {
      std::cout << "pressed" << std::endl;
      //while (!readyToPunch && !flyAtSpeed && !firstUp){std::cout << "waiting to fire" << std::endl;}
      if(!firstUp && readyToPunch) Punch();
    }
    //std::cout << "running" << std::endl;
  }
}