cmake_minimum_required(VERSION 3.13)
project(neon)
set(CMAKE_CXX_STANDARD 17)

set(NEON_SOURCES src/neon.cpp)
set(NEON_INIT_SOURCES src/init.cpp)

add_executable(neon ${NEON_SOURCES})
add_executable(init-repo ${NEON_INIT_SOURCES})
