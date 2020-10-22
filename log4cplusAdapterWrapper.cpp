//
// C Wrapper for C++ class
//
#include "log4cplusAdapter.h"
#include "log4cplusAdapterWrapper.h"

extern "C" {
    alan::Log4cplusAdapter* newLog4cplusAdapter(const char *aName) {
        return new alan::Log4cplusAdapter(aName);
    }

    const char* alan::Log4cplusAdapter_getName(alan::Log4cplusAdapter *v) {
        return v->getName();
    }

    void alan::Log4cplusAdapter_trace(alan::Log4cplusAdapter *v, const char *msg) { v->trace(msg); }
    void alan::Log4cplusAdapter_debug(alan::Log4cplusAdapter *v, const char *msg) { v->debug(msg); }
    void alan::Log4cplusAdapter_info(alan::Log4cplusAdapter *v, const char *msg) { v->info(msg); }
    void alan::Log4cplusAdapter_warn(alan::Log4cplusAdapter *v, const char *msg) { v->warn(msg); }
    void alan::Log4cplusAdapter_error(alan::Log4cplusAdapter *v, const char *msg) { v->error(msg); }
    void alan::Log4cplusAdapter_fatal(alan::Log4cplusAdapter *v, const char *msg) { v->fatal(msg); }

}
