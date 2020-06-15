cmake_minimum_required(VERSION 3.16)
project(Kengine)
set(CMAKE_CXX_STANDARD 17)

#|-----------|
#|   Version |
#|-----------|
set(Kengine_VERSION_MAJOR 0)
set(Kengine_VERSION_MINOR 0)
set(Kengine_VERSION_PATCH 1)

#|--------
#|Library|
#|-------/
#add_library(



#|--------
#|Folders|
#|-------/



add_executable(Kengine src/main.cpp src/Engine/Engine.cpp, src/Engine/Engine.h)




set(CMAKE_RUNTIME_OUTPUT_DIRECTORY bin/)