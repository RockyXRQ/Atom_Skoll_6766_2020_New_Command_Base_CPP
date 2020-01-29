/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/climbCommands/ElevatorUp.h"

ElevatorUp::ElevatorUp(Climb* climb) : m_climb{climb} {
    SetName("Elevator Up");
    AddRequirements({m_climb});
}

// Called repeatedly when this Command is scheduled to run
void ElevatorUp::Execute() {
    m_climb->ElevatorUp();
}

// Returns true when the command should end.
bool ElevatorUp::IsFinished() {
    return true;
}

// Called once the command ends or is interrupted.
void ElevatorUp::End(bool interrupted) {
    m_climb->ElevatorStop();
}
