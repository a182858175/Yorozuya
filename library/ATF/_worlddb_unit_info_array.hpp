// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    struct _worlddb_unit_info_array
    {
        struct __worlddb_unit_info
        {
            char byFrame;
            unsigned int dwGauge;
            char byPart[6];
            unsigned int dwBullet[2];
            unsigned int dwSpare[8];
            int nKeepingFee;
            int nPullingFee;
            unsigned int dwCutTime;
        };
        __worlddb_unit_info UnitInfo[4];
    };
END_ATF_NAMESPACE
