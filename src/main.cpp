#include <GLFW/glfw3.h>
#include <string>

#include "tompaine.hpp"

int main(void){
		glfwInit();
		tp::Window window(std::string("Ola tompaine"), 800, 600);

		window.update();

		return 0;
}
