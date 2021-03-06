// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <MD5.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        using MD5Decode2_ptr = void (WINAPIV*)(struct MD5*, unsigned int*, char*, unsigned int);
        using MD5Decode2_clbk = void (WINAPIV*)(struct MD5*, unsigned int*, char*, unsigned int, MD5Decode2_ptr);
        using MD5Encode4_ptr = void (WINAPIV*)(struct MD5*, char*, unsigned int*, unsigned int);
        using MD5Encode4_clbk = void (WINAPIV*)(struct MD5*, char*, unsigned int*, unsigned int, MD5Encode4_ptr);
        using MD5Finalize6_ptr = void (WINAPIV*)(struct MD5*, char*);
        using MD5Finalize6_clbk = void (WINAPIV*)(struct MD5*, char*, MD5Finalize6_ptr);
        using MD5Init8_ptr = void (WINAPIV*)(struct MD5*);
        using MD5Init8_clbk = void (WINAPIV*)(struct MD5*, MD5Init8_ptr);
        
        using MD5ctor_MD510_ptr = void (WINAPIV*)(struct MD5*);
        using MD5ctor_MD510_clbk = void (WINAPIV*)(struct MD5*, MD5ctor_MD510_ptr);
        using MD5Transform12_ptr = void (WINAPIV*)(struct MD5*, char*);
        using MD5Transform12_clbk = void (WINAPIV*)(struct MD5*, char*, MD5Transform12_ptr);
        using MD5Update14_ptr = void (WINAPIV*)(struct MD5*, void*, unsigned int);
        using MD5Update14_clbk = void (WINAPIV*)(struct MD5*, void*, unsigned int, MD5Update14_ptr);
        
        using MD5dtor_MD516_ptr = void (WINAPIV*)(struct MD5*);
        using MD5dtor_MD516_clbk = void (WINAPIV*)(struct MD5*, MD5dtor_MD516_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE
