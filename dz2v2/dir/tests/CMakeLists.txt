cmake_minimum_required(VERSION 3.20)
project(test)


include_directories(gtest/googletest/include)
include_directories(gtest/googlemock/include)
include_directories(gtest/googletest/src)
add_executable(test_main src/test_lib.cpp)
target_link_libraries(test_main PUBLIC libsource2 m gtest gmock gtest_main)
add_test(NAME test1 COMMAND test_main)
enable_testing()



set(CMAKE_C_STANDARD 99)