#pragma once
#include <iostream>
#include <queue>
#include <vector>

#include "../../Base.h"

using std::queue;
using std::vector;

class EscapeFromFire : public Base
{
private:
	struct Point
	{
		int x, y;
		int turn;

		Point() : x(0), y(0), turn(0) {}
		Point(int x, int y, int turn = 0) : x(x), y(y), turn(turn) {}
	};

	void SimulateFire();
	int CalculateEscapeTime();

	bool PossibleToGo(int x, int y, int turn);

	bool IsInMap(int x, int y);
	bool IsArrive(int x, int y);

protected:
	void Code() override;

private:
	const int xDir[4]{ 0, 0, -1, 1 };
	const int yDir[4]{ -1, 1, 0, 0 };

	const int EMPTY{ 999'999'999 };
	const int BLOCK{ 0 };

	int r{}, c{};
	int map[50][50]{};

	queue<Point> q;
	Point startPos;
	Point endPos;
};