// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _DELPOST_DB_BASE
    {
        struct __list
        {
            unsigned int dwDelSerial;
            int nStorageIndex;
        };
        bool m_bUpdate;
        int m_nMax;
        int m_nCum;
        __list m_List[50];
    public:
        void Init();
        _DELPOST_DB_BASE();
        void ctor__DELPOST_DB_BASE();
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<_DELPOST_DB_BASE, 409>(), "_DELPOST_DB_BASE");
END_ATF_NAMESPACE
