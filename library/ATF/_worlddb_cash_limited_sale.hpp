// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct _worlddb_cash_limited_sale
    {
        struct _cash_limited_info
        {
            int nLimcode;
            int nLimcount;
        };
        char byDck;
        char byLimited_sale_num;
        _cash_limited_info List[20];
    };    
    #pragma pack(pop)
    static_assert(ATF::checkSize<_worlddb_cash_limited_sale, 164>(), "_worlddb_cash_limited_sale");
END_ATF_NAMESPACE
