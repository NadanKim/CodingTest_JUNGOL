#pragma once
#include <iostream>
#include <stack>

#include "../../Base.h"

using std::stack;

class ColoredPaper3 : public Base
{
private:
	struct Point
	{
		Point(int x, int y, int width) : x(x), y(y), width(width) {}
		Point() : x(0), y(0), width(0) {}

		int x;
		int y;
		int width;
	};

	void FillArr(bool** arr, Point p);
	int CheckArea(bool** arr, stack<Point>& pointStack);
	int GetCurLineWidth(bool** arr, int x, int y);

protected:
	void Code() override;
};