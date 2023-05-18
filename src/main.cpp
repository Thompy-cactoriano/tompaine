#include "tompaine.hpp"
#include <iostream>

int main(){
	std::cout << "hello world" << '\n';

	tp::init();

	tp::Rect rect(400, 300, 200, 40, {0.3f, 1.f, 0.f});
	tp::Window window("ola tompaine!", 800, 600);

	while (window.is_closed() == false){
		window.draw_rect(rect);

		std::cout << "mouse_pos_x: " << window.get_mouse_position()[0] << '\n';
		std::cout << "mouse_pos_y: " << window.get_mouse_position()[1] << '\n';

		if (window.get_key(tp::key_a) == true){
			std::cout << "oi Azão!" << '\n';
		}

		window.update();
	}

	return 0;
}
