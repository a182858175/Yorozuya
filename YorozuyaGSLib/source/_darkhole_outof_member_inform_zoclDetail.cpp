#include <_darkhole_outof_member_inform_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_darkhole_outof_member_inform_zoclsize2_ptr _darkhole_outof_member_inform_zoclsize2_next(nullptr);
        Info::_darkhole_outof_member_inform_zoclsize2_clbk _darkhole_outof_member_inform_zoclsize2_user(nullptr);
        
        int _darkhole_outof_member_inform_zoclsize2_wrapper(struct _darkhole_outof_member_inform_zocl* _this)
        {
           return _darkhole_outof_member_inform_zoclsize2_user(_this, _darkhole_outof_member_inform_zoclsize2_next);
        };
        
        ::std::array<hook_record, 1> _darkhole_outof_member_inform_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x14026f4d0L,
                (LPVOID *)&_darkhole_outof_member_inform_zoclsize2_user,
                (LPVOID *)&_darkhole_outof_member_inform_zoclsize2_next,
                (LPVOID)cast_pointer_function(_darkhole_outof_member_inform_zoclsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_darkhole_outof_member_inform_zocl::*)())&_darkhole_outof_member_inform_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
