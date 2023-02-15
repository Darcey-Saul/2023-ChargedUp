#include "behaviour/SelfRightBehaviour.h"

//constructor
SelfRightBehaviour::SelfRightBehaviour(Armavator *armavator, ArmavatorPosition setpoint, frc::XboxController &driver)
: _armavator(armavator), _setpoint(setpoint), _driver(driver){
  Controls(armavator);
}

void SelfRightBehaviour::OnStart() {

}

void SelfRightBehaviour::OnTick(units::second_t dt) {
  _setpoint.angle = -90_deg;
  _setpoint.height = 1.33_m;
}