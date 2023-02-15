//use arm to left self back into position
#pragma once

#include <frc/XboxController.h>
#include "behaviour/Behaviour.h"
#include "Armavator.h"
#include "Grid.h"
#include <units/angle.h>
#include <units/length.h>
#include <iostream>
#include <math.h>
#include "ControlUtil.h"

class SelfRightBehaviour : public behaviour::Behaviour{
 public:
  //constructor
  SelfRightBehaviour(Armavator *armavator, ArmavatorPosition setpoint, frc::XboxController &driver);

  //Override the OnStart abd OnTick functions, while setting the units for when Armavator runs
   void OnStart() override;
   void OnTick(units::second_t dt) override;

 private:
  //store important unchangeable info
  Armavator *_armavator;
  ArmavatorPosition _setpoint;
  frc::XboxController &_driver;
};