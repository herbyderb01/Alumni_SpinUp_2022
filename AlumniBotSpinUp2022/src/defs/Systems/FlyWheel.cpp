#include "N_Custom/cont_config.hpp"
#include "N_Custom/declars/vars.hpp"
#include "main.h"
#include "N_Custom/declars/Systems/Drive.hpp"

/**
 * FlyWheel Controll funtions for the User Controll portoin of the match.
 * Runs inside the user controll while loop
 * - Checks the light senseor equiped and lets it know if the FlyWheel
 *   is charged or not.
 * - If I tell it to shoot it will run the FlyWheel at full power for 
 *   900 milliseconeds and tell the FlyWheel motor to recharge.
**/

namespace FlyWheel{
//---------------------User FlyWheel-----------------------//
  bool FlyWheelOn = false;

  void FlyWheelCont(){
      //Allows driver to fire only in Ball mode
    int curValue;
    int off = 0;
    int low = 300;
    int med = 450;
    int high = 600;
    int flywheelThreshold = 50;

    if(Off.isPressed() && FlyWheelOn) {//when it is pressed turn on 
      FlyWheelOn = false;
      setFlyWheelVel(off);
      curValue = off;
    }

    else if(Low.isPressed()){ //when it is pressed turn to low 
        FlyWheelOn = true;
        setFlyWheelVel(low);
      curValue = low;
    }
    else if(Medium.isPressed()){ //when it is pressed turn to low 
        FlyWheelOn = true;
        setFlyWheelVel(med);
        curValue = med;
    }
    else if(High.isPressed()){ //when it is pressed turn to low 
        FlyWheelOn = true;
        setFlyWheelVel(high);
        curValue = high;
    }

    if (curValue-flywheelThreshold < curValue < curValue+flywheelThreshold) flyAtSpeed = true;
    if (curValue == off) flyAtSpeed = false;
  }
}
