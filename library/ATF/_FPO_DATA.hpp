// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    struct _FPO_DATA
    {
        unsigned int ulOffStart;
        unsigned int cbProcSize;
        unsigned int cdwLocals;
        unsigned __int16 cdwParams;
        unsigned __int16 cbProlog : 8;
        unsigned __int16 cbRegs : 3;
        unsigned __int16 fHasSEH : 1;
        unsigned __int16 fUseBP : 1;
        unsigned __int16 reserved : 1;
        unsigned __int16 cbFrame : 2;
    };
END_ATF_NAMESPACE
