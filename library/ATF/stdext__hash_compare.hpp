// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <std__less.hpp>


START_ATF_NAMESPACE
    namespace stdext
    {
        template<typename _Ty, typename _Less = std::less<_Ty>>
        struct hash_compare
        {
            _Less comp;
        };
    }; // end namespace stdext
END_ATF_NAMESPACE
