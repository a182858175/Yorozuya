// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_combine_lend_item_result_zocl.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _exchange_lend_item_result_zocl
    {
        char byErrorCode;
        _combine_lend_item_result_zocl::_lend_item Item;
    public:
        int size();
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<_exchange_lend_item_result_zocl, 21>(), "_exchange_lend_item_result_zocl");
END_ATF_NAMESPACE
