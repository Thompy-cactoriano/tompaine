#include <GLFW/glfw3.h>

namespace tp{
	void draw_rect(float x, float y,  float width,  float height, float r, float b, float g);

	class ColorRGB{
		public:
		float r, g, b;

		ColorRGB(float r, float g, float b);
	}
}
