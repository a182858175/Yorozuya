// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CGameObject.hpp>
#include <CUnmannedTraderSchedule.hpp>


START_ATF_NAMESPACE
    struct  CReturnGate : CGameObject
    {
        typedef CUnmannedTraderSchedule::STATE STATE;
        STATE m_eState;
        struct CPlayer *m_pkOwner;
        unsigned int m_dwOwnerSerial;
        struct CMapData *m_pDestMap;
        float m_fBindPos[3];
        unsigned int m_dwCloseTime;
    public:
        CReturnGate(struct _object_id* pID);
        void ctor_CReturnGate(struct _object_id* pID);
        void Clear();
        void Close();
        int Enter(struct CPlayer* pkObj);
        uint16_t GetIndex();
        void GetInfo(struct _open_return_gate_inform_zocl* Info);
        struct CPlayer* GetOwner();
        bool IsClose();
        bool IsOpen();
        bool IsValidOwner();
        bool IsValidPosition(float* pfCurPos);
        bool Open(struct CReturnGateCreateParam* pParam);
        void SendMsg_Create();
        void SendMsg_Destroy();
        void SendMsg_FixPosition(int n);
        void SendMsg_MovePortal(struct CPlayer* pkObj);
        ~CReturnGate();
        void dtor_CReturnGate();
    };
END_ATF_NAMESPACE
