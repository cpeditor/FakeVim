cmake_minimum_required(VERSION 3.12)
project(fakevim VERSION 0.0.1)

# Public headers
# set(${bin}_public_headers
#    fakevim/fakevimactions.h
#    fakevim/fakevimhandler.h
#    )

set(AUTORCC ON)
set(AUTOUIC ON)
set(AUTORCC ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt5 COMPONENTS Core REQUIRED)

add_library(fakevim
	fakevim/fakevimactions.cpp
	fakevim/fakevimhandler.cpp
    fakevim/utils/hostosinfo.cpp
    fakevim/utils/osspecificaspects.h
	fakevim/utils/qtcassert.cpp

	fakevim/fakevimactions.h
	fakevim/fakevimhandler.h
	)

include_directories("fakevim")

# Source files common for all platforms
# set(${bin}_pkg_config_requires)

# include(cmake/cxx11.cmake)
# include(cmake/library.cmake)
# include(cmake/qt.cmake)
# include(cmake/pkg-config.cmake)

add_definitions( -DQTCREATOR_UTILS_STATIC_LIB  )

# Files with Q_OBJECT macros to pass to moc utility
target_link_libraries(fakevim PRIVATE Qt5::Widgets)
target_link_libraries(fakevim PRIVATE Qt5::Core)
# qt5_wrap_cpp(${bin}_mocced "fakevim/fakevimhandler.h")
# Generate moc file with correct file name.
# qt5_generate_moc("fakevim/fakevimhandler.cpp" "fakevimhandler.moc")
# target_sources(${bin} PRIVATE ${${bin}_mocced} "fakevimhandler.moc")
option(BUILD_EXAMPLE "Build example")

if(BUILD_EXAMPLE)
	add_subdirectory(example)
endif()
