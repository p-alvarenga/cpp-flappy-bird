cmake_minimum_required(VERSION 3.10)
project(cpp_flappy_bird)

set(CMAKE_CXX_STANDARD 17)

find_package(SFML 2.5 REQUIRED graphics window system)
file(GLOB_RECURSE SRC_FILES src/*.cpp)
list(APPEND SRC_FILES main.cpp)

add_executable(test ${SRC_FILES})

target_link_libraries(test sfml-graphics sfml-window sfml-system)
