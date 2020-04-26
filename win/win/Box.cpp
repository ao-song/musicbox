#include "curses.h"

int main()
{
	initscr();
	printw("Hello World !!!");
	refresh();
	getchar();
	endwin();
	return 0;
}