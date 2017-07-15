// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <POWER_ACTION_POLICY.hpp>
#include <SYSTEM_POWER_LEVEL.hpp>


START_ATF_NAMESPACE
    struct _SYSTEM_POWER_POLICY
    {
        unsigned int Revision;
        POWER_ACTION_POLICY PowerButton;
        POWER_ACTION_POLICY SleepButton;
        POWER_ACTION_POLICY LidClose;
        _SYSTEM_POWER_STATE LidOpenWake;
        unsigned int Reserved;
        POWER_ACTION_POLICY Idle;
        unsigned int IdleTimeout;
        char IdleSensitivity;
        char DynamicThrottle;
        char Spare2[2];
        _SYSTEM_POWER_STATE MinSleep;
        _SYSTEM_POWER_STATE MaxSleep;
        _SYSTEM_POWER_STATE ReducedLatencySleep;
        unsigned int WinLogonFlags;
        unsigned int Spare3;
        unsigned int DozeS4Timeout;
        unsigned int BroadcastCapacityResolution;
        SYSTEM_POWER_LEVEL DischargePolicy[4];
        unsigned int VideoTimeout;
        char VideoDimDisplay;
        unsigned int VideoReserved[3];
        unsigned int SpindownTimeout;
        char OptimizeForPower;
        char FanThrottleTolerance;
        char ForcedThrottle;
        char MinThrottle;
        POWER_ACTION_POLICY OverThrottled;
    };
END_ATF_NAMESPACE
