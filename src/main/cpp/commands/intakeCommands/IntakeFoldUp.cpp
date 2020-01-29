/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/intakeCommands/IntakeFoldUp.h"

IntakeFoldUp::IntakeFoldUp(Intake* intake) : m_intake{intake} {
    SetName("Intake Fold Up");
    AddRequirements({m_intake});
}

// Called repeatedly when this Command is scheduled to run
void IntakeFoldUp::Execute() {
    m_intake->Up();
}

// Returns true when the command should end.

bool IntakeFoldUp::IsFinished() {
    return true;
}
// Called once the command ends or is interrupted.
void IntakeFoldUp::End(bool interrupted) {
    m_intake->FoldLock();
}
