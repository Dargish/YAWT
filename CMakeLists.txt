cmake_minimum_required (VERSION 3.0)
project(YAWT)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /Wall")

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

set(YAWT_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/YAWT/include")

add_subdirectory(YAWT)
add_subdirectory(Tests)