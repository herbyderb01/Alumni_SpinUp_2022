#include "N_Custom/cont_config.hpp"
#include "main.h"

namespace Loader{ //Inside Loader namespace
  void LoaderManualContTask(){ //Functoin for Loader Manual Controll
  
    if(Puncher::Fire.isPressed()){
      LoaderMotor.moveAbsolute(50, 100);
  
    }
    if(Intake::In.isPressed() || Intake::Out.isPressed()){
      LoaderMotor.moveAbsolute(0, 100); //Push loader down
    }
  }
}