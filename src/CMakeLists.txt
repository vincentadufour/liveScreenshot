cmake_minimum_required(VERSION 3.5)

project(liveScreenshot)

# Find the Qt package
find_package(Qt5 REQUIRED COMPONENTS Widgets)

# Add the executable
add_executable(liveScreenshot main.cpp)

# Link Qt libraries to the executable
target_link_libraries(liveScreenshot Qt5::Widgets)
