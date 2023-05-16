#include <GLFW/glfw3.h>
#include <array>
#include <string>

namespace tp{
	class Window{
		private:
			std::string title;
	
		public:
			GLFWwindow * glfw_window;

			unsigned int width, height;
			
			Window(std::string title, unsigned int width, unsigned int height);

			void update();
	};

	void draw_rect(Window window,float x, float y,  float width,  float height, std::array<float, 3> RGB);
}
