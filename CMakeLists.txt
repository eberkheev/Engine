cmake_minimum_required(VERSION 3.8)
project(Engine)

set(CMAKE_CXX_STANDARD 17)
set(SOURCE_FILES main.cpp)

add_subdirectory(Engine)
add_subdirectory(Tests)

add_executable(game ${SOURCE_FILES})
target_link_libraries(game Engine)