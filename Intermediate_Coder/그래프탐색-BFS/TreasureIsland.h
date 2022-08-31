#pragma once
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

#include "../../Base.h"

using std::queue;
using std::vector;

class TreasureIsland : public Base
{
private:
	struct Point
	{
		int x, y;
		int cost;

		Point() : x(0), y(0), cost(0) {}
		Point(int x, int y, int cost = 0) : x(x), y(y), cost(cost) {}
	};

	int GetShortestWayToTreasure();
	int GetCostFromPosition(const Point& startPosition);

protected:
	void Code() override;

private:
	const int LIMITED{ 9'999 };

	int xDir[4]{ 0, 0, -1, 1 };
	int yDir[4]{ -1, 1, 0, 0 };

	int n{}, m{};
	char map[50][50]{};
	int costMap[50][50]{};
};