#ifndef __LOG4CPLUSADAPTER_H
#define __LOG4CPLUSADAPTER_H

#include <string>

#include <log4cplus/logger.h>
#include <log4cplus/loggingmacros.h>
#include <log4cplus/configurator.h>
#include <log4cplus/initializer.h>

namespace alan {
class Log4cplusAdapter {
    public:
        Log4cplusAdapter(const char name[30]);

        const char * getName();

        void trace(const char *message);
        void debug(const char *message);
        void info(const char *message);
        void warn(const char *message);
        void error(const char *message);
        void fatal(const char *message);

    private:
        log4cplus::Initializer initializer;
        log4cplus::BasicConfigurator config;
        std::string _name;
        log4cplus::Logger _logger;
};
}

#endif
