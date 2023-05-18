#include "tompaine.hpp"
#include <array>
#include <iostream>

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

bool tp::Window::get_key(const int key){
	if (glfwGetKey(this->glfw_window, key) == GLFW_PRESS){
		return true;
	}

	return false;
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

std::array<unsigned int, 2> tp::Window::get_mouse_position(){
	double xpos, ypos;
	glfwGetCursorPos(this->glfw_window, &xpos, &ypos);
	
	std::array<unsigned int, 2> mouse_pos = {(unsigned int)xpos, (unsigned int)ypos};
	return mouse_pos;
}
