cmake_minimum_required(VERSION 2.8.8)
project(fakevim_example)

set(AUTOMOC ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt5 COMPONENTS Core REQUIRED)

add_executable(fakevim_example main.cpp editor.cpp editor.h)

target_link_libraries(fakevim_example PRIVATE Qt5::Core Qt5::Widgets fakevim)
