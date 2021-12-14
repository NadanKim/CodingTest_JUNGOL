#pragma once
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

#include "../../Base.h"

using std::vector;
using std::stack;

class CheckArea : public Base
{
private:
	struct Point
	{
		Point(int x, int y) :x(x), y(y) {}

		int x, y;
	};

	void SetArr(int** arr, int x1, int y1, int x2, int y2);
	int GetAreaCount(int** arr, int n, int m, int x, int y);

protected:
	void Code() override;
};