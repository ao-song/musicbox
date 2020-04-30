#pragma once

#include "curses.h"

namespace Colors {
	typedef struct {
		short r, g, b;
	} Color;

	Color Blue = { 999, 259, 363 };
	Color Pink = { 66, 246, 238 };
	Color Yellow = { 898, 699, 238 };
	Color Red = { 629, 90, 82 };

	enum {
		ColorBlue = 8,
		ColorPink,
		ColorYellow,
		ColorRed
	};
};

class Box
{
public:
	Box();
	Box(int row, int col);
	virtual ~Box();

private:
	void Init();

private:
	int m_row;
	int m_col;
	enum {
		PinkPair = 1,
		YellowPair,
		RedPair
	};
};

