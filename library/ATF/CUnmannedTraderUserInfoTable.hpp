// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CLogFile.hpp>
#include <CPlayer.hpp>
#include <CUnmannedTraderItemState.hpp>
#include <CUnmannedTraderRegistItemInfo.hpp>
#include <CUnmannedTraderTradeInfo.hpp>
#include <CUnmannedTraderUserInfo.hpp>
#include <_TRADE_DB_BASE.hpp>
#include <_a_trade_adjust_price_request_clzo.hpp>
#include <_a_trade_clear_item_request_clzo.hpp>
#include <_a_trade_reg_item_request_clzo.hpp>
#include <_qry_case_unmandtrader_buy_update_complete.hpp>
#include <_qry_case_unmandtrader_buy_update_wait.hpp>
#include <_unmannedtrader_buy_item_request_clzo.hpp>
#include <_unmannedtrader_buy_item_result_zocl.hpp>
#include <_unmannedtrader_re_regist_request_clzo.hpp>
#include <_unmannedtrader_search_list_request_clzo.hpp>
#include <std__vector.hpp>


START_ATF_NAMESPACE
    struct CUnmannedTraderUserInfoTable
    {
        CLogFile *m_pkLogger;
        CLogFile *m_pkServiceLogger;
        std::vector<CUnmannedTraderUserInfo,std::allocator<CUnmannedTraderUserInfo> > m_veckInfo;
    public:
        void Buy(uint16_t wInx, char byType, struct _unmannedtrader_buy_item_request_clzo* pRequest);
        CUnmannedTraderUserInfoTable();
        void ctor_CUnmannedTraderUserInfoTable();
        void CancelRegist(uint16_t wInx, char byType, struct _a_trade_clear_item_request_clzo* pRequest);
        bool CheatCancelRegist(uint16_t wInx, unsigned int dwOwnerSerial, char byNth);
        bool CheckwIndexAndType(uint16_t wInx, char byType, char* szCallFuncName);
        void ClearLogLogOutState(char* szType, unsigned int dwOwner, char* szAccount, char* wszName, unsigned int dwRegistSerial, unsigned int dwK, unsigned int dwD, unsigned int dwU);
        void ClearRequest(uint16_t wInx, unsigned int dwOwner);
        void CompleteBuy(char byRet, char* pLoadData, struct CUnmannedTraderTradeInfo* pkTaradInfo);
        void CompleteCancelRegist(char byRet, char* pLoadData);
        void CompleteCreate(uint16_t wInx);
        void CompleteReRegist(char* pLoadData);
        void CompleteReRegistRollBack(uint16_t wInx, unsigned int dwOwnerSerial, char* pData);
        void CompleteRegist(char byRet, char* pLoadData);
        void CompleteReprice(char byRet, char* pLoadData);
        void CompleteSearch(char byDBRet, char byProcRet, char* pLoadData);
        void CompleteTimeOutClear(char* pLoadData);
        void CompleteUpdateCheatRegistTime(char* pLoadData);
        bool CompleteUpdateState(unsigned int dwOwnerSerial, unsigned int dwRegistSerial, char byState);
        static void Destroy();
        struct CUnmannedTraderUserInfo* Find(unsigned int dwSerial);
        struct CUnmannedTraderUserInfo* FindByIndex(uint16_t wInx);
        struct CUnmannedTraderUserInfo* FindUser(uint16_t wInx, unsigned int dwSerial);
        CUnmannedTraderItemState::STATE GetCloseItemForPassTimeUpdateInfo(unsigned int dwOwnerSerial, unsigned int dwRegistSerial, struct CPlayer** pkOwner);
        char GetMaxRegistCnt(uint16_t wInx, unsigned int dwSerial);
        struct CUnmannedTraderRegistItemInfo* GetRegItemInfo(uint16_t wInx, unsigned int dwSerial);
        bool Init();
        static struct CUnmannedTraderUserInfoTable* Instance();
        bool Load(char byType, uint16_t wInx, unsigned int dwSerial, struct _TRADE_DB_BASE* kInfo);
        void Log(char* fmt);
        void LogOut(uint16_t wInx, unsigned int dwSerial);
        void ModifyPrice(uint16_t wInx, char byType, struct _a_trade_adjust_price_request_clzo* pRequest);
        void PushUpdateBuyRollBack(struct _qry_case_unmandtrader_buy_update_wait* pkQuery);
        void ReRegist(uint16_t wInx, char byType, struct _unmannedtrader_re_regist_request_clzo* pRequest);
        void Regist(uint16_t wInx, char byType, struct _a_trade_reg_item_request_clzo* pRequest);
        void Search(uint16_t wInx, char byType, struct _unmannedtrader_search_list_request_clzo* pRequest);
        void ServiceLog(char* fmt);
        void SetLogger(struct CLogFile* pkLogger, struct CLogFile* pkSeviceLogger);
        bool SubCompleteBuyFindBuyer(struct _qry_case_unmandtrader_buy_update_wait* pkQuery, struct CUnmannedTraderUserInfo** ppkBuyUser, struct CPlayer** ppkBuyPlayer);
        void SubCompleteBuyIncreaseVesion(char byDivision, char byClass);
        bool SubCompleteBuyProcBuy(struct CPlayer* pkBuyPlayer, struct CUnmannedTraderUserInfo* pkBuyUser, int64_t tResultTime, struct _qry_case_unmandtrader_buy_update_wait::__list* pkQueryList, struct _unmannedtrader_buy_item_result_zocl::__list* pSendResultList, struct _qry_case_unmandtrader_buy_update_complete::__list* pUpdateCompleteList, char* byCompleteUpdateNum, unsigned int* pdwPayDalant, struct CUnmannedTraderTradeInfo* pkTaradInfo);
        bool SubCompleteBuyProcBuyResult(char byRet, struct _qry_case_unmandtrader_buy_update_complete::__list* pUpdateCompleteList, char* byCompleteUpdateNum);
        ~CUnmannedTraderUserInfoTable();
        void dtor_CUnmannedTraderUserInfoTable();
    };
END_ATF_NAMESPACE
