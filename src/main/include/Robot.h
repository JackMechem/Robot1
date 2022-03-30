// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <string>

#include <frc/TimedRobot.h>
#include <frc/smartdashboard/SendableChooser.h>
#include <frc/PWMSparkMax.h>


class Robot : public frc::TimedRobot
{
public:
  void RobotInit() override;
  void RobotPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void DisabledInit() override;
  void DisabledPeriodic() override;
  void TestInit() override;
  void TestPeriodic() override;

  frc::PWMSparkMax d_motor_l{0};
  frc::PWMSparkMax d_motor_r{1};

  frc::DifferentialDrive m_drive{d_motor_l, d_motor_r};

  frc::PWMSparkMax motor_one{2};
  frc::PWMSparkMax motor_one{3};
  frc::PWMSparkMax motor_one{4};
  frc::PWMSparkMax motor_one{5};
  frc::PWMSparkMax motor_one{6};
  frc::PWMSparkMax motor_one{7};
  frc::PWMSparkMax motor_one{8};
  frc::PWMSparkMax motor_one{9};

private:
  frc::SendableChooser<std::string> m_chooser;
  const std::string kAutoNameDefault = "Default";
  const std::string kAutoNameCustom = "My Auto";
  std::string m_autoSelected;
};
