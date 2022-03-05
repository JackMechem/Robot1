#include "Robot.h"

#include <iostream>

#include <frc/smartdashboard/SmartDashboard.h>


#ifndef RUNNING_FRC_TESTS
int main() {
  return frc::StartRobot<Robot>();
}
#endif