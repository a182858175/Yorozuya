#include <_qry_sheet_logoutDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_qry_sheet_logoutctor__qry_sheet_logout2_ptr _qry_sheet_logoutctor__qry_sheet_logout2_next(nullptr);
        Info::_qry_sheet_logoutctor__qry_sheet_logout2_clbk _qry_sheet_logoutctor__qry_sheet_logout2_user(nullptr);
        
        Info::_qry_sheet_logoutsize4_ptr _qry_sheet_logoutsize4_next(nullptr);
        Info::_qry_sheet_logoutsize4_clbk _qry_sheet_logoutsize4_user(nullptr);
        
        
        Info::_qry_sheet_logoutdtor__qry_sheet_logout6_ptr _qry_sheet_logoutdtor__qry_sheet_logout6_next(nullptr);
        Info::_qry_sheet_logoutdtor__qry_sheet_logout6_clbk _qry_sheet_logoutdtor__qry_sheet_logout6_user(nullptr);
        
        
        void _qry_sheet_logoutctor__qry_sheet_logout2_wrapper(struct _qry_sheet_logout* _this)
        {
           _qry_sheet_logoutctor__qry_sheet_logout2_user(_this, _qry_sheet_logoutctor__qry_sheet_logout2_next);
        };
        int _qry_sheet_logoutsize4_wrapper(struct _qry_sheet_logout* _this)
        {
           return _qry_sheet_logoutsize4_user(_this, _qry_sheet_logoutsize4_next);
        };
        
        void _qry_sheet_logoutdtor__qry_sheet_logout6_wrapper(struct _qry_sheet_logout* _this)
        {
           _qry_sheet_logoutdtor__qry_sheet_logout6_user(_this, _qry_sheet_logoutdtor__qry_sheet_logout6_next);
        };
        
        ::std::array<hook_record, 3> _qry_sheet_logout_functions = 
        {
            _hook_record {
                (LPVOID)0x14011f3a0L,
                (LPVOID *)&_qry_sheet_logoutctor__qry_sheet_logout2_user,
                (LPVOID *)&_qry_sheet_logoutctor__qry_sheet_logout2_next,
                (LPVOID)cast_pointer_function(_qry_sheet_logoutctor__qry_sheet_logout2_wrapper),
                (LPVOID)cast_pointer_function((void(_qry_sheet_logout::*)())&_qry_sheet_logout::ctor__qry_sheet_logout)
            },
            _hook_record {
                (LPVOID)0x14011f280L,
                (LPVOID *)&_qry_sheet_logoutsize4_user,
                (LPVOID *)&_qry_sheet_logoutsize4_next,
                (LPVOID)cast_pointer_function(_qry_sheet_logoutsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_sheet_logout::*)())&_qry_sheet_logout::size)
            },
            _hook_record {
                (LPVOID)0x14011f450L,
                (LPVOID *)&_qry_sheet_logoutdtor__qry_sheet_logout6_user,
                (LPVOID *)&_qry_sheet_logoutdtor__qry_sheet_logout6_next,
                (LPVOID)cast_pointer_function(_qry_sheet_logoutdtor__qry_sheet_logout6_wrapper),
                (LPVOID)cast_pointer_function((void(_qry_sheet_logout::*)())&_qry_sheet_logout::dtor__qry_sheet_logout)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
