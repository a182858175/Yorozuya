// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CLuaSignalReActor.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        using CLuaSignalReActorAddAction2_ptr = bool (WINAPIV*)(struct CLuaSignalReActor*, char, char, char*, char*);
        using CLuaSignalReActorAddAction2_clbk = bool (WINAPIV*)(struct CLuaSignalReActor*, char, char, char*, char*, CLuaSignalReActorAddAction2_ptr);
        
        using CLuaSignalReActorctor_CLuaSignalReActor4_ptr = void (WINAPIV*)(struct CLuaSignalReActor*);
        using CLuaSignalReActorctor_CLuaSignalReActor4_clbk = void (WINAPIV*)(struct CLuaSignalReActor*, CLuaSignalReActorctor_CLuaSignalReActor4_ptr);
        using CLuaSignalReActorFree6_ptr = void (WINAPIV*)(struct CLuaSignalReActor*);
        using CLuaSignalReActorFree6_clbk = void (WINAPIV*)(struct CLuaSignalReActor*, CLuaSignalReActorFree6_ptr);
        using CLuaSignalReActorInit8_ptr = void (WINAPIV*)(struct CLuaSignalReActor*);
        using CLuaSignalReActorInit8_clbk = void (WINAPIV*)(struct CLuaSignalReActor*, CLuaSignalReActorInit8_ptr);
        using CLuaSignalReActorSetSignalAndAction10_ptr = bool (WINAPIV*)(struct CLuaSignalReActor*, char);
        using CLuaSignalReActorSetSignalAndAction10_clbk = bool (WINAPIV*)(struct CLuaSignalReActor*, char, CLuaSignalReActorSetSignalAndAction10_ptr);
        using CLuaSignalReActor_Free12_ptr = void (WINAPIV*)(struct CLuaSignalReActor*, struct CLuaSignalReActor::_Action*);
        using CLuaSignalReActor_Free12_clbk = void (WINAPIV*)(struct CLuaSignalReActor*, struct CLuaSignalReActor::_Action*, CLuaSignalReActor_Free12_ptr);
        using CLuaSignalReActor_SearchAction14_ptr = struct CLuaSignalReActor::_Action* (WINAPIV*)(struct CLuaSignalReActor*, char);
        using CLuaSignalReActor_SearchAction14_clbk = struct CLuaSignalReActor::_Action* (WINAPIV*)(struct CLuaSignalReActor*, char, CLuaSignalReActor_SearchAction14_ptr);
        using CLuaSignalReActor_SearchEmptyAction16_ptr = struct CLuaSignalReActor::_Action* (WINAPIV*)(struct CLuaSignalReActor*);
        using CLuaSignalReActor_SearchEmptyAction16_clbk = struct CLuaSignalReActor::_Action* (WINAPIV*)(struct CLuaSignalReActor*, CLuaSignalReActor_SearchEmptyAction16_ptr);
        
        using CLuaSignalReActordtor_CLuaSignalReActor18_ptr = void (WINAPIV*)(struct CLuaSignalReActor*);
        using CLuaSignalReActordtor_CLuaSignalReActor18_clbk = void (WINAPIV*)(struct CLuaSignalReActor*, CLuaSignalReActordtor_CLuaSignalReActor18_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE
