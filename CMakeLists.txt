cmake_minimum_required(VERSION 3.8)
project(game)

set(CMAKE_CXX_STANDARD 17)
set(SOURCE_FILES main.cpp)

add_subdirectory(engine)
add_subdirectory(engine_tests)

add_executable(game ${SOURCE_FILES})
target_link_libraries(game engine)