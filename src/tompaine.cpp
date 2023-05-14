#include <GLFW/glfw3.h>

#include "tompaine.hpp"

void tp::draw_rect( float x,  float y,  float width, float  height, float r, float g, float b){
	glColor3f(r, g, b);
	glBegin(GL_QUADS);
		glVertex2f(x - width, y + height);
		glVertex2f(x - width, y - height);
		glVertex2f(x + width, y - height);
		glVertex2f(x + width, y + height);
	glEnd();
}
