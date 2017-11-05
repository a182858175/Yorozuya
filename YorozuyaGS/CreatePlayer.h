#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

#include <ATF/CUserDBInfo.hpp>

namespace GameServer
{
    using namespace Yorozuya::Module;

    namespace Fixes
    {
        class CCreatePlayer : public IModule, CModuleRegister<CCreatePlayer>
        {
        public:
            CCreatePlayer() { };

            virtual void load();

            virtual void unload();

            virtual ModuleName_t get_name();
        private:
            static bool WINAPIV Insert_Char_Request(
                ATF::CUserDB *pObj, 
                char *pwszCharName, 
                char bySlotIndex, 
                char byRaceSexCode, 
                char *pszClassCode, 
                unsigned int dwBaseShape,
                ATF::Info::CUserDBInsert_Char_Request50_ptr next);
        };
    };
};
