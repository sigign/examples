cmake_minimum_required(VERSION 2.8.0)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
#project (log4_object_helper CXX)
project (log4_object_helper)

find_library(LIBLOG4CPLUS liblog4cplus.so.2.0.5)

add_library(logadapterlib STATIC log4cplusAdapter.cpp)

add_executable(log log.cpp)

target_link_libraries(log logadapterlib ${LIBLOG4CPLUS})

add_executable(logc log.c log4cplusAdapterWrapper.cpp)

target_link_libraries(logc logadapterlib ${LIBLOG4CPLUS})
