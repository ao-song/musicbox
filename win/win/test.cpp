#include "curses.h"

int main(int argc, char* argv[])
{
	enum {
		BackColor,
		BoxColor,
		BoxPair
	};

    initscr();
	raw();
	keypad(stdscr, TRUE);

	start_color();
	init_color(BoxColor, 999, 259, 363);
	init_color(BackColor, 66, 246, 238);

	// init_pair(0, COLOR_RED, COLOR_BLACK);
	init_pair(BoxPair, BoxColor, BackColor);


	attron(COLOR_PAIR(BoxPair));
	printw("Col is %d\n", COLS);
	printw("Row is %d\n", LINES);
	refresh();
	attroff(COLOR_PAIR(BoxPair));

	getchar();
	resize_term(44, 170);

	printw("Col is %d\n", COLS);
	printw("Row is %d\n", LINES);
	refresh();
	getchar();

		
	endwin();
	return 0;
}
