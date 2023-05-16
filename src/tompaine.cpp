#include <GLFW/glfw3.h>
#include <string>
#include <iostream>

#include "tompaine.hpp"

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
	    while (!glfwWindowShouldClose(this->glfw_window)){
        glClear(GL_COLOR_BUFFER_BIT);
        glfwSwapBuffers(this->glfw_window);
        glfwPollEvents();
    }

}

void tp::draw_rect(tp::Window window, float x,  float y,  float width, float  height, std::array<float, 3> RGB){
	glColor3f(RGB[0], RGB[1], RGB[2]);
	glBegin(GL_QUADS);
		glVertex2f(x - width, y + height);
		glVertex2f(x - width, y - height);
		glVertex2f(x + width, y - height);
		glVertex2f(x + width, y + height);
	glEnd();
}
