#include <ncurses.h>

int main(int argc, char** argv) {
	initscr();
	raw();
	noecho();
	refresh();
	curs_set(0);

	printw("Welcome to my renderer");
	getch();

	refresh();
	endwin();

	return 0;
}
