// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CLuaCommandEx.hpp>
#include <$7C043B02100353E56B76EDF5C6AF069E.hpp>


START_ATF_NAMESPACE
    struct CLuaSignalReActor
    {
        struct _Action
        {
            char m_bySignalCode;
            struct CLuaCommandEx *m_pLuaCommandEx;
        public:
            void Init();
            _Action();
            void ctor__Action();
        };
        struct  RF_LUA_SIGNAL
        {
            typedef $7C043B02100353E56B76EDF5C6AF069E ENUM;
        };
        _Action m_ActionData[3];
    public:
        bool AddAction(char bySignalCode, char byType, char* strScriptName, char* strName);
        CLuaSignalReActor();
        void ctor_CLuaSignalReActor();
        void Free();
        void Init();
        bool SetSignalAndAction(char bySignalCode);
        void _Free(struct _Action* pAction);
        struct _Action* _SearchAction(char bySignalCode);
        struct _Action* _SearchEmptyAction();
        ~CLuaSignalReActor();
        void dtor_CLuaSignalReActor();
    };
END_ATF_NAMESPACE
