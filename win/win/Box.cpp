#include "curses.h"
#include "Box.h"

Box::Box() {
	initscr();
	raw();
	noecho();
	keypad(stdscr, TRUE);
}

Box::~Box() {
	endwin();
}