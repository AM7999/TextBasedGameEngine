cmake_minimum_required(VERSION 3.27)
project(TextBasedGameEng)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static")

add_executable(Engine engine.cpp
        filesystem.cpp
        include/filesystem.h)
add_executable(SceneCreation sceneCreation.cpp)
add_executable(base64 base64/b64.cpp base64/b64main.cpp)
