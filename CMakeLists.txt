cmake_minimum_required(VERSION 3.0.0)

project(tompaine VERSION 0.0.1)

cmake_policy(SET CMP0072 NEW)

find_package(OpenGL REQUIRED)

add_executable(tompaine src/main.cpp)

target_link_libraries(tompaine
	glfw
	OpenGL::GL)
