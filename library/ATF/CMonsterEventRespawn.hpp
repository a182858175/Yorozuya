// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CMonsterEventRespawnVtbl.hpp>
#include <_event_respawn.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct CMonsterEventRespawn
    {
        CMonsterEventRespawnVtbl *vfptr;
        int m_nLoadEventRespawn;
        _event_respawn m_EventRespawn[32];
    public:
        CMonsterEventRespawn();
        void ctor_CMonsterEventRespawn();
        void CheckRespawnEvent();
        bool SetEventRespawn();
        bool StartRespawnEvent(char* pszEventCode, char* pwszErrCode);
        bool StopRespawnEvent(char* pszEventCode, char* pwszErrCode);
        ~CMonsterEventRespawn();
        void dtor_CMonsterEventRespawn();
    };    
    #pragma pack(pop)
    static_assert(ATF::checkSize<CMonsterEventRespawn, 634640>(), "CMonsterEventRespawn");
END_ATF_NAMESPACE
