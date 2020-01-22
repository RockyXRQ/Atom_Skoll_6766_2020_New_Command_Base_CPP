/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/Intake.h"

#include <frc/smartdashboard/SmartDashboard.h>

Intake::Intake() {
    m_spinMotor.SetNeutralMode(NeutralMode::Coast);
    m_tapeMotor.SetNeutralMode(NeutralMode::Coast);
    m_foldMotor.SetNeutralMode(NeutralMode::Brake);

    m_tapeMotor.Follow(m_spinMotor);
    m_tapeMotor.SetInverted(InvertType::FollowMaster);

    SetName("Intake");
}

void Intake::Log() {
}

void Intake::In() {
    m_spinMotor.Set(ControlMode::PercentOutput, 1);
}

void Intake::Out() {
    m_spinMotor.Set(ControlMode::PercentOutput, -1);
}

void Intake::SpinLock() {
    m_spinMotor.Set(ControlMode::PercentOutput, 0);
}

void Intake::Up() {
    m_foldMotor.Set(ControlMode::PercentOutput, 0.6);
}

void Intake::Down() {
    m_foldMotor.Set(ControlMode::PercentOutput, -0.6);
}

void Intake::FoldLock() {
    m_foldMotor.Set(ControlMode::PercentOutput, 0);
}

void Intake::Reset() {
}
