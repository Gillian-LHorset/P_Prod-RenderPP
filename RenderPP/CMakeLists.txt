cmake_minimum_required(VERSION 4.1)
project(RenderPP)

set(CMAKE_CXX_STANDARD 20)

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(GLFW_INSTALL OFF CACHE BOOL "" FORCE)

add_subdirectory(lib/glfw-3.4)

add_executable(RenderPP main.cpp)

target_link_libraries(RenderPP PRIVATE glfw)