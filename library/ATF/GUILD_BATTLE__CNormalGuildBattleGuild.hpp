// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CGuild.hpp>
#include <GUILD_BATTLE__CNormalGuildBattleGuildMember.hpp>



START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        struct CNormalGuildBattleGuild
        {
            struct  CTopKillPrediCate
            {
            };
            struct  CTopGoalPrediCate
            {
            };
            char m_byID;
            char m_byColorInx;
            unsigned int m_dwGoalCnt;
            unsigned int m_dwScore;
            unsigned int m_dwKillPoint;
            struct CGuild *m_pkGuild;
            char m_byNotifyPositionMemberCnt;
            struct CNormalGuildBattleGuildMember *m_pkNotifyPositionMember[10];
            unsigned int m_dwKillCountSum;
            unsigned int m_dwMaxJoinMemberCnt;
            unsigned int m_dwCurJoinMember;
            CNormalGuildBattleGuildMember m_kMember[150];
        public:
            void AskJoin(char* wszDestGuildName);
            void AskJoin(int n, char* wszDestGuildName, struct CNormalGuildBattleLogger* kLogger);
            void AskJoin(int n, unsigned int dwSerial, char GuildBattleNumber, char* wszDestGuild, struct CNormalGuildBattleLogger* kLogger);
            CNormalGuildBattleGuild(char byID);
            void ctor_CNormalGuildBattleGuild(char byID);
            void CleanUpBattle();
            void Clear();
            void ClearInBattleState();
            long double DecPvpPoint(struct CNormalGuildBattleLogger* kLogger);
            char* GetANSIGuildName();
            char GetColorInx();
            char* GetColorName();
            int GetEmptyMember();
            unsigned int GetGoalCnt();
            CGuild* GetGuild();
            char* GetGuildName();
            char GetGuildRace();
            unsigned int GetGuildSerial();
            unsigned int GetJoinMemberCnt();
            unsigned int GetKillCountSum();
            unsigned int GetMaxJoinMemberCount();
            int GetMember(unsigned int dwSerial);
            struct CPlayer* GetMemberPlayer(unsigned int dwSerial);
            struct CNormalGuildBattleGuildMember* GetMemberPtr(unsigned int dwSerial);
            unsigned int GetScore();
            struct CNormalGuildBattleGuildMember* GetTopGoalMember();
            struct CNormalGuildBattleGuildMember* GetTopKillMember();
            void Goal(struct CNormalGuildBattleGuildMember* pkMember);
            void IncPvpPoint(long double dTotalInc, char byWin, struct CNormalGuildBattleLogger* kLogger);
            bool IsJoinMember(unsigned int dwSerial);
            bool IsMember(unsigned int dwSerial);
            int IsReStart(unsigned int dwSerial);
            char Join(unsigned int dwSerial, char GuildBattleNumber, int* iMemberInx, struct CNormalGuildBattleLogger* kLogger);
            int Kill(struct CNormalGuildBattleGuildMember* pkSrcMember, struct CNormalGuildBattleGuildMember* pkDestMember);
            void LeaveGuild(unsigned int dwSerial, bool bInGuildBattle, struct CNormalGuildBattleLogger* kLogger);
            void LogIn(int n, unsigned int dwSerial, char GuildBattleNumber, char* wszDestGuild, unsigned int uiID, struct CNormalGuildBattleField* pkField, struct CNormalGuildBattleLogger* kLogger);
            void MoveMap(unsigned int uiID, struct CNormalGuildBattleField* pkField);
            bool MoveMember(int iMember, unsigned int uiID, struct CNormalGuildBattleField* pkField, struct CNormalGuildBattleLogger* kLogger);
            bool NetClose(bool bInGuildBattle, unsigned int dwSerial, struct CNormalGuildBattleLogger* kLogger);
            void NotifyLeftMinuteBeforeStart(char byLeftMin);
            void ReturnBindPosAll();
            char ReturnHQPosAll();
            bool ReturnStartPosAll(struct CNormalGuildBattleField* pkField);
            void RewardItem(struct CNormalGuildBattleLogger* kLogger);
            void SendDeleteNotifyPositionMember(int iMemberInx);
            void SendGetGravityStone(struct CNormalGuildBattleGuild* pkTakeGuild, struct CPlayer* pkPlayer, int iTakePortalInx);
            void SendMsg(char* byType, char* pMsg, unsigned int uiSize);
            void SendMsg(char* byType, char* pMsg, unsigned int uiSize, int iExeceptMemberInx);
            void SendMsg(char* byType, char* pMsg, unsigned int uiSize, unsigned int dwSerial);
            void SendOhterNotifyCommitteeMemberPosition(struct CPlayer* pkPlayer);
            void SendRegenBall(int iPortalInx);
            void SendSelfNotifyCommitteeMemberPositionList(struct CPlayer* pkPlayer);
            void SendStartNotifyCommitteeMemberPosition(int iMember);
            void SetColorInx(char byInx);
            void SetGuild(struct CGuild* pkGuild);
            bool SetReStartFlag(unsigned int dwSerial);
            void UpdateScore();
            ~CNormalGuildBattleGuild();
            void dtor_CNormalGuildBattleGuild();
        };
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
