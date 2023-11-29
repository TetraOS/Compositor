cmake_minimum_required(VERSION 3.15)

project(your_compositor VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(Qt5 5.15 COMPONENTS Core Widgets Gui)

set(PROJECT_SOURCES
    main.cpp
    src/core/config.cpp
    src/core/compositor.cpp
    # Add other source files here
)

set(PROJECT_HEADERS
    include/your_compositor/config.h
    include/your_compositor/compositor.h
    # Add other header files here
)

add_executable(${PROJECT_NAME} ${PROJECT_SOURCES} ${PROJECT_HEADERS})

target_link_libraries(${PROJECT_NAME} PRIVATE Qt5::Core Qt5::Widgets Qt5::Gui)

set(CMAKE_BUILD_TYPE Release)
set(CMAKE_INSTALL_PREFIX /usr/local)

install(TARGETS ${PROJECT_NAME} DESTINATION bin)

if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/doc)
    install(DIRECTORY doc DESTINATION share/doc/${PROJECT_NAME})
endif()
