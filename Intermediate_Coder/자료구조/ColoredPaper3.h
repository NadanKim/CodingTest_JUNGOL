#pragma once
#include <iostream>
#include <stack>
#include <vector>

#include "../../Base.h"

using std::stack;
using std::vector;

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
	int CheckArea(bool** arr, stack<Point>& pointStack,
		vector<Point>& pointVector);
	int GetCurLineWidth(bool** arr, int x, int y);
	bool IsDuplicated(vector<Point>& pointVector, int x, int y, int width);

protected:
	void Code() override;
};