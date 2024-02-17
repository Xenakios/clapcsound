cmake_minimum_required(VERSION 3.15)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)


project(clapcsound VERSION 0.0.0)

include_directories(
    include/csound
    /Library/Frameworks/CsoundLib64.framework/Versions/6.0/Headers
)

# add_subdirectory(include/csound)

add_executable(TestingProgram 
    source/main.cpp
)

target_compile_definitions(TestingProgram PRIVATE _USE_MATH_DEFINES=1)

IF(APPLE)
   #SET(GUI_TYPE MACOSX_BUNDLE)
   INCLUDE_DIRECTORIES ( /Developer/Headers/FlatCarbon )
   FIND_LIBRARY(CSOUND_LIBRARY CsoundLib64)
   
   MARK_AS_ADVANCED (CSOUND_LIBRARY
                     )
   SET(EXTRA_LIBS ${CSOUND_LIBRARY})
ENDIF (APPLE)

if(WIN32)
    SET(EXTRA_LIBS C:/develop/clapcsound/csoundbinaries/csound64.lib)
ENDIF(WIN32)

TARGET_LINK_LIBRARIES( TestingProgram ${EXTRA_LIBS} )
