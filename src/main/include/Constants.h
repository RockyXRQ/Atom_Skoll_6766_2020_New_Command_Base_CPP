/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

namespace constants {
namespace joystick {
constexpr int CHASSIS_JOYSTICK_PORT = 0;
constexpr int SUPERSTRUCTURE_JOYSTICK_PORT = 1;
}  // namespace joystick
namespace chassis {
constexpr int CHASSIS_LM_MOTOR_ID = 1;
constexpr int CHASSIS_LFA_MOTOR_ID = 2;
constexpr int CHASSIS_LFB_MOTOR_ID = 3;

constexpr int CHASSIS_RM_MOTOR_ID = 4;
constexpr int CHASSIS_RFA_MOTOR_ID = 5;
constexpr int CHASSIS_RFB_MOTOR_ID = 6;
}  // namespace chassis
namespace intake {
constexpr int INTAKE_SPIN_MOTOR_ID = 7;
constexpr int INTAKE_TAPE_MOTOR_ID = 8;
constexpr int INTAKE_FOLD_MOTOR_ID = 9;
}  // namespace intake
namespace magazine {
constexpr int MAGAZINE_SPIN_MOTOR_ID = 10;
}  // namespace magazine
namespace turret {
constexpr int TURRET_SHOOT_LEFT_MOTOR_ID = 12;
constexpr int TURRET_SHOOT_RIGHT_MOTOR_ID = 13;

constexpr double TURRET_MANUAL_AIM_SPEED = 0.8;
constexpr double TURRET_AUTO_AIM_SEARCHING_SPEED = 0.3;

constexpr double TURRET_AUTO_AIM_KP = 0.2;
constexpr double TURRET_AUTO_AIM_KI = 0.2;
constexpr double TURRET_AUTO_AIM_KD = 0;
}  // namespace turret
namespace climb {
constexpr int CLIMB_ELEVATOR_MOTOR_ID = 14;
constexpr int CLIMB_CLIMB_MOTOR_ID = 15;
}  // namespace climb
}  // namespace constants