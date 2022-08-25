if(ENABLE_DATA_LOCALITY)
    add_subdirectory(data_locality)
endif()

if(ENABLE_DIRTY_FLAG)
    add_subdirectory(dirty_flag)
endif()

if(ENABLE_OBJECT_POOL)
    add_subdirectory(object_pool)
endif()

if(ENABLE_SPATIAL_PARTITION)
    add_subdirectory(spatial_partition)
endif()
