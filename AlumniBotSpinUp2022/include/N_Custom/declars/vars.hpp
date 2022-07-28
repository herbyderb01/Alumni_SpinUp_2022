#ifndef VARS_HPP
#define VARS_HPP

// double abs(double Var);
double sgn(double Var);
/*Drive vars*/

extern bool readyToPunch;
extern bool firstUp;
extern bool flyAtSpeed;

extern bool MechDriveRampingEnabled;

extern bool DriveLockConBtnPressed;
extern bool DriveLock;

extern bool DriveDirConBtnPressed;
extern bool DriveDirInverted;

/*FlyWheel vars*/
extern bool AutoFlyWheelEnabled;

/*Intake vars*/
extern bool AutoIntakeEnabled;
extern bool AutoIntakeTaskEnabled;

extern bool IntakeEnabledBtnPressed;
extern bool IntakeEnabledInverted;
extern bool UserAutoIntakeMode;

/*Roller vars*/
extern	bool RollerButtonWait;
extern	int RollerMode;
extern	int PIDRollerUserCpower;
extern	bool RollerDeployed;
extern	bool RollerEEnabledBtnPressed;

/*Aton vars*/
extern double Nine;
extern double Full;

extern double RollerDown;
extern double RollerUp;

#endif /* end of include guard: VARS_HPP */
