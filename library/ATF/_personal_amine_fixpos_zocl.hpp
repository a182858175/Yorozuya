// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _personal_amine_fixpos_zocl
    {
        unsigned int dwObjSerial;
        unsigned __int16 wObjIndex;
        float fFixPos[3];
        char byAct;
        unsigned __int16 wItemTblIndex;
        unsigned __int16 wItemSerial;
        unsigned int dwOwnerSeiral;
    public:
        _personal_amine_fixpos_zocl();
        void ctor__personal_amine_fixpos_zocl();
        int size();
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<_personal_amine_fixpos_zocl, 27>(), "_personal_amine_fixpos_zocl");
END_ATF_NAMESPACE
