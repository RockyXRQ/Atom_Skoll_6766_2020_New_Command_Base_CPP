/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/climbCommands/ElevatorDown.h"

ElevatorDown::ElevatorDown(Climb* climb) : m_climb{climb} {
    SetName("Elevator Down");
    AddRequirements({m_climb});
}

// Called repeatedly when this Command is scheduled to run
void ElevatorDown::Execute() {
    m_climb->ElevatorDown();
}

// Returns true when the command should end.
bool ElevatorDown::IsFinished() {
    return false;
}
// Called once the command ends or is interrupted.
void ElevatorDown::End(bool interrupted) {
    m_climb->ElevatorStop();
}
