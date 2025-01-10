cmake_minimum_required(VERSION 3.10)

project(MyCppProject)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(raylib REQUIRED)

# # Set the RAYLIB_DIR if Raylib is not in a standard install location
# set(RAYLIB_DIR "/path/to/your/raylib/install")

# find_package(raylib HINTS ${RAYLIB_DIR} REQUIRED) # Search with a hint

# # Debug lib info
# message(STATUS "Raylib found.")
# message(STATUS "  Headers: ${raylib_INCLUDE_DIRS}")
# message(STATUS "  Libraries: ${raylib_LIBRARIES}")
# message(STATUS "  Library Path: ${raylib_LIBRARY_DIRS}")

if (raylib_FOUND)
  add_executable(MyExecutable main.cpp)
  target_link_libraries(MyExecutable raylib)
else()
  message(FATAL_ERROR "Raylib library not found. Please install it.")
endif()

set(CMAKE_BUILD_TYPE "Debug")

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    message(STATUS "Configuring Debug build")
    target_compile_options(MyExecutable PRIVATE -g -O0)
elseif(CMAKE_BUILD_TYPE STREQUAL "Release")
    message(STATUS "Configuring Release build")
    target_compile_options(MyExecutable PRIVATE -O3)
endif()

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall -Wextra")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DNDEBUG")

