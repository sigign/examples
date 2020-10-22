#include "log4cplusAdapter.h"

int
main()
{
    alan::Log4cplusAdapter mn("main");
    alan::Log4cplusAdapter al("alan");

    mn.debug("Debug Hello world");
    mn.error("Error");
    mn.fatal("fatal");
    mn.info("info");
    mn.trace("trace");
    mn.warn("warn");

    al.warn("warn");
    return 0;
}
