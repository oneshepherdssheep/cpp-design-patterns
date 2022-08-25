cmake_minimum_required(VERSION 3.23)
project(cpp_design_patterns)

set(CMAKE_CXX_STANDARD 17)

#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
# OPTIONS
#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

option(DP_COMMAND "Command design pattern example implementation" ON)
option(DP_FLYWEIGHT "Flyweight design pattern example implementation" OFF)
option(DP_OBSERVER "Observer design pattern example implementation" OFF)
option(DP_PROTOTYPE "Prototype design pattern example implementation" OFF)
option(DP_SINGLETON "Singleton design pattern example implementation" OFF)
option(DP_STATE "State design pattern example implementation" OFF)

#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
# COMMON LIBRARY
#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~



#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
# EXECUTABLE
#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

if(DP_COMMAND)
    add_subdirectory(command)
endif()

if(DP_FLYWEIGHT)
    add_subdirectory(flyweight)
endif()

if(DP_OBSERVER)
    add_subdirectory(observer)
endif()

if(DP_PROTOTYPE)
    add_subdirectory(prototype)
endif()

if(DP_SINGLETON)
    add_subdirectory(singleton)
endif()

if(DP_STATE)
    add_subdirectory(state)
endif()
