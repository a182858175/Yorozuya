// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    struct tagTIMESTAMP_STRUCT
    {
        __int16 year;
        unsigned __int16 month;
        unsigned __int16 day;
        unsigned __int16 hour;
        unsigned __int16 minute;
        unsigned __int16 second;
        unsigned int fraction;
    };    
    static_assert(ATF::checkSize<tagTIMESTAMP_STRUCT, 16>(), "tagTIMESTAMP_STRUCT");
END_ATF_NAMESPACE
