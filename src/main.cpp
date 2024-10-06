#include <ncurses.h>

#include "../include/rasterizer.hpp"
#include "../include/matrix44.hpp"
#include "../include/vector4.hpp"
#include "../include/vector3.hpp"
#include "../include/vector2.hpp"
#include "../include/genmath.hpp"

#include "../include/defs.hpp"

int main(int argc, char** argv) {
	initscr();
	raw();
	noecho();
	refresh();
	curs_set(0);

	Rasterizer rasterizer(WW, WH);

	float angle = 0;

	Matrix44 transformation;
	transformation.scale(Vector3(5, 1, 1));
	transformation.translate(Vector3(10, 0, 20));

	transformation.rotate(Vector3(0, 0, 1), GenMath::toRadians(angle));

	Vector4 v1 = Vector4(10, 10, 1, 1);
	Vector4 v2 = Vector4(20, 10, 1, 1);
	Vector4 v3 = Vector4(15, 20, 1, 1);

	v1 = transformation * v1;
	v2 = transformation * v2;
	v3 = transformation * v3;

	rasterizer.clearFrame();	
	rasterizer.rasterizeTriangle(Vector2(v1.x, v1.y), Vector2(v2.x, v2.y), Vector2(v3.x, v3.y));
	rasterizer.presentFrame(0, 0);
	
	getch();
	clear();
	refresh();

	endwin();

	return 0;
}
