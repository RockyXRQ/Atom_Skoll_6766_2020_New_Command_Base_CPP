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

using constants::intake::INTAKE_FOLD_MOTOR_ID;
using constants::intake::INTAKE_SPIN_MOTOR_ID;
using constants::intake::INTAKE_TAPE_MOTOR_ID;

using ctre::phoenix::motorcontrol::can::VictorSPX;

class Intake : public frc2::SubsystemBase {
   public:
    explicit Intake();
    void Log();
    void In();
    void Out();
    void SpinLock();
    void Up();
    void Down();
    void FoldLock();
    void Reset();

   private:
    VictorSPX m_spinMotor{INTAKE_SPIN_MOTOR_ID};
    VictorSPX m_tapeMotor{INTAKE_TAPE_MOTOR_ID};

    VictorSPX m_foldMotor{INTAKE_FOLD_MOTOR_ID};
};
