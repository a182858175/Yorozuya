// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CashDbWorker.hpp>
#include <_param_cash_update.hpp>


START_ATF_NAMESPACE
    struct  CCashDbWorkerTH : CashDbWorker
    {
    public:
        CCashDbWorkerTH();
        void ctor_CCashDbWorkerTH();
        void GetUseCashQueryStr(struct _param_cash_update* rParam, int nIdx, char* wszQuery, uint64_t tBufferSize);
        ~CCashDbWorkerTH();
        void dtor_CCashDbWorkerTH();
    };
END_ATF_NAMESPACE
