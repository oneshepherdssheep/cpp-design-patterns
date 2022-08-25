if(ENABLE_COMPONENT)
    add_subdirectory(component)
endif()

if(ENABLE_EVENT_QUEUE)
    add_subdirectory(event_queue)
endif()

if(ENABLE_SERVICE_LOCATOR)
    add_subdirectory(service_locator)
endif()