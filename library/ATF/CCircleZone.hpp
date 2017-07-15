// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CCharacter.hpp>
#include <CMapData.hpp>
#include <_dummy_position.hpp>


START_ATF_NAMESPACE
    struct  CCircleZone : CCharacter
    {
        enum GCZ_STATE
        {
            CZ_NONE = 0xFFFFFFFF,
            CZ_INIT = 0x0,
            CZ_CREATE = 0x1,
            CZ_DESTROY = 0x2,
        };
        GCZ_STATE m_eState;
        int m_iPortalInx;
        char m_byColor;
        _dummy_position *m_pkGoalPos;
    public:
        CCircleZone();
        void ctor_CCircleZone();
        bool Create(struct CMapData* pkMap, char byColor);
        void Destroy();
        char GetColor();
        int GetPortalInx();
        char Goal(struct CMapData* pkMap, float* pfCurPos);
        bool Init(unsigned int uiMapInx, int iPlayerInx, int iNth, uint16_t wInx, struct CMapData* pkMap);
        bool IsNearPosition(float* pfCurPos);
        void SendMsgCreate();
        void SendMsgGoal();
        void SendMsg_FixPosition(int n);
        ~CCircleZone();
        void dtor_CCircleZone();
    };
END_ATF_NAMESPACE
