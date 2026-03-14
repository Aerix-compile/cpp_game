cmake_minimum_required(VERSION 3.20)

project(cpp_game LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(engine_boot
    engine/main.cpp
)