set(LIBRARY_SOURCES "carlib.cpp")
set(LIBRARY_HEADERS "carlib.h")
set(LIBRARY_INCLUDES "./")

add_library(${CAR_LIBRARY_NAME} SHARED ${LIBRARY_SOURCES} ${LIBRARY_HEADERS})
target_include_directories(${CAR_LIBRARY_NAME} PUBLIC ${LIBRARY_INCLUDES})