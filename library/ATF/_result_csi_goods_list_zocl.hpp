// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _result_csi_goods_list_zocl
    {
        int nCashAmount;
        bool bAdjustDiscountRate;
        bool bOneNOne;
        bool bSetDiscount;
        char bySetDiscount[4];
        bool bLimSale;
        char byLimDiscount;
    public:
        int size();
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<_result_csi_goods_list_zocl, 13>(), "_result_csi_goods_list_zocl");
END_ATF_NAMESPACE
