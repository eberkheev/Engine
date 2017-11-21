project(engine_tests)

include_directories(libs/googletest/include)

add_subdirectory(libs/googletest)

add_executable(engine_tests main_test.cpp)

target_link_libraries(engine_tests gtest gtest_main)
target_link_libraries(engine_tests engine)