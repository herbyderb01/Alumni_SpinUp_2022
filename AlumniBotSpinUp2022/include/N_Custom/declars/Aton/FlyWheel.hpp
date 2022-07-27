#ifndef FlyWheel_HPP
#define FlyWheel_HPP

namespace FlyWheel{
  extern bool Shoot;

  extern bool Charged;
  extern int ChargeSenseValue;
  extern int ChargeMaxValue;

  void FlyWheelTaskChargeFire(void*FlyWheelTask);
}

#endif /* end of include guard: FlyWheel_HPP */
