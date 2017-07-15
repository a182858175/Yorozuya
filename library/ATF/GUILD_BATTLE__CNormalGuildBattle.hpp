// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <GUILD_BATTLE__CGuildBattle.hpp>
#include <GUILD_BATTLE__CNormalGuildBattleLogger.hpp>
#include <GUILD_BATTLE__CNormalGuildBattleGuild.hpp>
#include <GUILD_BATTLE__CNormalGuildBattleStateList.hpp>


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        struct  CNormalGuildBattle : CGuildBattle
        {
            unsigned int m_dwID;
            bool m_bInit;
            CNormalGuildBattleLogger m_kLogger;
            char m_byGuildBattleNumber;
            CNormalGuildBattleGuild m_k1P;
            CNormalGuildBattleGuild m_k2P;
            struct CNormalGuildBattleField *m_pkField;
            char m_byWinResult;
            struct CNormalGuildBattleGuild *m_pkWin;
            struct CNormalGuildBattleGuild *m_pkLose;
            struct CNormalGuildBattleGuild *m_pkRed;
            struct CNormalGuildBattleGuild *m_pkBlue;
            struct CNormalGuildBattleStateList *m_pkStateList;
        public:
            void AddComplete(char byRet);
            void AskJoin(int n, unsigned int dwGuildSerial, unsigned int dwCharacSerial);
            void AskJoin();
            CNormalGuildBattle(unsigned int dwID);
            void ctor_CNormalGuildBattle(unsigned int dwID);
            void CleanUpBattle();
            void Clear();
            bool ClearDBRecord();
            void CreateLogFile();
            bool CreateLogger();
            void DecideColorInx();
            char DecideWin();
            void DividePvpPoint();
            char DropGravityStone(unsigned int dwCharacSerial);
            struct CNormalGuildBattleGuild* Get1P();
            struct CNormalGuildBattleGuild* Get2P();
            struct CNormalGuildBattleGuild* GetBlue();
            struct CNormalGuildBattleField* GetField();
            char GetGravityStone(uint16_t wIndex, unsigned int dwObjSerial, unsigned int dwCharacSerial);
            struct CNormalGuildBattleGuild* GetGuild(unsigned int dwGuildSerial);
            char GetGuildBattleNumber();
            unsigned int GetID();
            bool GetInfo(struct _guild_battle_current_battle_info_result_zocl* kInfo);
            struct CNormalGuildBattleLogger* GetLogger();
            int GetObjType();
            struct CNormalGuildBattleGuild* GetRed();
            char Goal(unsigned int dwCharacSerial, int iPortalInx);
            void GuildBattleResultLog();
            void GuildBattleResultLogNotifyWeb(struct _qry_case_guild_battel_result_log* Sheet);
            void GuildBattleResultLogPushDBLog(struct _qry_case_guild_battel_result_log* Sheet, struct CNormalGuildBattleGuildMember* pkTopGoalMember, struct CNormalGuildBattleGuildMember* pkTopKillMember);
            void Init(struct CGuild* pk1P, struct CGuild* pk2P, struct CNormalGuildBattleField* pkField, char byNumber, struct CNormalGuildBattleStateList* pkStateList);
            bool Init(bool bToday, unsigned int uiDayID, unsigned int dwID, unsigned int dwP1GuildSerial, unsigned int dwP2GuildSerial, unsigned int dwMapID, char byNumber);
            bool IsEmpty();
            bool IsInBattle();
            bool IsInBattleRegenState();
            bool IsMemberGuild(unsigned int dwGuildSerial);
            bool IsProc();
            int IsReStart(unsigned int dwGuildSerial, unsigned int dwCharacSerial);
            bool IsReadyOrCountState();
            int Join(unsigned int dwGuildSerial, unsigned int dwCharacSerial);
            char JudgeBattle();
            int Kill(unsigned int dwSrcCharacSerial, unsigned int dwDestCharacSerial);
            char LeaveGuild(struct CPlayer* pkPlayer);
            void LogIn(int n, unsigned int dwGuildSerial, unsigned int dwCharacSerial);
            char NetClose(unsigned int dwCharacSerial, struct CPlayer* pkPlayer);
            void NotifyAllProcessEnd();
            void NotifyBallPosition();
            void NotifyBattleResult(char byResult);
            void NotifyBeforeStart();
            void NotifyCommitteeMemberPosition(unsigned int dwGuildSerial, unsigned int dwChracSerial);
            void NotifyDestoryBall(unsigned int dwOwnerSerial);
            void NotifyPassGravityStoneLimitTime();
            void Process();
            void PushDQSDrawRank();
            void PushDQSWinLoseRank();
            char ReStart(struct CPlayer* pkPlayer, unsigned int dwGuildSerial, unsigned int dwCharacSerial);
            void RewardGuildBattleMoney();
            void RewardItem();
            bool Save();
            void SendDrawResult();
            void SendGoalMsg(bool b1P, char* wszGuildName, struct CPlayer* pkPlayer, int iPortalInx);
            void SendKillInform();
            void SendWebAddScheduleInfo();
            void SendWebBattleEndInfo();
            void SendWebBattleStartInfo();
            void SendWinLoseResult();
            bool SetGotoRegenStart();
            void SetReadyState();
            char Start(struct CPlayer* pkPlayer, unsigned int dwGuildSerial, unsigned int dwCharacSerial);
            char TakeGravityStone(int iPortalInx, unsigned int dwCharacSerial);
            ~CNormalGuildBattle();
            void dtor_CNormalGuildBattle();
        };
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
