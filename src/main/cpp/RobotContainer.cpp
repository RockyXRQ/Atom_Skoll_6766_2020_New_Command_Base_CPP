/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "RobotContainer.h"

#include "Constants.h"

#include <frc/smartdashboard/SmartDashboard.h>
#include <frc2/command/button/JoystickButton.h>

#include "commands/chassisCommands/ChassisDriveByJoystick.h"

#include "commands/intakeCommands/IntakeIn.h"
#include "commands/intakeCommands/IntakeOut.h"
#include "commands/intakeCommands/IntakeFoldUp.h"
#include "commands/intakeCommands/IntakeFoldDown.h"

#include "commands/magazineCommands/MagazineLoad.h"
#include "commands/magazineCommands/MagazineUnLoad.h"

#include "commands/turretCommand/TurretShoot.h"

#include "commands/climbCommands/ElevatorUp.h"
#include "commands/climbCommands/ElevatorDown.h"
#include "commands/climbCommands/ClimbUp.h"
#include "commands/climbCommands/ClimbDown.h"

#include "commands/SuperstructureShoot.h"

using constants::turret::TURRET_AUTO_AIM_KD;
using constants::turret::TURRET_AUTO_AIM_KI;
using constants::turret::TURRET_AUTO_AIM_KP;

RobotContainer::RobotContainer() {
    frc::SmartDashboard::PutData(&m_chassis);
    frc::SmartDashboard::PutData(&m_intake);
    frc::SmartDashboard::PutData(&m_magazine);
    frc::SmartDashboard::PutData(&m_turret);

    m_chassis.Reset();
    m_intake.Reset();
    m_magazine.Reset();
    m_turret.Reset();

    m_chassis.Log();
    m_intake.Log();
    m_magazine.Log();
    m_turret.Log();

    m_chassis.SetDefaultCommand(ChassisDriveByJoystick(
        [this] {
            return m_chassisDrive.GetRawAxis(3) - m_chassisDrive.GetRawAxis(2);
        },
        [this] { return m_chassisDrive.GetRawAxis(0); }, &m_chassis));
    //For Xbox One joystick, use triger and left axis to drive.

    ConfigureButtonBindings();
}

void RobotContainer::ConfigureButtonBindings() {
    frc2::JoystickButton m_intakeLoadButton(&m_superStructureDrive,
                                            0);  // Xbox One Joystick A.
    frc2::JoystickButton m_intakeUnLoadButton(&m_superStructureDrive,
                                              3);  // Xbox One Joystick Y.
    frc2::JoystickButton m_foldUpButton(&m_superStructureDrive,
                                        4);  // Xbox One Joystick LB.
    frc2::JoystickButton m_foldDownButton(&m_superStructureDrive,
                                          5);  // Xbox One Joystick RB.

    frc2::JoystickButton m_shootButton(&m_superStructureDrive,
                                       1);  // Xbox One Joystick B.

    frc2::JoystickButton m_magazineLoadButton(&m_superStructureDrive,
                                              2);  // Xbox One Joystick X.

    frc2::JoystickButton m_magazineUnLoadButton(&m_superStructureDrive,
                                                7);  // Xbox One Joystick Menu.

    m_intakeLoadButton.WhenHeld(IntakeIn(&m_intake));
    m_intakeUnLoadButton.WhenHeld(IntakeOut(&m_intake));
    m_foldUpButton.WhenHeld(IntakeFoldUp(&m_intake));
    m_foldDownButton.WhenHeld(IntakeFoldDown(&m_intake));
    m_magazineLoadButton.WhenHeld(MagazineLoad(&m_magazine));
    //m_magazineUnLoadButton.WhenHeld(MagazineUnLoad(&m_magazine));

    m_shootButton.WhenPressed(SuperstructureShoot(&m_magazine, &m_turret));
}