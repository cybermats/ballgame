cmake_minimum_required(VERSION 3.14)
project(ballgame)

set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lGL")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lglfw3 -framework OpenGL ")


find_package(OpenGL REQUIRED)
#find_package(GLUT REQUIRED)
find_package(glfw3 3.3 REQUIRED)
include_directories(${OPENGL_INCLUDE_DIRS} ${GLUT_INCLUDE_DIRS})

set(SOURCES
        main.cpp
#        scenestate.cpp scenestate.h sceneobject.cpp sceneobject.h vecmath.h helper.h
        )

add_executable(ballgame ${SOURCES})