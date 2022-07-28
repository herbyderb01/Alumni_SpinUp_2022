#include "main.h"
#include "N_Custom/declars/Systems/Drive.hpp"
#include "N_Custom/declars/Systems/FlyWheel.hpp"
#include "N_Custom/declars/Systems/Loader.hpp"
#include "N_Custom/declars/Systems/Roller.hpp"
#include "N_Custom/declars/Systems/Intake.hpp"
#include "N_Custom/declars/Systems/Puncher.hpp"

#include "N_Custom/declars/Ramping.hpp"

#include "N_Custom/declars/Aton/FlyWheel.hpp"
#include "N_Custom/declars/Aton/Intake.hpp"
#include "N_Custom/declars/Aton/Roller.hpp"
#include "N_Custom/declars/Aton/Drive.hpp"
#include "N_Custom/declars/Aton/AtonSelector.hpp"
#include "N_Custom/declars/Aton/Routines.hpp"

#include "N_Custom/declars/Displays/AtonDisplay.hpp"
#include "pros/adi.h"


/**
 * A callback function for LLEMU's center button.
 *
 * When this callback is fired, it will toggle line 2 of the LCD text between
 * "I was pressed!" and nothing.
 */
void on_center_button() {
	// static bool pressed = false;
	// pressed = !pressed;
	// if (pressed) {
	// 	pros::lcd::set_text(2, "I was pressed!");
	// } else {
	// 	pros::lcd::clear_line(2);
	// }
}

/**
 * Runs initialization code. This occurs as soon as the program is started.
 *
 * All other competition modes are blocked by initialize; it is recommended
 * to keep execution time for this mode under a few seconds.
 */
void initialize() {

  Puncher::PuncherPiston.set_value(LOW);

  //Sets the Drive Brake type for the Drive Motors
  Drive::LeftFMotor.setBrakeMode(okapi::AbstractMotor::brakeMode::coast);
  Drive::LeftBMotor.setBrakeMode(okapi::AbstractMotor::brakeMode::coast);
  Drive::RightFMotor.setBrakeMode(okapi::AbstractMotor::brakeMode::coast);
  Drive::RightBMotor.setBrakeMode(okapi::AbstractMotor::brakeMode::coast);
  //Sets the Drive Brake type for the Drive Motors
  FlyWheel::FlyWheelMotorR.setBrakeMode(okapi::AbstractMotor::brakeMode::coast);
  FlyWheel::FlyWheelMotorL.setBrakeMode(okapi::AbstractMotor::brakeMode::coast);
  //Sets the Drive Brake type for the Drive Motors
  Intake::IntakeMotor.setBrakeMode(okapi::AbstractMotor::brakeMode::coast);
  //Sets the Drive Brake type for the Drive Motors
  Roller::RollerMotor.setBrakeMode(okapi::AbstractMotor::brakeMode::hold);
  //Sets the Drive Brake type for the Drive Motors
  Loader::LoaderMotor.setBrakeMode(okapi::AbstractMotor::brakeMode::hold);

  //Initalizes all the Motors encoder position to 0
  Drive::LeftFMotor.tarePosition();
  Drive::LeftBMotor.tarePosition();
  Drive::RightFMotor.tarePosition();
  Drive::RightBMotor.tarePosition();

  Loader::LoaderMotor.tarePosition();
  Roller::RollerMotor.tarePosition();

  //Starts the AtonDisplayTask to see which Atonomous routine to run
  pros::Task AtonDisplayTask (AtonScreen,(void*) "PROS", TASK_PRIORITY_DEFAULT,
  TASK_STACK_DEPTH_DEFAULT, "AtonDisplayTask");
}

/**
 * Runs while the robot is in the disabled state of Field Management System or
 * the VEX Competition Switch, following either autonomous or opcontrol. When
 * the robot is enabled, this task will exit.
 */
void disabled() {
	//future aton selector
}

/**
 * Runs after initialize(), and before autonomous when connected to the Field
 * Management System or the VEX Competition Switch. This is intended for
 * competition-specific initialization routines, such as an autonomous selector
 * on the LCD.
 *
 * This task will exit when the robot is enabled and autonomous or opcontrol
 * starts.
 */
void competition_initialize() {
	//future aton selector
}

/**
 * Runs the user autonomous code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the autonomous
 * mode. Alternatively, this function may be called in initialize or opcontrol
 * for non-competition testing purposes.
 *
 * If the robot is disabled or communications is lost, the autonomous task
 * will be stopped. Re-enabling the robot will restart the task, not re-start it
 * from where it left off.
 */
void autonomous() {
  /*//Starts the DriveRampingTask to run in the background
  pros::Task DriveRampingTask (Drive::Drive_Ramping,(void*)"PROS",
    TASK_PRIORITY_DEFAULT,TASK_STACK_DEPTH_DEFAULT, "DriveRampingTask");
    
  //Starts the AutoFlyWheelTask to run in the background
  pros::Task AutoFlyWheelTask (FlyWheel::FlyWheelChargeFire,(void*)"PROS",
    TASK_PRIORITY_DEFAULT,TASK_STACK_DEPTH_DEFAULT, "AutoFlyWheelTask");

  //Starts the AutoIntakeTask to run in the background
  pros::Task AutoIntakeTask (Intake::Auto_Intaking,(void*)"PROS",
    TASK_PRIORITY_DEFAULT,TASK_STACK_DEPTH_DEFAULT, "DriveRampingTask");

  //Run through and select correct autonomous rountine
  PotSelectors();*/
}

/**
 * Runs the operator control code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the operator
 * control mode.
 *
 * If no competition control is connected, this function will run immediately
 * following initialize().
 *
 * If the robot is disabled or communications is lost, the
 * operator control task will be stopped. Re-enabling the robot will restart the
 * task, not resume it from where it left off.
 */
void opcontrol() {
	//Disables Unnecessary tasks for Operator Controll
	MechDriveRampingEnabled=false;
	AutoIntakeTaskEnabled=false;
	AutoFlyWheelEnabled=false;

	//pros::Task AutoPunchTask (Puncher::PuncherManualContTask);

	//starts User Controll while loop
  //pros::ADIDigitalOut a('A');
  //pros::ADIDigitalOut b('B');
	while (true) {
      /*  // a.set_value(LOW);
		    Puncher::PuncherPiston.set_value(LOW);
		    //Loader::LoaderPiston.set_value(LOW);
        std::cout << "low" << std::endl;
    		pros::delay(1000);
    		Puncher::PuncherPiston.set_value(HIGH);
    		//Loader::LoaderPiston.set_value(HIGH);
        // a.set_value(HIGH);
        std::cout << "high" << std::endl;
        pros::delay(1000);
*/
		Drive::DriveCont_LockContM();
		FlyWheel::FlyWheelCont();
		Intake::intakeControll();
		Roller::RollerManualCont();
		Loader::LoaderManualContTask();
    Puncher::PuncherManualContTask();

		pros::delay(20);
	}
}
