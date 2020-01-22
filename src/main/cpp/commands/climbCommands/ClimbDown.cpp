/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/climbCommands/ClimbDown.h"

ClimbDown::ClimbDown(Climb* climb) : m_climb{climb} {
    SetName("Climb Down");
    AddRequirements({m_climb});
}

// Called repeatedly when this Command is scheduled to run
void ClimbDown::Execute() {
    m_climb->ClimbDown();
}

// Returns true when the command should end.
bool ClimbDown::IsFinished() {
    return false;
}

// Called once the command ends or is interrupted.
void ClimbDown::End(bool interrupted) {
    m_climb->ClimbStop();
}
