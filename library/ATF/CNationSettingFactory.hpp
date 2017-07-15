// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CNationSettingFactoryVtbl.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct CNationSettingFactory
    {
        CNationSettingFactoryVtbl *vfptr;
        int m_iType;
    public:
        CNationSettingFactory(int iType);
        void ctor_CNationSettingFactory(int iType);
        int GetKey();
        bool IsExistCheat(char* szCheat, struct CNationSettingData* pkData);
        bool IsNULL();
        bool RegistCheat(struct CNationSettingData* pkData, char* szCheat, bool (WINAPIV* pCheatCommandFn)(struct CPlayer*), int iUseDegree, int iMgrDegree);
        void RegistCheatEndRecord(struct CNationSettingData* pkData);
        bool RegistCheatTable(struct CNationSettingData* pkData);
        bool RegistCheatTableOnlyInternal(struct CNationSettingData* pkData);
        bool RegistCheatTableUnion(struct CNationSettingData* pkData);
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
