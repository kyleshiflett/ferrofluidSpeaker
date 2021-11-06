cmake_minimum_required (VERSION 3.10.2)
project (ferrofluid)

# Required for mraspberry pi toolchain
find_package(Threads REQUIRED)

# Include header file directory into the build
include_directories(include)

# Link shared libraries
set(PROJECT_SHARE_LIBS lib/)
file(GLOB PROJECT_SHARE_LIBS "lib/*.so") 
link_directories(lib)

# Add all .cpp files into the build and add them to SOURCES variable
# SOURCES will now contain all .cpp files required for building
file(GLOB SOURCES "Sources/*.cpp")

# Describe target binary name and dependencies needed to build it
add_executable(ferrofluid.exe ${SOURCES})
target_link_libraries(ferrofluid.exe ${PROJECT_SHARE_LIBS})
