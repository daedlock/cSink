cmake_minimum_required(VERSION 3.6)
project(cSink)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}  -std=c++11")

set(SOURCE_FILES
    lib/thirdparty/console-colors.c
    lib/draw.c
    lib/net.c
    main.c)


add_executable(cSink ${SOURCE_FILES})
target_link_libraries(cSink curl)
