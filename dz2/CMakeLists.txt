cmake_minimum_required(VERSION 3.20)
project(dz2)

add_library(libsource2 SHARED dir/src/source.c)
add_subdirectory(dir/tests)
add_subdirectory(gtsts)
target_include_directories(libsource2  PUBLIC dir/src dir/include)
include_directories(gtsts/googletest/include)

add_compile_options(--coverage)
add_link_options(--coverage)




add_compile_options(-fsanitize=address)
add_link_options(-fsanitize=address)



include_directories(gtsts/googlemock/include)
include_directories(gtsts/googletest/src)
add_executable(mainexe main.c)

target_link_libraries(mainexe PUBLIC libsource2 m  )

enable_testing()
set(CMAKE_C_STANDARD 99  )


