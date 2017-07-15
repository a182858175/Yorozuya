// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CGameObject.hpp>
#include <_ENTER_DUNGEON_NEW_POS.hpp>
#include <_darkhole_create_setdata.hpp>
#include <_object_id.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 4)
    struct  CDarkHole : CGameObject
    {
        struct CDarkHoleChannel *m_pChannel;
        unsigned int m_dwChannelSerial;
        unsigned int m_dwOpenerSerial;
        char m_wszOpenerName[17];
        char m_aszOpenerName[17];
        unsigned int m_dwNextCloseTime;
        unsigned int m_dwNextHurryTime;
        bool m_bHurry;
    public:
        CDarkHole();
        void ctor_CDarkHole();
        bool Create(struct _darkhole_create_setdata* pParam);
        bool Destroy();
        bool EnterPlayer(struct CPlayer* pEnter, struct CMapData* pOldMap, uint16_t wOldLayer, float* fOldPos, bool bReconnect);
        bool GetEnterNewPos(struct _ENTER_DUNGEON_NEW_POS* pNewPos);
        void Init(struct _object_id* pID);
        bool IsNewEnterAbleNum();
        bool IsNewEnterAblePlayer(struct CPlayer* pEnter);
        bool IsOpenPartyMember(struct CPlayer* pOpener);
        void Loop();
        void SendMsg_Create();
        void SendMsg_Destroy();
        void SendMsg_FixPosition(int n);
        void SendMsg_StateChange();
        ~CDarkHole();
        void dtor_CDarkHole();
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
