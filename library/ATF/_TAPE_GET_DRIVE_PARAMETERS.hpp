// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    struct _TAPE_GET_DRIVE_PARAMETERS
    {
        char ECC;
        char Compression;
        char DataPadding;
        char ReportSetmarks;
        unsigned int DefaultBlockSize;
        unsigned int MaximumBlockSize;
        unsigned int MinimumBlockSize;
        unsigned int MaximumPartitionCount;
        unsigned int FeaturesLow;
        unsigned int FeaturesHigh;
        unsigned int EOTWarningZoneSize;
    };
END_ATF_NAMESPACE
