// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    struct CLuaScriptVtbl
    {
        void *(WINAPIV *__vecDelDtor)(struct CLuaScript *_this, unsigned int);
        const char *(WINAPIV *GetName)(struct CLuaScript *_this);
        struct lua_State *(WINAPIV *GetLuaState)(struct CLuaScript *_this);
        bool (WINAPIV *RunCommand)(struct CLuaScript *_this, struct CLuaCommand *);
        void (WINAPIV *SetName)(struct CLuaScript *_this, const char *);
    };
END_ATF_NAMESPACE
