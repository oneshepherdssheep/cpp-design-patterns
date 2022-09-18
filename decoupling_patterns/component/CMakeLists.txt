set(APP_NAME "component")
set(APP_SOURCES "main.cpp" "game_engine.cpp" "game_engine_sdl.cpp" "physics_component.cpp" "input_component.cpp" "graphics_component.cpp" "snake.cpp")
set(APP_HEADERS "game_engine.h" "game_engine_sdl.h" "physics_component.h" "input_component.h" "graphics_component.h" "snake.h")

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

add_executable(${APP_NAME} ${APP_SOURCES})
target_link_libraries(${APP_NAME} PUBLIC ${GAME_LIBRARY_NAME} ${SDL2_LIBRARIES})
