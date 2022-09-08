set(APP_NAME "prototype")
set(APP_SOURCES "main.cpp" "unit.cpp" "spawner.cpp")
set(APP_HEADERS "unit.h" "spawner.h")

add_executable(${APP_NAME} ${APP_SOURCES})
target_link_libraries(${APP_NAME} PUBLIC ${GAME_LIBRARY_NAME})