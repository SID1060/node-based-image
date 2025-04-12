cmake_minimum_required(VERSION 3.10)
project(ImageProcessor)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)
find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS} ${CMAKE_SOURCE_DIR}/include)

file(GLOB_RECURSIVE SOURCES "${CMAKE_SOURCE_DIR}/src/*.cpp")
file(GLOB_RECURSIVE HEADERS "${CMAKE_SOURCE_DIR}/include/*.hpp")

add_executable(ImageProcessor
    ${SOURCES}
    ${HEADERS}
)

target_link_libraries(ImageProcessor Qt5::Widgets ${OpenCV_LIBS})

