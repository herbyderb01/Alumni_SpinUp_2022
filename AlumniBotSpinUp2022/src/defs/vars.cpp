#include "N_Custom/declars/vars.hpp"
/*Math vars*/
	// double abs(double Var) {
	// 	if (Var < 0)  Var = Var * (-1);
	// 	return Var;
	// }
	double sgn(double Var) {
		if (Var > 0)   Var = 1;
		else        Var = -1;
		return Var;
	}
/*Drive vars*/
	bool DriveRampingEnabled;
	bool MechDriveRampingEnabled;

	bool DriveLockConBtnPressed;
	bool DriveLock = false;

	bool DriveDirConBtnPressed;
	bool DriveDirInverted = false;

/*Loader vars*/
	bool LoaderMotorConBtnPressed;
	bool LoaderMotorInverted = false;

/*Wrist vars*/
	bool WristTaskEnabled;
	bool WristMotorConBtnPressed;
	bool WristMotorInverted = false;
	bool WristCalibrated=false;
	bool wristRan=true;
	//bool WristMotorConBtnTwoPressed;
	//bool WristMotorInvertedTwo = true;

/*FlyWheel vars*/
	bool AutoFlyWheelEnabled = true;

/*Intake vars*/
	bool AutoIntakeEnabled = false;
	bool AutoIntakeTaskEnabled = false;
	// bool AutoMan=false;

	bool IntakeEnabledBtnPressed;
	bool IntakeEnabledInverted = true;
	bool UserAutoIntakeMode = false;

/*Puncher vars*/
	bool AutoPuncherFiring = false;
	bool readyToPunch = false;
	bool firstUp = true;
	bool flyAtSpeed = false;

/*Ram Rod vars*/
	bool RamEnabledBtnPressed;
	bool RamEnabledInverted;
	bool RamManualEnabled = false;
	bool RamPosEnabled = true;

/*Roller vars*/
	bool RollerButtonWait;
	int RollerMode = 1;
	int PIDRollerUserCpower = 100;
	bool RollerDeployed = false;
	//bool easyLoadDir = false;
	bool RollerEEnabledBtnPressed;

/*Lock vars*/
	bool jawButtonWait;
	int jawMode = 1;
	int jawUserCpower = 100;

	bool JawMotorConBtnPressed;
	bool JawMotorInverted = false;


/*Aton vars*/
	double Nine = 6000;
	double Full = Nine*2;

	double RollerDown = 0;
	double RollerUp = 500;
	// int UP = 90;
	// int DOWN = 30;

/*VEX Brake vars
	pros::Motor::set_brake_mode DriveBrakeType=pros::E_MOTOR_BRAKE_HOLD;
	vex::brakeType RollerBrakeType=vex::brakeType::brake;
	vex::brakeType FlyWheelBrakeType=vex::brakeType::coast;
	vex::brakeType IntakeBrakeType=vex::brakeType::coast;
	vex::brakeType LockBrakeType=vex::brakeType::coast;
	vex::brakeType WristBrakeType=vex::brakeType::brake;*/
