// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <std___Iterator_with_base.hpp>
#include <std__basic_streambuf.hpp>


START_ATF_NAMESPACE
    namespace std
    {
        #pragma pack(push, 8)
        template<>
        struct  istreambuf_iterator<char,char_traits<char> > : _Iterator_with_base<input_iterator_tag,char,__int64,char *,char &,_Iterator_base>
        {
            basic_streambuf<char,char_traits<char> > *_Strbuf;
            bool _Got;
            char _Val;
        };
        #pragma pack(pop)
    }; // end namespace std
END_ATF_NAMESPACE
#include <std___Iterator_with_base.hpp>
#include <std__basic_streambuf.hpp>



START_ATF_NAMESPACE
    namespace std
    {
        #pragma pack(push, 8)
        template<>
        struct  istreambuf_iterator<wchar_t,char_traits<wchar_t> > : _Iterator_with_base<input_iterator_tag,wchar_t,__int64,wchar_t *,wchar_t &,_Iterator_base>
        {
            basic_streambuf<wchar_t,char_traits<wchar_t> > *_Strbuf;
            bool _Got;
            wchar_t _Val;
        };
        #pragma pack(pop)
    }; // end namespace std
END_ATF_NAMESPACE
