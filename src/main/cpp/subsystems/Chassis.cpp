/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/Chassis.h"

#include <frc/smartdashboard/SmartDashboard.h>

Chassis::Chassis() {
    m_lm.SetNeutralMode(NeutralMode::Brake);
    m_lfA.SetNeutralMode(NeutralMode::Brake);
    m_lfB.SetNeutralMode(NeutralMode::Brake);

    m_rm.SetNeutralMode(NeutralMode::Brake);
    m_rfA.SetNeutralMode(NeutralMode::Brake);
    m_rfB.SetNeutralMode(NeutralMode::Brake);

    m_lfA.Follow(m_lm);
    m_lfB.Follow(m_lm);
    m_rfA.Follow(m_rm);
    m_rfB.Follow(m_rm);

    m_lfA.SetInverted(InvertType::FollowMaster);
    m_lfB.SetInverted(InvertType::FollowMaster);
    m_rfA.SetInverted(InvertType::FollowMaster);
    m_rfB.SetInverted(InvertType::FollowMaster);

    SetName("Chassis");
}

void Chassis::Log() {
}

void Chassis::Drive(double strightSpeed, double turnSpeed) {
    m_lm.Set(ControlMode::PercentOutput, strightSpeed + turnSpeed);
    m_rm.Set(ControlMode::PercentOutput, strightSpeed - turnSpeed);
}

void Chassis::Reset() {
}
