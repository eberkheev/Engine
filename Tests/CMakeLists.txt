project(Tests)

include_directories(libs/googletest/include)

add_subdirectory(libs/googletest)

add_executable(Tests main_test.cpp)

target_link_libraries(Tests gtest gtest_main)
target_link_libraries(Tests Engine)