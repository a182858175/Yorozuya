// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _itembox_take_new_result_zocl
    {
        char sErrorCode;
        char byItemTableCode;
        unsigned __int16 wItemIndex;
        unsigned __int64 dwCurDurPoint;
        unsigned int dwUptInfo;
        unsigned __int16 wItemSerial;
        char byCsMethod;
        unsigned int dwT;
    public:
        int size();
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<_itembox_take_new_result_zocl, 23>(), "_itembox_take_new_result_zocl");
END_ATF_NAMESPACE
