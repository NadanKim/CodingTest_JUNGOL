#pragma once
#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <algorithm>

#include "../../Base.h"

using std::map;
using std::vector;
using std::queue;

class NumberingHouse : public Base
{
private:
	struct Point
	{
		Point(int x, int y) :x(x), y(y) {}

		int x, y;
	};

	int Numbering(int** arr, int n, map<int, int>& result);
	void Counting(int** arr, int n, int x, int y, int number, map<int, int>& result);

protected:
	void Code() override;
};