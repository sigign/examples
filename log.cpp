#include "log4cplusAdapter.h"

int
main()
{
    alan::Log4cplusAdapter mn("main");
    alan::Log4cplusAdapter al("alan");

    // Initialization and deinitialization.
    mn.debug("Debug Hello world");
    mn.error("Error");
    mn.fatal("fatel");
    mn.info("info");
    mn.trace("trace");
    mn.warn("warn");

    al.warn("warn");
    return 0;
}
