// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    struct  MyTimer
    {
        struct TIME
        {
            int _nYear;
            int _nMonth;
            int _nDay;
            int _nHour;
            int _nMin;
            int _nSec;
        public:
            TIME();
            void ctor_TIME();
        };
    public:
        static struct TIME* GetTime();
    };
END_ATF_NAMESPACE
