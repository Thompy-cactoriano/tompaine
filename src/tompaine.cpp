#include <GLFW/glfw3.h>
#include <array>
#include <string>
#include <iostream>

#include "tompaine.hpp"

/*--->> classes <<---*/

tp::Rect::Rect(int x, int y, unsigned int width, unsigned int height, std::array<float, 3> RGB){
	this->x = x;
	this->y = y;
	this->width = width;
	this->height = height;

	this->RGB = RGB;
}

std::array<float, 3> tp::Rect::get_color(){
	return this->RGB;
}

void tp::init(){
	glfwInit();
}
