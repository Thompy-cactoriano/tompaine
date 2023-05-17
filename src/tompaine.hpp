#include <GLFW/glfw3.h>
#include <array>
#include <string>

namespace tp{
	class Rect{
		private:	
			std::array<float, 3> RGB;

		public:
			int x, y;
			unsigned int width, height;

			Rect(int x, int y, unsigned int width, unsigned int height, std::array<float, 3> RGB);
	
			std::array<float, 3> get_color();
	};

	class Window{
		private:
			std::string title;
	
		public:
			GLFWwindow * glfw_window;

			unsigned int width, height;
			
			Window(std::string title, unsigned int width, unsigned int height);

			void update();
			void draw_rect(Rect rect);

			bool is_closed();
	};

	
	void init();
}
