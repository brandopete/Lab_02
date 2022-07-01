cmake_minimum_required(VERSION 3.22)
project(Lab_02)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lab_02
        main.cpp NavigationInterface.h Navigation.h graphicsStuff.cpp Navigation.cpp)