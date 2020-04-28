#pragma once

#include "curses.h"

class Box
{
public:
	Box();
	Box(int row, int col);
	virtual ~Box();

private:
	bool Init();

private:
	int m_row;
	int m_col;
};

