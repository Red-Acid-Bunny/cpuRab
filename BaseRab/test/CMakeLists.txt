cmake_minimum_required(VERSION 3.5.0)

project(test)

add_executable(test main.cpp ../base.cpp)
target_link_libraries(test m)
