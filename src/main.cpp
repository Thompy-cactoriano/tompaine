#include "tompaine.hpp"
#include <iostream>

int main(){
	std::cout << "hello world" << '\n';

	tp::init();

	tp::Rect rect(400, 300, 200, 40, {0.3f, 1.f, 0.f});
	tp::Window window("ola tompaine!", 800, 600);

	while (window.is_closed() == false){
		window.draw_rect(rect);

		window.update();
	}

	return 0;
}
