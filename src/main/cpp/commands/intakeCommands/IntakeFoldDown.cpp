/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/intakeCommands/IntakeFoldDown.h"

IntakeFoldDown::IntakeFoldDown(Intake* intake) : m_intake{intake} {
    SetName("Intake Fold Down");
    AddRequirements({m_intake});
}

// Called repeatedly when this Command is scheduled to run
void IntakeFoldDown::Execute() {
    m_intake->Down();
}

// Returns true when the command should end.
bool IntakeFoldDown::IsFinished() {
    return true;
}

// Called once the command ends or is interrupted.
void IntakeFoldDown::End(bool interrupted) {
    m_intake->FoldLock();
}
