// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_CLID.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 4)
    struct _DB_QRY_SYN_DATA
    {
        bool m_bUse;
        bool m_bLoad;
        unsigned int m_dwAccountSerial;
        _CLID m_idWorld;
        char m_byQryCase;
        char m_byResult;
        char m_sData[74530];
    public:
        _DB_QRY_SYN_DATA();
        void ctor__DB_QRY_SYN_DATA();
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<_DB_QRY_SYN_DATA, 74548>(), "_DB_QRY_SYN_DATA");
END_ATF_NAMESPACE
