set(APP_NAME "observer")
set(APP_SOURCES "main.cpp" "observer.cpp" "subject.cpp" "observer_node.cpp" "observer_node_pool.cpp")
set(APP_HEADERS "observer.h" "subject.h" "observer_node.h" "observer_node_pool.h")

add_executable(${APP_NAME} ${APP_SOURCES} ${APP_HEADERS})
target_link_libraries(${APP_NAME} PUBLIC ${CAR_LIB})