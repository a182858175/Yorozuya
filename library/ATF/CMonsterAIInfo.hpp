// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CMonsterAI.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        
        using CMonsterAIctor_CMonsterAI2_ptr = void (WINAPIV*)(struct CMonsterAI*);
        using CMonsterAIctor_CMonsterAI2_clbk = void (WINAPIV*)(struct CMonsterAI*, CMonsterAIctor_CMonsterAI2_ptr);
        using CMonsterAIGetBattleModeTime4_ptr = unsigned int (WINAPIV*)(struct CMonsterAI*);
        using CMonsterAIGetBattleModeTime4_clbk = unsigned int (WINAPIV*)(struct CMonsterAI*, CMonsterAIGetBattleModeTime4_ptr);
        using CMonsterAIGetPathFinder6_ptr = struct CPathMgr* (WINAPIV*)(struct CMonsterAI*);
        using CMonsterAIGetPathFinder6_clbk = struct CPathMgr* (WINAPIV*)(struct CMonsterAI*, CMonsterAIGetPathFinder6_ptr);
        using CMonsterAIGetTimer8_ptr = struct SF_Timer* (WINAPIV*)(struct CMonsterAI*, int);
        using CMonsterAIGetTimer8_clbk = struct SF_Timer* (WINAPIV*)(struct CMonsterAI*, int, CMonsterAIGetTimer8_ptr);
        using CMonsterAIInit10_ptr = void (WINAPIV*)(struct CMonsterAI*);
        using CMonsterAIInit10_clbk = void (WINAPIV*)(struct CMonsterAI*, CMonsterAIInit10_ptr);
        using CMonsterAISetBattleModeTime12_ptr = void (WINAPIV*)(struct CMonsterAI*, unsigned int);
        using CMonsterAISetBattleModeTime12_clbk = void (WINAPIV*)(struct CMonsterAI*, unsigned int, CMonsterAISetBattleModeTime12_ptr);
        using CMonsterAISetMyData14_ptr = int (WINAPIV*)(struct CMonsterAI*, struct UsStateTBL*, void*);
        using CMonsterAISetMyData14_clbk = int (WINAPIV*)(struct CMonsterAI*, struct UsStateTBL*, void*, CMonsterAISetMyData14_ptr);
        
        using CMonsterAIdtor_CMonsterAI19_ptr = void (WINAPIV*)(struct CMonsterAI*);
        using CMonsterAIdtor_CMonsterAI19_clbk = void (WINAPIV*)(struct CMonsterAI*, CMonsterAIdtor_CMonsterAI19_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE
