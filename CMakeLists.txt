cmake_minimum_required(VERSION 3.13)
project(neon)
set(CMAKE_CXX_STANDARD 17)

set(NEON_SOURCES src/neon.cpp)
set(NEON_INIT_SOURCES src/init.cpp)
set(NEON_COMMIT_SOURCES src/commit.cpp)
set(NEON_CONFIG_SOURCES src/config.cpp)

add_executable(neon ${NEON_SOURCES})
add_executable(neon-init ${NEON_INIT_SOURCES})
add_executable(neon-commit ${NEON_COMMIT_SOURCES})
add_executable(neon-config ${NEON_CONFIG_SOURCES})
