/**
 *
 * @file
 *
 * @copyright
 * Copyright 2017 by Fitbit, Inc., all rights reserved.
 *
 * @author Gilles Boccon-Gibod
 *
 * @date 2017-09-18
 *
 * @details
 *
 * POSIX implementation of the system time interface
 */

/*----------------------------------------------------------------------
|   includes
+---------------------------------------------------------------------*/
#include <time.h>

#include "xp/common/gg_system.h"
#include "xp/common/gg_port.h"
#include "xp/common/gg_utils.h"

/*----------------------------------------------------------------------
|   functions
+---------------------------------------------------------------------*/
static GG_Timestamp
GG_System_GetTime(clockid_t clk_id)
{
    struct timespec ts;
    clock_gettime(clk_id, &ts);
    return ((uint64_t)ts.tv_sec * GG_NANOSECONDS_PER_SECOND) + ts.tv_nsec;
}

GG_Timestamp
GG_System_GetCurrentTimestamp(void)
{
    return GG_System_GetTime(CLOCK_MONOTONIC);
}

GG_Timestamp
GG_System_GetWallClockTime(void)
{
    return GG_System_GetTime(CLOCK_REALTIME);
}
