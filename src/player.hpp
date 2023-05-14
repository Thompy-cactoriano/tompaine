#include <GLFW/glfw3.h>
#include <string>

class Player{
	private:
		int x, y;
		unsigned int width, height;

		std::string group;

	protected:
		void events(GLFWwindow * window);
		
	public:
		void update();
		
		Player(int x, int y);
};
