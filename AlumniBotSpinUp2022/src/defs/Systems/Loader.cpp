#include "N_Custom/cont_config.hpp"
#include "N_Custom/declars/vars.hpp"
#include "N_Custom/main_config.hpp"
#include "main.h"

namespace Loader{ //Inside Loader namespace
  void LoaderManualContTask(){ //Functoin for Loader Manual Controll
    if(Puncher::Fire.isPressed()){
      //if (double(-160) > LoaderMotor.getPosition() > double(-175)) readyToPunch = true;
      if(firstUp) {
        LoaderMotor.moveAbsolute(-150, 100);
        pros::delay(500);
        readyToPunch = true;
        firstUp = false;
      }
    }
    if(Intake::In.isPressed() || Intake::Out.isPressed()){
      readyToPunch = false;
      firstUp = true;
      LoaderMotor.moveAbsolute(5, 100); //Push loader down
    }
  }
}