set(APP_NAME "component")
set(APP_SOURCES "main.cpp" "game_engine.cpp" "game_engine_sdl.cpp")
set(APP_HEADERS "")

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

add_executable(${APP_NAME} ${APP_SOURCES})
target_link_libraries(${APP_NAME} PUBLIC ${GAME_LIBRARY_NAME} ${SDL2_LIBRARIES})
