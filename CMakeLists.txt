cmake_minimum_required(VERSION 3.10)

project(YetAnotherTable)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCES main.cpp)

find_package(raylib REQUIRED)

# Include directories for Raylib (if it's not installed globally)
# include_directories(/path/to/raylib/include)

add_executable(yat ${SOURCES})

target_link_libraries(yat raylib GL m pthread dl rt X11)