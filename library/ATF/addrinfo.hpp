// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <sockaddr.hpp>


START_ATF_NAMESPACE
    struct addrinfo
    {
        int ai_flags;
        int ai_family;
        int ai_socktype;
        int ai_protocol;
        unsigned __int64 ai_addrlen;
        char *ai_canonname;
        sockaddr *ai_addr;
        addrinfo *ai_next;
    };
END_ATF_NAMESPACE
