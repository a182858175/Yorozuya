// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <ITypeInfo.hpp>
#include <_GUID.hpp>
#include <tagDBID.hpp>
#include <tagDBPROPSET.hpp>



START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct tagDBCOLUMNDESC
    {
        wchar_t *pwszTypeName;
        ITypeInfo *pTypeInfo;
        tagDBPROPSET *rgPropertySets;
        _GUID *pclsid;
        unsigned int cPropertySets;
        unsigned __int64 ulColumnSize;
        tagDBID dbcid;
        unsigned __int16 wType;
        char bPrecision;
        char bScale;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
