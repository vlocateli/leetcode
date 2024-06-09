cmake_minimum_required(VERSION 3.29)
project(twosum)


add_executable(2sum main.cc)
target_compile_options(2sum PUBLIC -Wall -Wextra -Werror -pedantic -std=c++17 -O1 -ggdb)
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -ggdb")
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
