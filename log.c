#include "log4cplusAdapterWrapper.h"

int
main()
{
    struct Log4cplusAdapter *a = newLog4cplusAdapter("C Main");
    Log4cplusAdapter_warn(a, "C Warning");
    return 0;
}
