cmake_minimum_required(VERSION 3.20)
project(dz2v2)

add_library(libsource2 SHARED dir/src/source2.c)
add_subdirectory(dir/tests)
add_subdirectory(gtest)
target_include_directories(libsource2  PUBLIC dir/src dir/include)
include_directories(gtest/googletest/include)

add_compile_options(--coverage)
add_link_options(--coverage)




add_compile_options(-fsanitize=address)
add_link_options(-fsanitize=address)
include_directories(gtest/googlemock/include)
include_directories(gtest/googletest/src)
add_executable(mainexe main.c)

target_link_libraries(mainexe PUBLIC libsource2 m  )

enable_testing()
set(CMAKE_C_STANDARD 99  )


