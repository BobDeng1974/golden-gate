/**
 *
 * @file
 *
 * @copyright
 * Copyright 2017-2020 Fitbit, Inc
 * SPDX-License-Identifier: Apache-2.0
 *
 * @author Bogdan Davidoaia
 *
 * @date 2017-11-20
 *
 * @details
 *
 * Mynewt implementation of the console interface
 */

/*----------------------------------------------------------------------
|   includes
+---------------------------------------------------------------------*/
#include <stdio.h>
#include "console/console.h"

#include "xp/common/gg_system.h"

/*----------------------------------------------------------------------
|   GG_System_ConsoleOutputt
+---------------------------------------------------------------------*/
void GG_System_ConsoleOutput(const char* string)
{
    console_printf(string);
}
