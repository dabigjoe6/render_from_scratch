#include <ncurses.h>

#include "../include/rasterizer.hpp"
#include "../include/vector2.hpp"
#include "../include/defs.hpp"

int main(int argc, char** argv) {
	initscr();
	raw();
	noecho();
	refresh();
	curs_set(0);

	Rasterizer rasterizer(WW, WH);
	Vector2 v1(0, 0);
	Vector2 v2(100, 0);
	Vector2 v3(50, 50);

	rasterizer.rasterizeTriangle(v1, v2, v3);

	getch();

	refresh();
	endwin();

	return 0;
}
