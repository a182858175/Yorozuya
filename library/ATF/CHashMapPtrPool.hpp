// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <stdext__hash_map.hpp>


START_ATF_NAMESPACE
    template<typename _T, typename _Code>
    struct CHashMapPtrPool
    {
        bool m_bCleanUp;
        stdext::hash_map<_T, _Code *> m_mapData;
    };
END_ATF_NAMESPACE
