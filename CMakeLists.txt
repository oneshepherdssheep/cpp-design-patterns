cmake_minimum_required(VERSION 3.20)
project(cpp_design_patterns)

set(CMAKE_CXX_STANDARD 17)

#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
# OPTIONS
#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

# design patterns revisited

option(ENABLE_COMMAND               "Enable Command example"                ON)
option(ENABLE_FLYWEIGHT             "Enable Flyweight example"              ON)
option(ENABLE_OBSERVER              "Enable Observer example"               ON)
option(ENABLE_PROTOTYPE             "Enable Prototype example"              OFF)
option(ENABLE_SINGLETON             "Enable Singleton example"              OFF)
option(ENABLE_STATE                 "Enable State example"                  OFF)

# behavioral patterns

option(ENABLE_BYTECODE              "Enable Bytecode example"               OFF)
option(ENABLE_SUBCLASS_SANDBOX      "Enable Subclass Sandbox example"       OFF)
option(ENABLE_TYPE_OBJECT           "Enable Type Object example"            OFF)

# optimization patterns

option(ENABLE_DATA_LOCALITY         "Enable Data Locality example"          OFF)
option(ENABLE_DIRTY_FLAG            "Enable Dirty Flag example"             OFF)
option(ENABLE_OBJECT_POOL           "Enable Object Pool example"            OFF)
option(ENABLE_SPATIAL_PARTITION     "Enable Spatial Partition example"      OFF)

# sequencing patterns

option(ENABLE_DOUBLE_BUFFER         "Enable Double Buffer example"          OFF)
option(ENABLE_GAME_LOOP             "Enable Game Loop example"              OFF)
option(ENABLE_UPDATE_METHOD         "Enable Update Method example"          OFF)

# decoupling patterns

option(ENABLE_COMPONENT             "Enable Component example"              OFF)
option(ENABLE_EVENT_QUEUE           "Enable Event Queue example"            OFF)
option(ENABLE_SERVICE_LOCATOR       "Enable Service Locator example"        OFF)

#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
# COMMON LIBRARY
#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

option(CAR_LIBRARY "Car library" ON)
option(GAME_LIBRARY "Game library" ON)

set(CAR_LIBRARY_NAME "carlib")
set(GAME_LIBRARY_NAME "gamelib")


#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
# SUB DIRECTORIES
#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

# design patterns revisited

if(ENABLE_COMMAND OR ENABLE_FLYWEIGHT OR ENABLE_OBSERVER OR ENABLE_PROTOTYPE OR ENABLE_SINGLETON OR ENABLE_STATE)
    add_subdirectory(design_patterns_revisited)
endif()

# behavioral patterns

if(ENABLE_BYTECODE OR ENABLE_SUBCLASS_SANDBOX OR ENABLE_TYPE_OBJECT )
    add_subdirectory()
endif()

# optimization patterns

if(ENABLE_DATA_LOCALITY OR ENABLE_DIRTY_FLAG OR ENABLE_OBJECT_POOL OR ENABLE_SPATIAL_PARTITION)
    add_subdirectory()
endif()

# sequencing patterns

if(ENABLE_DOUBLE_BUFFER OR ENABLE_GAME_LOOP OR ENABLE_UPDATE_METHOD)
    add_subdirectory()
endif()

# decoupling patterns

if(ENABLE_COMPONENT OR ENABLE_EVENT_QUEUE OR ENABLE_SERVICE_LOCATOR)
    add_subdirectory()
endif()

# car library
if(CAR_LIBRARY OR GAME_LIBRARY)
    add_subdirectory(libraries)
endif()
