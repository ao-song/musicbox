#include "Box.h"

Box::Box() {
	Init();
	getmaxyx(stdscr, m_row, m_col);
}

Box::Box(int row, int col) {
	Init();
	resize_term(row, col);
	getmaxyx(stdscr, m_row, m_col);
}

Box::~Box() {
	endwin();
}

void Box::Init() {
	initscr();
	raw();
	noecho();
	keypad(stdscr, TRUE);

	if (has_colors()) {
		start_color();
		// Set default background to Blue
		init_color(
			COLOR_BLACK,
			Colors::Blue.r,
			Colors::Blue.g,
			Colors::Blue.b
		);
		// Set colors will be used
		init_color(
			Colors::ColorBlue,
			Colors::Blue.r,
			Colors::Blue.g,
			Colors::Blue.b
		);
		init_color(
			Colors::ColorPink,
			Colors::Pink.r,
			Colors::Pink.g,
			Colors::Pink.b
		);
		init_color(
			Colors::ColorYellow,
			Colors::Yellow.r,
			Colors::Yellow.g,
			Colors::Yellow.b
		);
		init_color(
			Colors::ColorRed,
			Colors::Red.r,
			Colors::Red.g,
			Colors::Red.b
		);

		init_pair(PinkPair, Colors::ColorPink, COLOR_BLACK);
		init_pair(YellowPair, Colors::ColorYellow, COLOR_BLACK);
		init_pair(RedPair, Colors::ColorRed, COLOR_BLACK);
	}
}