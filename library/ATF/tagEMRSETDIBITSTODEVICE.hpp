// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_RECTL.hpp>
#include <tagEMR.hpp>


START_ATF_NAMESPACE
    struct tagEMRSETDIBITSTODEVICE
    {
        tagEMR emr;
        _RECTL rclBounds;
        int xDest;
        int yDest;
        int xSrc;
        int ySrc;
        int cxSrc;
        int cySrc;
        unsigned int offBmiSrc;
        unsigned int cbBmiSrc;
        unsigned int offBitsSrc;
        unsigned int cbBitsSrc;
        unsigned int iUsageSrc;
        unsigned int iStartScan;
        unsigned int cScans;
    };
END_ATF_NAMESPACE
