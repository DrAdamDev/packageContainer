cmake_minimum_required(VERSION 3.14)
project(PackageContainer)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add src to the include directories for the project
include_directories(include)

# Add source files
file(GLOB SOURCES "src/*.cpp")

# Define the executable based on the source files
add_executable(PackageContainer ${SOURCES})

# Google Test configuration
enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Add test source files
file(GLOB TEST_SOURCES "tests/*.cpp")

# Define the test executable
add_executable(unitTests ${TEST_SOURCES})

# Link Google Test to the test executable
target_link_libraries(unitTests ${GTEST_LIBRARIES} pthread)
