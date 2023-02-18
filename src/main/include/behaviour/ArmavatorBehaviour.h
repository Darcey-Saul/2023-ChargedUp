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

class ArmavatorGoToPositionBehaviour : public behaviour::Behaviour {
 public:
   using grid_t = ArmavatorConfig::grid_t;

   //constructor for class
   ArmavatorGoToPositionBehaviour(Armavator *armavator, ArmavatorPosition setpoint);

   //Override the OnStart abd OnTick functions, while setting the units for when Armavator runs
   void OnStart() override;
   void OnTick(units::second_t dt) override;

 private:
   //stores nessesary information that can't be changed
   Armavator *_armavator;
   ArmavatorPosition _setpoint;
   std::deque<grid_t::GridPathNode<units::second>> _waypoints;
};

// class ArmavatorManualBehaviour : public behaviour::Behaviour {
//  public:
//   using grid_t = ArmavatorConfig::grid_t;

//   ArmavatorManualBehaviour(Armavator *armavator, frc::XboxController &codriver);

//   void OnStart() override;
//   void OnTick(units::second_t dt) override;
//  private:
//   Armavator *_armavator;

//   ArmavatorPosition _setpoint;
//   std::deque<grid_t::GridPathNode<units::second>> _waypoints;
//   frc::XboxController &_codriver;
// };

class ArmavatorRawBehaviour : public behaviour::Behaviour {
 public:
  using grid_t = ArmavatorConfig::grid_t;

  //constructor
  ArmavatorRawBehaviour(Armavator *armavator, frc::XboxController &codriver);

  units::radian_t checkAngleLimits(units::radian_t value, units::radian_t lowerLimit, units::radian_t upperLimit) {
    if (value >= lowerLimit && value < upperLimit) {
      return value;
    } else {
      return value < lowerLimit ? lowerLimit : upperLimit;
    }
  }

  void OnStart() override;
  void OnTick(units::second_t dt) override;
 private:
  Armavator *_armavator;

  ArmavatorPosition _setpoint;
  std::deque<grid_t::GridPathNode<units::second>> _waypoints;
  frc::XboxController &_codriver;
};


class ArmavatorManualBehaviour : public behaviour::Behaviour {
 public: 
  ArmavatorManualBehaviour(Armavator *armavator, frc::XboxController &codriver);

  units::radian_t checkAngleLimits(units::radian_t value, units::radian_t lowerLimit, units::radian_t upperLimit) {
    if (value >= lowerLimit && value < upperLimit) {
      return value;
    } else {
      return value < lowerLimit ? lowerLimit : upperLimit;
    }
  }

  units::radian_t getCorrectAngle(units::meter_t height = 0_m) {
    if (height < 0.51_m) {
      return 0_rad;
    } else {
      if (height >= 0.51_m && height < 0.81_m) {
        return checkAngleLimits(_manualSetpoint.angle, 0_deg, 90_deg);
      } else if (height >= 0.81_m && height < 1.21_m) {
        return checkAngleLimits(_manualSetpoint.angle, -45_deg, 90_deg);
      } else if (height >= 1.21_m && height < 1.47_m) {
        return checkAngleLimits(_manualSetpoint.angle, -45_deg, 180_deg);
      } else if (height == 1.47_m) {
        return checkAngleLimits(_manualSetpoint.angle, -90_deg, 270_deg);;
      }
    }
  }

  void OnStart() override;
  void OnTick(units::second_t dt) override;
 private: 
  Armavator *_armavator;
  ArmavatorPosition _manualSetpoint;

  frc::XboxController &_codriver;

  units::meter_t startHeight; 

  bool rawControl = false;
};

class SelfRightBehaviour : public behaviour::Behaviour{
 public:
  //constructor
  SelfRightBehaviour(Armavator *armavator, ArmavatorPosition setpoint, frc::XboxController &driver, units::volt_t voltage);

  //Override the OnStart abd OnTick functions, while setting the units for when Armavator runs
   void OnStart() override;
   void OnTick(units::second_t dt) override;

 private:
  //store important unchangeable info
  Armavator *_armavator;
  ArmavatorPosition _setpoint;
  frc::XboxController &_driver;
  units::volt_t _voltage;
};