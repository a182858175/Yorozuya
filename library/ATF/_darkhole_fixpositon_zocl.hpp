// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct _darkhole_fixpositon_zocl
    {
        unsigned __int16 wQuestIndex;
        unsigned __int16 wIndex;
        unsigned int dwSerial;
        __int16 zPos[3];
        bool bHurry;
        char wszOpenerName[17];
        unsigned int dwOpenerSerial;
    public:
        int size();
    };    
    #pragma pack(pop)
    static_assert(ATF::checkSize<_darkhole_fixpositon_zocl, 36>(), "_darkhole_fixpositon_zocl");
END_ATF_NAMESPACE
