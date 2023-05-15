#include <GLFW/glfw3.h>
#include <string>

#include "tompaine.hpp"

tp::Window::Window(std::string title, unsigned int width, unsigned int height){
	this->title = title;
	this->width = width;
	this->height = height;

	this->glfw_window = glfwCreateWindow(this->width, this->height, this->title.c_str(), NULL, NULL);
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
