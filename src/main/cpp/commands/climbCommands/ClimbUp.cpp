/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/climbCommands/ClimbUp.h"

ClimbUp::ClimbUp(Climb* climb) : m_climb{climb} {
    SetName("Climb Up");
    AddRequirements({m_climb});
}

// Called repeatedly when this Command is scheduled to run
void ClimbUp::Execute() {
    m_climb->ClimbUp();
}

// Returns true when the command should end.
bool ClimbUp::IsFinished() {
    return true;
}

// Called once the command ends or is interrupted.
void ClimbUp::End(bool interrupted) {
    m_climb->ClimbStop();
}
