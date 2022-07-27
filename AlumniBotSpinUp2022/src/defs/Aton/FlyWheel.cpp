#include "main.h"
#include "N_Custom/declars/Systems/Drive.hpp"
#include "N_Custom/declars/Aton/FlyWheel.hpp"

/**
 * FlyWheel Controll funtions for the Autonomous portoin of the match.
 * Runs inside a seperate task.
 * - Checks the light senseor equiped and lets it know if the FlyWheel
 *   is charged or not.
 * - If I tell it to shoot it will run the FlyWheel at full power for 
 *   900 milliseconeds and tell the FlyWheel motor to recharge.
**/

namespace FlyWheel{
//-------------------Auto FlyWheel Task--------------------//
  bool Shoot=false;

  bool Charged=false;
  int ChargeSenseValue;
  int ChargeMaxValue = 2500; //Value that determines if the FlyWheel is charged

  void FlyWheelTaskChargeFire(void*FlyWheelTask){ //creates the FlyWheel task
    while(AutoFlyWheelEnabled){ //booleon to easily disable the task if needed.
        //Checks the value of the ChargeLightSensor and stores it inside the ChargeSenseValue integer
      ChargeSenseValue = ChargeLightSensor.get_value();
        //Determines if its charged or not
      if(ChargeSenseValue < ChargeMaxValue) Charged = true;
        //Simple path to Allow it to fire.
      if(Shoot){
        setFlyWheelVel(100);
        //wait till gone
        pros::delay(900);
        Shoot = false;
        setFlyWheelVel(0);
        Charged = false;
      }
        //Tell the FlyWheel to charge if its not charged
      else{
        if(!Charged) setFlyWheelVel(100);
        else setFlyWheelVel(0);
      }
      pros::delay(20); //end wait to avoid cpu hog
    }
  }
}
