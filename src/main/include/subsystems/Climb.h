/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include "Constants.h"

#include <frc2/command/SubsystemBase.h>
#include <ctre/Phoenix.h>

using constants::climb::CLIMB_CLIMB_MOTOR_ID;
using constants::climb::CLIMB_ELEVATOR_MOTOR_ID;

using ctre::phoenix::motorcontrol::can::VictorSPX;

class Climb : public frc2::SubsystemBase {
   public:
    explicit Climb();
    void ElevatorUp();
    void ElevatorDown();
    void ElevatorStop();
    void ClimbUp();
    void ClimbDown();
    void ClimbStop();

   private:
    VictorSPX m_elevatorMotor{CLIMB_ELEVATOR_MOTOR_ID};
    TalonFX m_climbMotor{CLIMB_CLIMB_MOTOR_ID};
};
