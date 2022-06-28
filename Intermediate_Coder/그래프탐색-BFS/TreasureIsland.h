#pragma once
#include <iostream>
#include <queue>
#include <vector>

#include "../../Base.h"

using std::queue;
using std::vector;

class TreasureIsland : public Base
{
private:
	struct Point
	{
		int x, y;
		int dist;

		Point() : x(0), y(0), dist(0) {}
		Point(int x, int y, int dist = 0) : x(x), y(y), dist(dist) {}
	};

	int GetShortestWayToTreasure(char map[50][50], int x, int y);
	int GetShortestWayBetweenTwoPosition(char map[50][50], int x, int y, const Point& p1, const Point& p2);
	void FindPossiblePosition(char map[50][50], int x, int y, vector<Point>& possibleList);
	bool IsEdgeLand(char map[50][50], int x, int y, int tx, int ty);

protected:
	void Code() override;
};