cmake_minimum_required(VERSION 3.17)
project(Mercury-Shelves-Manager)

set(CMAKE_CXX_STANDARD 14)

add_executable(Mercury-Shelves-Manager src/main.cpp src/arduino/serial.cpp src/arduino/serial.h)