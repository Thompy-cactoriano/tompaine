#include <GLFW/glfw3.h>
#include <string>

#include "tompaine.hpp"

int main(void){
		tp::init();

		tp::Rect rect(300, 400, 50, 40, {1.f, 0.f, 0.65f});
		tp::Window window(std::string("Ola tompaine"), 800, 600);

		window.update();

		return 0;
}
