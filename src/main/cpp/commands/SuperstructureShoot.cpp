/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/SuperstructureShoot.h"

#include "commands/magazineCommands/MagazineLoad.h"
#include "commands/turretCommand/TurretShoot.h"

SuperstructureShoot::SuperstructureShoot(Magazine* magazine, Turret* turret) {
    AddCommands(MagazineLoad(magazine), TurretShoot(turret));
}
