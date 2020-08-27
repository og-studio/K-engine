cmake_minimum_required(VERSION 3.16)
project(Kengine)
set(CMAKE_CXX_STANDARD 20)

#|-----------|
#|   Version |
#|-----------|
set(Kengine_VERSION_MAJOR 0)
set(Kengine_VERSION_MINOR 1)
set(Kengine_VERSION_PATCH 2)

#|--------
#|Library|
#|-------/
find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})



#|--------
#|Folders|
#|-------/
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake_modules/")


add_executable(
    ${PROJECT_NAME} 
    src/main.cpp
    src/Engine/Engine.cpp
    src/Engine/Engine.h
    src/Engine/Settings.cpp
    src/Engine/Settings.h
    src/Engine/ErrorHandler/Errors.h
    src/Engine/ErrorHandler/ErrorHandler.cpp
    src/Engine/ErrorHandler/ErrorHandler.h
    src/Engine/projects/project.h
    src/Engine/GUI/SDLUtils.hpp
    src/Engine/GUI/SDLUtils.cpp
)

target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARIES})

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY bin/)