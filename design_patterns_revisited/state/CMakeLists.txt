set(APP_NAME "state")
set(APP_SOURCES "main.cpp" "battle_turn.cpp" "battle_turn_state.cpp" "input.cpp")
set(APP_HEADERS "battle_turn.h" "battle_turn_state.h" "input.h" "battle_turn.fwd.h" "battle_turn_state.fwd.h")

add_executable(${APP_NAME} ${APP_SOURCES})