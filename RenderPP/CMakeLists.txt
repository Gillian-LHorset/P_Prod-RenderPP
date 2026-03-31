cmake_minimum_required(VERSION 4.1)
project(RenderPP)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

FetchContent_Declare(
        glfw
        GIT_REPOSITORY https://github.com/glfw/glfw.git
        GIT_TAG        3.3.8
)

FetchContent_MakeAvailable(glfw)

add_executable(RenderPP main.cpp)

target_link_libraries(RenderPP PRIVATE glfw)