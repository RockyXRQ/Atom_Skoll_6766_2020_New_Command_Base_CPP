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

using constants::chassis::CHASSIS_LFA_MOTOR_ID;
using constants::chassis::CHASSIS_LFB_MOTOR_ID;
using constants::chassis::CHASSIS_LM_MOTOR_ID;
using constants::chassis::CHASSIS_RFA_MOTOR_ID;
using constants::chassis::CHASSIS_RFB_MOTOR_ID;
using constants::chassis::CHASSIS_RM_MOTOR_ID;

using ctre::phoenix::motorcontrol::can::VictorSPX;

class Chassis : public frc2::SubsystemBase {
   public:
    explicit Chassis();
    void Log();
    void Drive(double strightSpeed = 0, double turnSpeed = 0);
    void Reset();

   private:
    TalonSRX m_lm{CHASSIS_LM_MOTOR_ID};
    VictorSPX m_lfA{CHASSIS_LFA_MOTOR_ID};
    VictorSPX m_lfB{CHASSIS_LFA_MOTOR_ID};

    TalonSRX m_rm{CHASSIS_RM_MOTOR_ID};
    VictorSPX m_rfA{CHASSIS_RFA_MOTOR_ID};
    VictorSPX m_rfB{CHASSIS_RFB_MOTOR_ID};
};