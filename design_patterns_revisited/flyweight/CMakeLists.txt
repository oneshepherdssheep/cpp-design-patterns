set(APP_NAME "flyweight")
set(APP_SOURCES "main.cpp" "map.cpp" "map_user.cpp" "terrain.cpp" "texture.cpp")
set(APP_HEADERS "map.h" "map_user.h" "terrain.h" "terrain.h")

add_executable(${APP_NAME} ${APP_SOURCES})
target_link_libraries(${APP_NAME} PUBLIC ${CAR_LIBRARY_NAME} ${GAME_LIBRARY_NAME})
