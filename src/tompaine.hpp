#include <GLFW/glfw3.h>
#include <array>
#include <string>

namespace tp{
	const int key_a = GLFW_KEY_A;
	const int key_b = GLFW_KEY_B;
	const int key_c = GLFW_KEY_C;
	const int key_d = GLFW_KEY_D;
	const int key_e = GLFW_KEY_E;
	const int key_f = GLFW_KEY_F;
	const int key_g = GLFW_KEY_G;
	const int key_h = GLFW_KEY_H;
	const int key_i = GLFW_KEY_I;
	const int key_j = GLFW_KEY_J;
	const int key_k = GLFW_KEY_K;
	const int key_l = GLFW_KEY_L;
	const int key_m = GLFW_KEY_M;
	const int key_n = GLFW_KEY_N;
	const int key_o = GLFW_KEY_O;
	const int key_p = GLFW_KEY_P;
	const int key_q = GLFW_KEY_Q;
	const int key_r = GLFW_KEY_R;
	const int key_s = GLFW_KEY_S;
	const int key_t = GLFW_KEY_T;
	const int key_u = GLFW_KEY_U;
	const int key_v = GLFW_KEY_V;
	const int key_w = GLFW_KEY_W;
	const int key_x = GLFW_KEY_X;
	const int key_y = GLFW_KEY_Y;
	const int key_z = GLFW_KEY_Z;
	const int key_space = GLFW_KEY_SPACE;
	const int key_1 = GLFW_KEY_1;
	const int key_2 = GLFW_KEY_2;
	const int key_3 = GLFW_KEY_3;
	const int key_4 = GLFW_KEY_4;
	const int key_5 = GLFW_KEY_5;
	const int key_6 = GLFW_KEY_6;
	const int key_7 = GLFW_KEY_7;
	const int key_8 = GLFW_KEY_8;
	const int key_9 = GLFW_KEY_9;
	const int key_0 = GLFW_KEY_0;
	const int key_esc = GLFW_KEY_ESCAPE;
	const int key_right = GLFW_KEY_RIGHT;
	const int key_left = GLFW_KEY_LEFT;
	const int key_up = GLFW_KEY_UP;
	const int key_down = GLFW_KEY_DOWN;

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
			GLFWwindow * glfw_window;
		
		public:

			
			unsigned int width, height;
			
			Window(std::string title, unsigned int width, unsigned int height);

			std::array<unsigned int, 2> get_mouse_position();

			void update();
			void draw_rect(Rect rect);

			bool is_closed();
			bool get_key(const int key);
	};

	
	void init();
}
