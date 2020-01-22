/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/Magazine.h"

Magazine::Magazine() {
    m_spinMotor.SetNeutralMode(NeutralMode::Brake);

    SetName("Magazine");
}

void Magazine::Log() {
}

void Magazine::Load() {
    m_spinMotor.Set(ControlMode::PercentOutput, 1);
}

void Magazine::UnLoad() {
    m_spinMotor.Set(ControlMode::PercentOutput, -1);
}

void Magazine::Lock() {
    m_spinMotor.Set(ControlMode::PercentOutput, 0);
}

void Magazine::Reset() {
}