#pragma once

#include "Armavator.h"
#include "behaviour/HasBehaviour.h"

class AstarInfo : public behaviour::HasBehaviour {
 public:
  
  AstarInfo(Armavator *_armavator, ArmavatorPosition _setpoint);

  void OnUpdate();

  ArmavatorPosition _setpoint;
  Armavator *_armavator;
 private:
  ArmavatorPosition _setpoint;
  Armavator *_armavator;
};

//return out of bounds area

/*
get setpoint
calculate out of bounds vector using setpoint.
*/