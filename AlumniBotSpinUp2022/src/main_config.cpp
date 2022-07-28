#include "N_Custom/main_config.hpp"
#include "N_Custom/declars/Ramping.hpp"

//Hardware declaration

//Drive Motors Init
namespace Drive{
  okapi::Motor LeftFMotor(1,false,okapi::AbstractMotor::gearset::green,
    okapi::AbstractMotor::encoderUnits::degrees);
  okapi::Motor LeftBMotor(2,false,okapi::AbstractMotor::gearset::green,
    okapi::AbstractMotor::encoderUnits::degrees);
  okapi::Motor RightFMotor(3,true,okapi::AbstractMotor::gearset::green,
    okapi::AbstractMotor::encoderUnits::degrees);
  okapi::Motor RightBMotor(4,true,okapi::AbstractMotor::gearset::green,
    okapi::AbstractMotor::encoderUnits::degrees);
  Ramping LFDR(1,4,200);
  Ramping RFDR(1,4,200);
  Ramping LBDR(1,4,200);
  Ramping RBDR(1,4,200);
}
//Loader Piston Init
namespace Loader{
  okapi::Motor LoaderMotor(5,true,okapi::AbstractMotor::gearset::red,
    okapi::AbstractMotor::encoderUnits::degrees);
}
//Loader Piston Init
namespace Puncher{
  pros::ADIDigitalOut PuncherPiston ('A');
}
//FlyWheel Motors Init
namespace FlyWheel{
  okapi::Motor FlyWheelMotorR(7,true,okapi::AbstractMotor::gearset::blue,
    okapi::AbstractMotor::encoderUnits::degrees);
  okapi::Motor FlyWheelMotorL(8,true,okapi::AbstractMotor::gearset::blue,
    okapi::AbstractMotor::encoderUnits::degrees);
  pros::ADIAnalogIn ChargeLightSensor(3);
}
//Roller Motors Init
namespace Roller{
  okapi::Motor RollerMotor(20,false,okapi::AbstractMotor::gearset::green,
    okapi::AbstractMotor::encoderUnits::degrees);
}
//Intake Motors Init
namespace Intake{
  okapi::Motor IntakeMotor(10,false,okapi::AbstractMotor::gearset::blue,
    okapi::AbstractMotor::encoderUnits::degrees);
  pros::ADIAnalogIn BallSenseBottom(6);
  pros::ADIAnalogIn BallSenseTop(4);
}

//Sensors Init
pros::ADIAnalogIn MainAtonSelect(7);
pros::ADIAnalogIn SecAtonSelect(8);
