cmake_minimum_required(VERSION 3.20)
project(service)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 14)

# Find PostgreSQL
find_package(PostgreSQL REQUIRED)

# Add your source files
add_executable(service main.cpp)

# Include directories for PostgreSQL
include_directories(${PostgreSQL_INCLUDE_DIRS})

# Link the libraries
target_link_libraries(service ${PostgreSQL_LIBRARIES})
