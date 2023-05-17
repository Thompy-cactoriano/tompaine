#include <GLFW/glfw3.h>
#include <array>
#include <string>
#include <iostream>

#include "tompaine.hpp"

/*--->> classes <<---*/
tp::Window::Window(std::string title, unsigned int width, unsigned int height){
	this->title = title;
	this->width = width;
	this->height = height;

	//tls->posix.allocated == GLFW_TRUE;

	this->glfw_window = glfwCreateWindow(this->width, this->height, this->title.c_str(), NULL, NULL);
	glfwMakeContextCurrent(this->glfw_window);

	if (not glfwInit()){
		std::cout << "ouve um erro na inicialização do glfw." << '\n';
		exit(-1);
	}

	if (not this->glfw_window){
		std::cout << "ouve um erro na criação da janela." << '\n';
		exit(-1);
	}
}

void tp::Window::update(){
  glfwSwapBuffers(this->glfw_window);
  glfwPollEvents();   
}

bool tp::Window::is_closed(){
  glClear(GL_COLOR_BUFFER_BIT);
	return glfwWindowShouldClose(this->glfw_window);
}

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

void tp::Window::draw_rect(Rect rect){
  glColor3f(rect.get_color()[0], rect.get_color()[1], rect.get_color()[2]);

	float x = (float)rect.x / this->width;
	float y = (float)rect.y / this->height;

	x -= 0.5f;
	y -= 0.5f;

	float width = (float)rect.width / this->width;
	float height = (float)rect.height / this->height;

	glBegin(GL_QUADS);
		glVertex2f(x - width, y   + height);
		glVertex2f(x - width, y - height);
		glVertex2f(x + width, y - height);
		glVertex2f(x + width, y + height);
	glEnd();
}
