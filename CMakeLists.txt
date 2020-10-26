cmake_minimum_required(VERSION 3.17)
project(parser)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(parser
        main.cpp
        Parser.cpp
        Parser.h Interpretator.cpp Interpretator.h)
