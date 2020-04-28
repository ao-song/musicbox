#include "Box.h"

Box::Box() {
	Init();
	getmaxyx(stdscr, m_row, m_col);
}

Box::Box(int row, int col) :
	m_row(row),
	m_col(col) {
}

Box::~Box() {
	endwin();
}

bool Box::Init() {
	initscr();
	raw();
	noecho();
	keypad(stdscr, TRUE);

	if (has_colors()) {
		start_color();
	}
}