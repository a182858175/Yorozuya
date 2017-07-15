// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CGuild.hpp>
#include <CLogFile.hpp>
#include <CPlayer.hpp>
#include <TInventory.hpp>
#include <_AUTOMINE_BATTERY.hpp>
#include <_DB_LOAD_AUTOMINE_MACHINE.hpp>
#include <_INVENKEY.hpp>


START_ATF_NAMESPACE
    struct AutoMineMachine
    {
        bool m_bInit;
        bool m_bOpenUI;
        bool m_bRunning;
        char m_byRace;
        char m_byCollisionType;
        char m_bySelectedOre;
        _INVENKEY m_OreKind[5];
        CGuild *m_pOwnerGuild;
        unsigned int m_dwMiningTime;
        unsigned int m_dwMiningTerm;
        unsigned int m_dwDQSPushTime;
        _AUTOMINE_BATTERY m_Battery;
        TInventory m_Inven;
        CLogFile m_sysLog;
        CLogFile m_Log;
    public:
        AutoMineMachine();
        void ctor_AutoMineMachine();
        void ChangeOwner(struct CGuild* pOwnerGuild);
        void Charge(int n, int nCharge, int nGold);
        void Discharge();
        void GetMachineInfo(struct _DB_LOAD_AUTOMINE_MACHINE* pInfo);
        void GetOutOreInAutoMine(struct CPlayer* pUser, char* pMsg);
        struct CGuild* GetOwnerGuild();
        void GetState(unsigned int* dwState);
        bool Initialize(char byRace, char byCollisionType);
        bool IsMaster(struct CPlayer* pUser);
        bool LoadDatabase(struct _DB_LOAD_AUTOMINE_MACHINE* pdata);
        void Loop();
        void MoveOreInAutoMine(int n, char sl, char ss, char dl, char ds);
        void OreMerge(int n, char* pMsg);
        void SelectOre(int n, char byOre);
        void SendMsg_MachineInfo(int n);
        void SendMsg_ResultCode(int n, char byType, char byRetCode);
        void SetOpenUI(bool bOpen);
        bool SetOwner(char byRace, char byCollisionType, struct CGuild* pGuild);
        void Start(int n);
        void Stop(int n);
        void SubChargeCost(char byRet, char* pdata);
        int _Convert_GoldToGage(int nGold);
        bool _InitMineOre();
        void _Mining();
        void push_dqs_battery_charge(uint16_t wIndex, int ncharge, int ncost);
        void push_dqs_battery_discharge();
        void push_dqs_getore(int nP, int nS, char byNum);
        void push_dqs_mineore(int nP, int nS);
        void push_dqs_moveore(int nDBSlot_S, struct _INVENKEY* pSKey, char bySNum, int nDBSlot_D, struct _INVENKEY* pDKey, char byDNum);
        void push_dqs_newowner();
        void push_dqs_selore();
        void push_dqs_workingstate();
        ~AutoMineMachine();
        void dtor_AutoMineMachine();
    };
END_ATF_NAMESPACE
