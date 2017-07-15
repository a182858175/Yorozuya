// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct _POSTSTORAGE_DB_BASE
    {
        struct  __list
        {
            unsigned int dwPSSerial;
            int nNumber;
            char byState;
            int nKey;
            unsigned __int64 dwDur;
            unsigned int dwUpt;
            unsigned int dwGold;
            bool bUpdate;
            bool bRetProc;
            bool bNew;
            bool bUpdateIndex;
            char wszSendName[17];
            char wszRecvName[17];
            char wszTitle[21];
            char wszContent[201];
            unsigned __int64 lnUID;
        };
        __list m_PostList[50];
        bool m_bUpdate;
    public:
        void Init();
        void UpdateInit();
        _POSTSTORAGE_DB_BASE();
        void ctor__POSTSTORAGE_DB_BASE();
    };
    #pragma pack(pop)
    static_assert(ATF::checkSize<_POSTSTORAGE_DB_BASE, 14851>(), "_POSTSTORAGE_DB_BASE");
END_ATF_NAMESPACE
