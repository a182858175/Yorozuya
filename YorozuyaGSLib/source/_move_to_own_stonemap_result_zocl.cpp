#include <_move_to_own_stonemap_result_zocl.hpp>


START_ATF_NAMESPACE
    int _move_to_own_stonemap_result_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _move_to_own_stonemap_result_zocl*);
        return (org_ptr(0x1400f03c0L))(this);
    };
END_ATF_NAMESPACE
