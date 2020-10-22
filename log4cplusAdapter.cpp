#include "log4cplusAdapter.h"

alan::Log4cplusAdapter::Log4cplusAdapter(const char *name) {
    _name.assign(name);
    config.configure();

    _logger = log4cplus::Logger::getInstance(LOG4CPLUS_TEXT(_name));
    LOG4CPLUS_WARN(_logger, LOG4CPLUS_TEXT("Initialized " + _name));
}

const char * alan::Log4cplusAdapter::getName() { return _name.c_str(); }

void alan::Log4cplusAdapter::trace(const char *message) {
    LOG4CPLUS_TRACE(_logger, LOG4CPLUS_TEXT(_name + ": " + message));
}

void alan::Log4cplusAdapter::debug(const char *message) {
    LOG4CPLUS_DEBUG(_logger, LOG4CPLUS_TEXT(_name + ": " + message));
}

void alan::Log4cplusAdapter::info(const char *message) {
    LOG4CPLUS_INFO(_logger, LOG4CPLUS_TEXT(_name + ": " + message));
}

void alan::Log4cplusAdapter::warn(const char *message) {
    LOG4CPLUS_WARN(_logger, LOG4CPLUS_TEXT(_name + ": " + message));
}

void alan::Log4cplusAdapter::error(const char *message) {
    LOG4CPLUS_ERROR(_logger, LOG4CPLUS_TEXT(_name + ": " + message));
}

void alan::Log4cplusAdapter::fatal(const char *message) {
    LOG4CPLUS_FATAL(_logger, LOG4CPLUS_TEXT(_name + ": " + message));
}

