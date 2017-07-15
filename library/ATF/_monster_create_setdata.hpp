// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CMonster.hpp>
#include <_character_create_setdata.hpp>
#include <_dummy_position.hpp>
#include <_mon_active.hpp>


START_ATF_NAMESPACE
    struct  _monster_create_setdata : _character_create_setdata
    {
        _mon_active *pActiveRec;
        _dummy_position *pDumPosition;
        bool bDungeon;
        bool bRobExp;
        bool bRewardExp;
        CMonster *pParent;
    public:
        _monster_create_setdata();
        void ctor__monster_create_setdata();
    };    
    static_assert(ATF::checkSize<_monster_create_setdata, 64>(), "_monster_create_setdata");
END_ATF_NAMESPACE
