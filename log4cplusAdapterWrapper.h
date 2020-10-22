//
// C Wrapper for C++ class
//

#ifndef LOG4_OBJECT_HELPER_LOG4CPLUSADAPTERWRAPPER_H
#define LOG4_OBJECT_HELPER_LOG4CPLUSADAPTERWRAPPER_H

#ifdef __cplusplus
extern "C" {
namespace alan {
#endif

typedef struct Log4cplusAdapter Log4cplusAdapter;

Log4cplusAdapter* newLog4cplusAdapter(const char *aName);

const char* Log4cplusAdapter_getName(Log4cplusAdapter *v);

void Log4cplusAdapter_trace(Log4cplusAdapter *v, const char *msg);
void Log4cplusAdapter_debug(Log4cplusAdapter *v, const char *msg);
void Log4cplusAdapter_info(Log4cplusAdapter *v, const char *msg);
void Log4cplusAdapter_warn(Log4cplusAdapter *v, const char *msg);
void Log4cplusAdapter_error(Log4cplusAdapter *v, const char *msg);
void Log4cplusAdapter_fatal(Log4cplusAdapter *v, const char *msg);

#ifdef __cplusplus
}
}
#endif

#endif //LOG4_OBJECT_HELPER_LOG4CPLUSADAPTERWRAPPER_H
