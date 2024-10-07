#include <ncurses.h>

#include "../include/rasterizer.hpp"
#include "../include/matrix44.hpp"
#include "../include/vector4.hpp"
#include "../include/vector3.hpp"
#include "../include/vector2.hpp"
//#include "../include/genmath.hpp"

#include "../include/defs.hpp"

float angle = 0;
Rasterizer* rasterizer = nullptr;

bool renderCb() {
	angle += 0.002f;

	Matrix44 transformation;
	transformation.rotate(Vector3(0, 0, 1), angle);

	Vector4 v1 = Vector4(-1, 1, 0, 1);
	Vector4 v2 = Vector4(1, 1, 0, 1);
	Vector4 v3 = Vector4(0, -1, 0, 1);

	v1 = transformation * v1;
	v2 = transformation * v2;
	v3 = transformation * v3;

	rasterizer->clearFrame();	
	rasterizer->rasterizeTriangle(Vector2(v1.x, v1.y), Vector2(v2.x, v2.y), Vector2(v3.x, v3.y));

	return true;
}


int main(int argc, char** argv) {
	initscr();
	noecho();
	refresh();
	curs_set(0);
	cbreak();

	rasterizer = new Rasterizer(WW, WH);
	rasterizer->setRenderCb(renderCb);

	while (true) {
		rasterizer->presentFrame();
		rasterizer->swapFramebuffers();

		refresh();
		erase();
	}
	
	getch();
	clear();
	refresh();

	endwin();

	return 0;
}
