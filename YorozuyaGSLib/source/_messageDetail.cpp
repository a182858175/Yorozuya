#include <_messageDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_messageGetKey12_ptr _messageGetKey12_next(nullptr);
        Info::_messageGetKey12_clbk _messageGetKey12_user(nullptr);
        
        Info::_messageGetMessageA4_ptr _messageGetMessageA4_next(nullptr);
        Info::_messageGetMessageA4_clbk _messageGetMessageA4_user(nullptr);
        
        Info::_messageSetMsg6_ptr _messageSetMsg6_next(nullptr);
        Info::_messageSetMsg6_clbk _messageSetMsg6_user(nullptr);
        
        
        Info::_messagector__message8_ptr _messagector__message8_next(nullptr);
        Info::_messagector__message8_clbk _messagector__message8_user(nullptr);
        
        
        Info::_messagedtor__message12_ptr _messagedtor__message12_next(nullptr);
        Info::_messagedtor__message12_clbk _messagedtor__message12_user(nullptr);
        
        unsigned int _messageGetKey12_wrapper(struct _message* _this)
        {
           return _messageGetKey12_user(_this, _messageGetKey12_next);
        };
        unsigned int _messageGetMessageA4_wrapper(struct _message* _this)
        {
           return _messageGetMessageA4_user(_this, _messageGetMessageA4_next);
        };
        void _messageSetMsg6_wrapper(struct _message* _this, unsigned int message, unsigned int key1, unsigned int key2, unsigned int key3)
        {
           _messageSetMsg6_user(_this, message, key1, key2, key3, _messageSetMsg6_next);
        };
        
        void _messagector__message8_wrapper(struct _message* _this)
        {
           _messagector__message8_user(_this, _messagector__message8_next);
        };
        
        void _messagedtor__message12_wrapper(struct _message* _this)
        {
           _messagedtor__message12_user(_this, _messagedtor__message12_next);
        };
        
        ::std::array<hook_record, 5> _message_functions = 
        {
            _hook_record {
                (LPVOID)0x1401c0320L,
                (LPVOID *)&_messageGetKey12_user,
                (LPVOID *)&_messageGetKey12_next,
                (LPVOID)cast_pointer_function(_messageGetKey12_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(_message::*)())&_message::GetKey1)
            },
            _hook_record {
                (LPVOID)0x1401c0300L,
                (LPVOID *)&_messageGetMessageA4_user,
                (LPVOID *)&_messageGetMessageA4_next,
                (LPVOID)cast_pointer_function(_messageGetMessageA4_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(_message::*)())&_message::GetMessageA)
            },
            _hook_record {
                (LPVOID)0x140438920L,
                (LPVOID *)&_messageSetMsg6_user,
                (LPVOID *)&_messageSetMsg6_next,
                (LPVOID)cast_pointer_function(_messageSetMsg6_wrapper),
                (LPVOID)cast_pointer_function((void(_message::*)(unsigned int, unsigned int, unsigned int, unsigned int))&_message::SetMsg)
            },
            _hook_record {
                (LPVOID)0x140438750L,
                (LPVOID *)&_messagector__message8_user,
                (LPVOID *)&_messagector__message8_next,
                (LPVOID)cast_pointer_function(_messagector__message8_wrapper),
                (LPVOID)cast_pointer_function((void(_message::*)())&_message::ctor__message)
            },
            _hook_record {
                (LPVOID)0x140438780L,
                (LPVOID *)&_messagedtor__message12_user,
                (LPVOID *)&_messagedtor__message12_next,
                (LPVOID)cast_pointer_function(_messagedtor__message12_wrapper),
                (LPVOID)cast_pointer_function((void(_message::*)())&_message::dtor__message)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
