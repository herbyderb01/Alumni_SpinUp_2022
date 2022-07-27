#ifndef CONT_CONFIG_HPP
#define CONT_CONFIG_HPP

#include"okapi/api.hpp"

extern okapi::Controller MController;

namespace Drive{
  extern okapi::ControllerButton DriveLockButton;
}

namespace FlyWheel{
  extern okapi::ControllerButton Low;
  extern okapi::ControllerButton Medium;
  extern okapi::ControllerButton High;
  extern okapi::ControllerButton Off;
}

namespace Intake{
  extern okapi::ControllerButton In;
  extern okapi::ControllerButton Out;
}

namespace Roller{
  extern okapi::ControllerButton Roll;
}

namespace Loader{
  extern okapi::ControllerButton Up;
  extern okapi::ControllerButton Down;
  extern okapi::ControllerButton CapPush;
}
namespace Puncher{
  extern okapi::ControllerButton Fire;
}

#endif /* end of include guard: CONT_CONFIG_HPP */
