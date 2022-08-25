if(ENABLE_COMMAND)
    add_subdirectory(command)
endif()

if(ENABLE_FLYWEIGHT)
    add_subdirectory(flyweight)
endif()

if(ENABLE_OBSERVER)
    add_subdirectory(observer)
endif()

if(ENABLE_PROTOTYPE)
    add_subdirectory(prototype)
endif()

if(ENABLE_SINGLETON)
    add_subdirectory(singleton)
endif()

if(ENABLE_STATE)
    add_subdirectory(state)
endif()