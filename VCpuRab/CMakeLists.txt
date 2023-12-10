cmake_minimum_required(VERSION 3.5.0)

project(VCpuRab)

include_directories(${PROJECT_SOURCE_DIR})
include_directories(${PROJECT_SOURCE_DIR}/../BaseRab)
add_executable(VCpuRab main.cpp ../BaseRab/base.cpp)
