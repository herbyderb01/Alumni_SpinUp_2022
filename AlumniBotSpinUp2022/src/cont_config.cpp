#include "N_Custom/cont_config.hpp"

//Devices
okapi::Controller MController(okapi::ControllerId::master);

//Drive Controll Button Mapping
namespace Drive{
  okapi::ControllerButton DriveLockButton = MController[okapi::ControllerDigital::X];
}
//FlyWheel Controll Button Mapping
namespace FlyWheel{
  okapi::ControllerButton Low = MController[okapi::ControllerDigital::left];
  okapi::ControllerButton Medium = MController[okapi::ControllerDigital::up];
  okapi::ControllerButton High = MController[okapi::ControllerDigital::right];
  okapi::ControllerButton Off = MController[okapi::ControllerDigital::down];
}
//Intake Controll Button Mapping
namespace Intake{
  okapi::ControllerButton In = MController[okapi::ControllerDigital::L2];
  okapi::ControllerButton Out = MController[okapi::ControllerDigital::L1];
}
//Roller Controll Button Mapping
namespace Roller{
  okapi::ControllerButton Roll = MController[okapi::ControllerDigital::L1];
}
//Loader Controll Button Mapping
namespace Loader{
  okapi::ControllerButton Up = MController[okapi::ControllerDigital::L1];
  okapi::ControllerButton Down = MController[okapi::ControllerDigital::L2];
  //okapi::ControllerButton CapPush = MController[okapi::ControllerDigital::up];
}
namespace Puncher{
  okapi::ControllerButton Fire = MController[okapi::ControllerDigital::R2];
}
