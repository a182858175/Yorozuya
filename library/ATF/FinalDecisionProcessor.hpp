// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CPlayer.hpp>
#include <Cmd.hpp>
#include <ElectProcessor.hpp>
#include <_pt_notify_final_decision.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 2)
    struct  FinalDecisionProcessor : ElectProcessor
    {
        _pt_notify_final_decision _Send[3];
    public:
        int Doit(Cmd eCmd, struct CPlayer* pOne, char* pdata);
        FinalDecisionProcessor();
        void ctor_FinalDecisionProcessor();
        bool Initialize();
        void _FinalDecision();
        void _ReqNetFinalDecision(struct CPlayer* pOne);
        void _SetWinner();
        ~FinalDecisionProcessor();
        void dtor_FinalDecisionProcessor();
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
