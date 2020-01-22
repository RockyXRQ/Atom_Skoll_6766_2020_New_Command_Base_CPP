/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once
#include "subsystems/Magazine.h"
#include "subsystems/Turret.h"

#include <frc2/command/CommandHelper.h>
#include <frc2/command/ParallelRaceGroup.h>

class SuperstructureShoot
    : public frc2::CommandHelper<frc2::ParallelRaceGroup, SuperstructureShoot> {
   public:
    SuperstructureShoot(Magazine*, Turret*);
};
