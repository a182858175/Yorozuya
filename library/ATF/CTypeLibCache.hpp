// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <ITypeInfo.hpp>
#include <ITypeLib.hpp>
#include <_GUID.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct CTypeLibCache
    {
        _GUID *m_pTypeLibID;
        unsigned int m_lcid;
        ITypeLib *m_ptlib;
        _GUID m_guidInfo;
        ITypeInfo *m_ptinfo;
        int m_cRef;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
