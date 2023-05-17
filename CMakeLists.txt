cmake_minimum_required(VERSION 3.10)

project(tompaine VERSION 0.0.2 LANGUAGES CXX)

set(CMAKE_CXX_COMPILER g++)
set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_CROSSCOMPILING true)
set(CMAKE_SYSTEM_NAME Windows)
set(CMAKE_SYSTEM_VERSION 10.0)
set(CMAKE_SYSTEM_PROCESSOR arm)

cmake_policy(SET CMP0072 NEW)

find_package(OpenGL REQUIRED)

add_executable(tompaine 
	src/main.cpp
	src/tompaine.hpp
	src/tompaine.cpp)

target_link_libraries(tompaine
	#${CMAKE_SOURCE_DIR}/libtompaine.a
	glfw
	OpenGL::GL
)
