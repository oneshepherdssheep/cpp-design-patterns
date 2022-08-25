set(APP_NAME "command")
set(APP_SOURCES "main.cpp" "car_command.cpp" "car_command_handler.cpp")
set(APP_HEADERS "car_command.h" "car_command_handler.h")

add_executable(${APP_NAME} ${APP_SOURCES})
target_link_libraries(${APP_NAME} PUBLIC ${CAR_LIBRARY_NAME})