// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CRecordData.hpp>
#include <CSetItemType.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct CSUItemSystem
    {
        CRecordData m_SUOrigin[1];
        CSetItemType m_SetItemType;
        char m_bySUItemCount;
        bool m_bLoadData[1];
        bool m_bChangeData[1];
    public:
        CSUItemSystem();
        void ctor_CSUItemSystem();
        void Class_Init();
        struct CRecordData* GetCRecordData_SetItem();
        struct CSetItemType* GetCSetItemType();
        int GetSetItemTableInfo(unsigned int dwSetItemEff, char* pStrCode, int nBufSize);
        static struct CSUItemSystem* Instance();
        bool SUItemSystem_CheckData();
        bool SUItemSystem_Init();
        bool SUItemSystem_UnInit();
        ~CSUItemSystem();
        void dtor_CSUItemSystem();
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
