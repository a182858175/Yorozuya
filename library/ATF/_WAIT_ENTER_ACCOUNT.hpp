// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_BILLING_INFO.hpp>
#include <_GLBID.hpp>
#include <_SYSTEMTIME.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct _WAIT_ENTER_ACCOUNT
    {
        bool m_bLoad;
        unsigned int m_dwAccountSerial;
        char m_szAccountID[13];
        char m_byUserDgr;
        char m_bySubDgr;
         _GLBID m_gidGlobal;
        unsigned int m_dwKey[4];
        unsigned int m_dwLoadTime;
        bool m_bChatLock;
        int m_nTrans;
        bool m_bAgeLimit;
        char m_byUILock;
        char m_szUILock_PW[13];
        char m_byUILock_FailCnt;
        char m_szAccount_PW[13];
        char m_byUILock_HintIndex;
        char m_uszUILock_HintAnswer[17];
        char m_byUILockFindPassFailCount;
        unsigned int m_dwRequestMoveCharacterSerialList[3];
        unsigned int m_dwTournamentCharacterSerialList[3];
        _BILLING_INFO m_BillingInfo;
    public:
        void Release();
        void SetAgeLimitFlag(bool bAgeLimit);
        void SetBillingInfo(int16_t iType, char* szCMS, int lRemainTime, struct _SYSTEMTIME* pstEndDate);
        void SetData(unsigned int dwAccountSerial, char* pszAccountID, char byUserDgr, char bySubDgr, struct _GLBID* pgidGlobal, unsigned int* pdwKey, bool bChatLock);
        void SetPcBangFlag(bool bIsPcBang);
        void SetTransFlag(int nTrans);
        void SetUILock(char byUILock, char* szUILockPW, char byUILockFailCnt, char* szAccountPW, char byHintIndex, char* uszHintAnswer, char byUILockFindPassFailCount);
        _WAIT_ENTER_ACCOUNT();
        void ctor__WAIT_ENTER_ACCOUNT();
    };    
    #pragma pack(pop)
    static_assert(ATF::checkSize<_WAIT_ENTER_ACCOUNT, 168>(), "_WAIT_ENTER_ACCOUNT");
END_ATF_NAMESPACE
