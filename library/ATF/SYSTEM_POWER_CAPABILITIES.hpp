// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <BATTERY_REPORTING_SCALE.hpp>


START_ATF_NAMESPACE
    struct SYSTEM_POWER_CAPABILITIES
    {
        char PowerButtonPresent;
        char SleepButtonPresent;
        char LidPresent;
        char SystemS1;
        char SystemS2;
        char SystemS3;
        char SystemS4;
        char SystemS5;
        char HiberFilePresent;
        char FullWake;
        char VideoDimPresent;
        char ApmPresent;
        char UpsPresent;
        char ThermalControl;
        char ProcessorThrottle;
        char ProcessorMinThrottle;
        char ProcessorMaxThrottle;
        char spare2[4];
        char DiskSpinDown;
        char spare3[8];
        char SystemBatteriesPresent;
        char BatteriesAreShortTerm;
        BATTERY_REPORTING_SCALE BatteryScale[3];
        _SYSTEM_POWER_STATE AcOnLineWake;
        _SYSTEM_POWER_STATE SoftLidWake;
        _SYSTEM_POWER_STATE RtcWake;
        _SYSTEM_POWER_STATE MinDeviceWakeState;
        _SYSTEM_POWER_STATE DefaultLowLatencyWake;
    };
END_ATF_NAMESPACE
