cmake_minimum_required(VERSION 3.14)

project(Compositor VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)

find_package(Qt5 COMPONENTS Widgets Wayland REQUIRED)

add_executable(Compositor main.cpp)

target_link_libraries(Compositor PRIVATE Qt5::Widgets Qt5::Wayland)

install(TARGETS Compositor DESTINATION bin)
