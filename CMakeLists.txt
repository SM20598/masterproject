cmake_minimum_required(VERSION 3.4...3.18)
project(motionlib)

set(CMAKE_CXX_STANDARD 17)

file(GLOB FUNC_SOURCES "functions/*.cpp")
add_library(funcs STATIC ${FUNC_SOURCES})
set_target_properties(funcs PROPERTIES POSITION_INDEPENDENT_CODE ON)


add_subdirectory(pybind11)
pybind11_add_module(motionlib src/binder.cpp)
target_link_libraries(motionlib PRIVATE funcs)

