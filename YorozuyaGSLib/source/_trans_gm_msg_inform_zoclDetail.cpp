#include <_trans_gm_msg_inform_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_trans_gm_msg_inform_zoclctor__trans_gm_msg_inform_zocl2_ptr _trans_gm_msg_inform_zoclctor__trans_gm_msg_inform_zocl2_next(nullptr);
        Info::_trans_gm_msg_inform_zoclctor__trans_gm_msg_inform_zocl2_clbk _trans_gm_msg_inform_zoclctor__trans_gm_msg_inform_zocl2_user(nullptr);
        
        Info::_trans_gm_msg_inform_zoclsize4_ptr _trans_gm_msg_inform_zoclsize4_next(nullptr);
        Info::_trans_gm_msg_inform_zoclsize4_clbk _trans_gm_msg_inform_zoclsize4_user(nullptr);
        
        
        void _trans_gm_msg_inform_zoclctor__trans_gm_msg_inform_zocl2_wrapper(struct _trans_gm_msg_inform_zocl* _this)
        {
           _trans_gm_msg_inform_zoclctor__trans_gm_msg_inform_zocl2_user(_this, _trans_gm_msg_inform_zoclctor__trans_gm_msg_inform_zocl2_next);
        };
        int _trans_gm_msg_inform_zoclsize4_wrapper(struct _trans_gm_msg_inform_zocl* _this)
        {
           return _trans_gm_msg_inform_zoclsize4_user(_this, _trans_gm_msg_inform_zoclsize4_next);
        };
        
        ::std::array<hook_record, 2> _trans_gm_msg_inform_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1400efcb0L,
                (LPVOID *)&_trans_gm_msg_inform_zoclctor__trans_gm_msg_inform_zocl2_user,
                (LPVOID *)&_trans_gm_msg_inform_zoclctor__trans_gm_msg_inform_zocl2_next,
                (LPVOID)cast_pointer_function(_trans_gm_msg_inform_zoclctor__trans_gm_msg_inform_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_trans_gm_msg_inform_zocl::*)())&_trans_gm_msg_inform_zocl::ctor__trans_gm_msg_inform_zocl)
            },
            _hook_record {
                (LPVOID)0x1400efcd0L,
                (LPVOID *)&_trans_gm_msg_inform_zoclsize4_user,
                (LPVOID *)&_trans_gm_msg_inform_zoclsize4_next,
                (LPVOID)cast_pointer_function(_trans_gm_msg_inform_zoclsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_trans_gm_msg_inform_zocl::*)())&_trans_gm_msg_inform_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
