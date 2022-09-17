cmake_minimum_required(VERSION 3.20)
project(event_queue)

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

set(EXECUTABLE_NAME "event_queue")
set(EXECUTABLE_SOURCES "main.cpp" "event.cpp" "audio_fx.cpp")
set(EXECUTABLE_HEADERS "event.h" "audio_fx.h")

add_executable(${EXECUTABLE_NAME} ${EXECUTABLE_SOURCES})
target_link_libraries(${EXECUTABLE_NAME} PUBLIC ${GAME_LIBRARY_NAME} Threads::Threads)
