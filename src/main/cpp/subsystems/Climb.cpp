/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/Climb.h"

Climb::Climb() {
    m_climbMotor.SetNeutralMode(NeutralMode::Brake);
    m_elevatorMotor.SetNeutralMode(NeutralMode::Brake);

    SetName("Climb");
}

void Climb::ElevatorUp() {
    m_elevatorMotor.Set(ControlMode::PercentOutput, 1);
}

void Climb::ElevatorDown() {
    m_elevatorMotor.Set(ControlMode::PercentOutput, -1);
}

void Climb::ElevatorStop() {
    m_elevatorMotor.Set(ControlMode::PercentOutput, 0);
}

void Climb::ClimbUp() {
    m_climbMotor.Set(ControlMode::PercentOutput, 1);
}

void Climb::ClimbDown() {
    m_climbMotor.Set(ControlMode::PercentOutput, -1);
}

void Climb::ClimbStop() {
    m_climbMotor.Set(ControlMode::PercentOutput, 0);
}
