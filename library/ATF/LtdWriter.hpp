// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CLogFile.hpp>
#include <CNetIndexList.hpp>
#include <CRFDBItemLog.hpp>
#include <CUserDB.hpp>
#include <_LTD.hpp>
#include <_LTD_EXPEND.hpp>
#include <_LTD_ITEMINFO.hpp>
#include <_LTD_PARAM.hpp>
#include <_STORAGE_LIST.hpp>


START_ATF_NAMESPACE
    struct LtdWriter
    {
        bool m_bThreadState;
        bool m_bStop;
        unsigned int m_ulThread;
        CLogFile m_logLtdWriter;
        int m_nTblCurSerial;
        bool m_bInitDB;
        CRFDBItemLog *m_pLtdDB;
        _LTD m_bufLog[10128];
        CNetIndexList m_listEmpty;
        CNetIndexList m_listTask;
    public:
        bool InitLogDB(char* szDBName, char* szIP);
        LtdWriter();
        void ctor_LtdWriter();
        static struct LtdWriter* PtrInstance();
        void PushLog(char* byLogType, struct _LTD_PARAM* pParam);
        void Release();
        void _CreateTable();
        int _GetLocalDate();
        void _PushItemCut(char bySubLogType, struct _LTD_PARAM* pParam, struct _LTD* pl);
        void _PushItemMove(char bySubLogType, struct _LTD_PARAM* pParam, struct _LTD* pl);
        void _SetExpend(char* pszExpend, struct _LTD_EXPEND* pe);
        void _SetItemInfo(char byIndex, struct _STORAGE_LIST::_db_con* pItem, char byOverlapNum, struct _LTD_ITEMINFO* pi, int nMoveType);
        void _SetLtd(struct CUserDB* pUserDB, struct _LTD* pl, bool bItemInfo, bool bExpend);
        void _WriteDB(unsigned int dwIndex);
        static void s_Working(void* pv);
        bool start();
        void stop();
        ~LtdWriter();
        void dtor_LtdWriter();
    };
END_ATF_NAMESPACE
