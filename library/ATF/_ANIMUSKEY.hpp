// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    struct _ANIMUSKEY
    {
        char byItemIndex;
    public:
        char CovDBKey();
        bool IsFilled();
        void LoadDBKey(char pl_byKey);
        void SetRelease();
    };    
    static_assert(ATF::checkSize<_ANIMUSKEY, 1>(), "_ANIMUSKEY");
END_ATF_NAMESPACE
