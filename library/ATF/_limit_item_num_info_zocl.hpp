// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _limit_item_num_info_zocl
    {
        struct  _limit_item_info
        {
            unsigned int dwLimitItemIndex;
            unsigned __int16 wLimitNum;
        };
        unsigned int dwStoreIndex;
        char byLimitItemNum;
        _limit_item_info LimitItemInfo[16];
    public:
        _limit_item_num_info_zocl();
        void ctor__limit_item_num_info_zocl();
        int size();
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<_limit_item_num_info_zocl, 101>(), "_limit_item_num_info_zocl");
END_ATF_NAMESPACE
