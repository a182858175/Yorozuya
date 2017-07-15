// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CLogFile.hpp>
#include <CRFWorldDatabase.hpp>
#include <CUnmannedTraderLazyCleaner.hpp>
#include <CUnmannedTraderRegistItemInfo.hpp>
#include <CUnmannedTraderTradeInfo.hpp>
#include <_TRADE_DB_BASE.hpp>
#include <_a_trade_adjust_price_request_clzo.hpp>
#include <_a_trade_clear_item_request_clzo.hpp>
#include <_a_trade_reg_item_request_clzo.hpp>
#include <_unmannedtrader_buy_item_request_clzo.hpp>
#include <_unmannedtrader_re_regist_request_clzo.hpp>
#include <_unmannedtrader_search_list_request_clzo.hpp>


START_ATF_NAMESPACE
    struct CUnmannedTraderController
    {
        CLogFile *m_pkLogger;
        CLogFile *m_pkServiceLogger;
        CUnmannedTraderTradeInfo m_kTradeInfo;
        CUnmannedTraderLazyCleaner m_kLazyCleaner;
    public:
        void Buy(uint16_t wInx, struct _unmannedtrader_buy_item_request_clzo* pRequest);
        CUnmannedTraderController();
        void ctor_CUnmannedTraderController();
        void CancelRegist(uint16_t wInx, struct _a_trade_clear_item_request_clzo* pRequest);
        bool CheatCancelRegist(uint16_t wInx, unsigned int dwOwnerSerial, char byNth);
        char CheckDBItemState(char byType, unsigned int dwRegistSerial, char* byState, char* byProcRet);
        void ComleteLazyClean(char* pData);
        void CompleteBuy(char byRet, char* pLoadData);
        void CompleteBuyComplete(char* pData);
        void CompleteBuyRollBack(char byRet, char* pLoadData);
        void CompleteCancelRegist(char byRet, char* pLoadData);
        void CompleteCreate(uint16_t wInx);
        void CompleteCreateNotifyTradeInfo(char byRace, uint16_t wInx);
        void CompleteLogInCompete(char* pData);
        void CompleteReRegist(char* pLoadData);
        void CompleteReRegistRollBack(char* pData);
        void CompleteRegistItem(char byRet, char* pLoadData);
        void CompleteReprice(char byRet, char* pLoadData);
        void CompleteSelectBuyInfo(char byRet, char* pLoadData);
        void CompleteSelectReservedSchedule(char byRet, char* pLoadData);
        void CompleteSelectSearchList(char byDBRet, char byProcRet, char* pLoadData);
        void CompleteTimeOutCancelRegist(char byRet, char* pLoadData);
        void CompleteUpdateCheatRegistTime(char* pLoadData);
        void CompleteUpdateState(char byRet, char* pLoadData);
        static void Destroy();
        char GetEmptyRecordSerial(unsigned int* dwSerial, bool* pbRecordInserted);
        char GetMaxRegistCnt(uint16_t wInx, unsigned int dwSerial);
        struct CUnmannedTraderRegistItemInfo* GetRegItemInfo(uint16_t wInx, unsigned int dwSerial);
        bool Init();
        bool InitLogger();
        bool InsertDefalutRecord();
        bool InsertStateRecord();
        static struct CUnmannedTraderController* Instance();
        bool Load(uint16_t wInx, unsigned int dwSerial, struct _TRADE_DB_BASE* kInfo);
        bool Load();
        void Log(char* fmt);
        void LogOut(uint16_t wInx, unsigned int dwSerial);
        void Loop();
        void ModifyPrice(uint16_t wInx, struct _a_trade_adjust_price_request_clzo* pRequest);
        void ReRegist(uint16_t wInx, struct _unmannedtrader_re_regist_request_clzo* pRequest);
        void Regist(uint16_t wInx, struct _a_trade_reg_item_request_clzo* pRequest);
        void Search(uint16_t wInx, struct _unmannedtrader_search_list_request_clzo* pRequest);
        char SelectBuy(char* pData);
        char SelectSearchList(char* pData, struct CRFWorldDatabase* pkWorldDB, char* byProcRet);
        char UpdateBuy(char* pData);
        char UpdateBuyComplete(char* pData);
        char UpdateBuyRollBack(char* pData);
        char UpdateCancelRegist(char* pData);
        char UpdateCheatRegistTime(char* pData);
        bool UpdateClearDanglingOwnerRecord();
        char UpdateItemState(char* pData);
        char UpdateLazyClean(char* pData);
        char UpdateLogInComplete(char* pData);
        char UpdateRePrice(char* pData);
        char UpdateReRegist(char* pData);
        char UpdateReRegistRollBack(char* pData);
        char UpdateRegistItem(char* pData);
        char UpdateTimeOutCancelRegist(char* pData);
        ~CUnmannedTraderController();
        void dtor_CUnmannedTraderController();
    };
END_ATF_NAMESPACE
