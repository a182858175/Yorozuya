// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <US__AbstractTaskPool.hpp>
#include <US__CriticalSection.hpp>
#include <std__vector.hpp>
#include <stdext__hash_map.hpp>


START_ATF_NAMESPACE
    namespace US
    {
        template<typename _Msg, typename _Q>
        struct  CDynamicTaskPool : AbstractTaskPool<_Msg, _Q >
        {
            std::vector<_Msg *> m_TaskPool;
            stdext::hash_map<_Msg *, unsigned long> m_PtrHashTable;
            AbstractTaskPool<_Msg, _Q>::Default_Funtor *m_pInitFunctor;
            CriticalSection m_CS;
        };
    }; // end namespace US
END_ATF_NAMESPACE
