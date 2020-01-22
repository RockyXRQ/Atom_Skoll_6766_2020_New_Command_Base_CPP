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

using constants::magazine::MAGAZINE_SPIN_MOTOR_ID;

using ctre::phoenix::motorcontrol::can::VictorSPX;

class Magazine : public frc2::SubsystemBase {
   public:
    explicit Magazine();
    void Load();
    void UnLoad();
    void Lock();
    void Log();
    void Reset();

   private:
    VictorSPX m_spinMotor{MAGAZINE_SPIN_MOTOR_ID};
};