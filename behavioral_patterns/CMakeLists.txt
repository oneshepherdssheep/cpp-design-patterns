if(ENABLE_BYTECODE)
    add_subdirectory(bytecode)
endif()

if(ENABLE_SUBCLASS_SANDBOX)
    add_subdirectory(subclass_sandbox)
endif()

if(ENABLE_TYPE_OBJECT)
    add_subdirectory(type_object)
endif()