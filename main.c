#include <stdio.h>
#include <string.h>
#include "curses.h"

int main(int argc, char* argv[]) {
	initscr();
	raw();
	noecho();
	curs_set(0);

	mvprintw(LINES - 1, 0, "Hello World!");
	refresh();

	getch();
	endwin();
	return 0;
}
