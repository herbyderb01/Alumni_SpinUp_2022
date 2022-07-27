#include "N_Custom/cont_config.hpp"
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
    
    if(Off.isPressed() && FlyWheelOn) {//when it is pressed turn on 
      FlyWheelOn = false;
      setFlyWheelVel(0);
    }

    else if(Low.isPressed()){ //when it is pressed turn to low 
        FlyWheelOn = true;
        setFlyWheelVel(198);
    }
    else if(Medium.isPressed()){ //when it is pressed turn to low 
        FlyWheelOn = true;
        setFlyWheelVel(396);
    }
    else if(High.isPressed()){ //when it is pressed turn to low 
        FlyWheelOn = true;
        setFlyWheelVel(600);
    }
  }
}
