#include <_pt_inform_appoint_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_pt_inform_appoint_zoclctor__pt_inform_appoint_zocl2_ptr _pt_inform_appoint_zoclctor__pt_inform_appoint_zocl2_next(nullptr);
        Info::_pt_inform_appoint_zoclctor__pt_inform_appoint_zocl2_clbk _pt_inform_appoint_zoclctor__pt_inform_appoint_zocl2_user(nullptr);
        
        Info::_pt_inform_appoint_zoclsize4_ptr _pt_inform_appoint_zoclsize4_next(nullptr);
        Info::_pt_inform_appoint_zoclsize4_clbk _pt_inform_appoint_zoclsize4_user(nullptr);
        
        
        void _pt_inform_appoint_zoclctor__pt_inform_appoint_zocl2_wrapper(struct _pt_inform_appoint_zocl* _this)
        {
           _pt_inform_appoint_zoclctor__pt_inform_appoint_zocl2_user(_this, _pt_inform_appoint_zoclctor__pt_inform_appoint_zocl2_next);
        };
        int _pt_inform_appoint_zoclsize4_wrapper(struct _pt_inform_appoint_zocl* _this)
        {
           return _pt_inform_appoint_zoclsize4_user(_this, _pt_inform_appoint_zoclsize4_next);
        };
        
        ::std::array<hook_record, 2> _pt_inform_appoint_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1402bd6c0L,
                (LPVOID *)&_pt_inform_appoint_zoclctor__pt_inform_appoint_zocl2_user,
                (LPVOID *)&_pt_inform_appoint_zoclctor__pt_inform_appoint_zocl2_next,
                (LPVOID)cast_pointer_function(_pt_inform_appoint_zoclctor__pt_inform_appoint_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_pt_inform_appoint_zocl::*)())&_pt_inform_appoint_zocl::ctor__pt_inform_appoint_zocl)
            },
            _hook_record {
                (LPVOID)0x1402bd710L,
                (LPVOID *)&_pt_inform_appoint_zoclsize4_user,
                (LPVOID *)&_pt_inform_appoint_zoclsize4_next,
                (LPVOID)cast_pointer_function(_pt_inform_appoint_zoclsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_pt_inform_appoint_zocl::*)())&_pt_inform_appoint_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
