// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CMyTimer.hpp>
#include <_FILETIME.hpp>
#include <_event_info.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct GuildCreateEventInfo
    {
        bool m_bStartedEvent;
        _event_info m_EventInfo;
        _event_info m_ModifyInfo;
        unsigned int m_dwEstConsumeDalant;
        unsigned int m_dwEmblemDalant;
        CMyTimer m_tmDataFileCheckTime;
        _FILETIME m_ftWrite;
    public:
        bool ApplyModifiedGuildEventInfo();
        bool CheckEventDate();
        unsigned int GetEmblemDalant();
        unsigned int GetEstConsumeDalant();
        GuildCreateEventInfo();
        void ctor_GuildCreateEventInfo();
        void Init();
        void Loop();
        void ReadEventInfo();
        void SetConsumeDalantFree(bool bEnable);
        ~GuildCreateEventInfo();
        void dtor_GuildCreateEventInfo();
    };    
    #pragma pack(pop)
    static_assert(ATF::checkSize<GuildCreateEventInfo, 72>(), "GuildCreateEventInfo");
END_ATF_NAMESPACE
