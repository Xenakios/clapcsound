cmake_minimum_required(VERSION 3.15)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)


project(clapcsound VERSION 0.0.0)

include_directories(
    include/csound
)

# add_subdirectory(include/csound)

add_executable(TestingProgram 
    source/main.cpp
)
target_sources(TestingProgram
    PRIVATE
)

target_compile_definitions(TestingProgram PRIVATE _USE_MATH_DEFINES=1)

target_link_libraries(TestingProgram PRIVATE C:/develop/clapcsound/csoundbinaries/csound64.lib)