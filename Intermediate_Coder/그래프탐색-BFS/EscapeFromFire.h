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
		int minute;

		Point() : x(0), y(0), minute(0) {}
		Point(int x, int y, int day = 0) : x(x), y(y), minute(day) {}
	};

	void SimulateFire();
	int CalculateEscapeMinutes();

	bool PossibleToFire(int x, int y);
	bool PossibleToGo(int x, int y, int curMinute);

	bool IsInMap(int x, int y);
	bool IsArrive(int x, int y);

protected:
	void Code() override;

private:
	const int xDir[4]{ 0, 0, -1, 1 };
	const int yDir[4]{ -1, 1, 0, 0 };

	const int EMPTY{ 999'999'999 };
	const int BLOCK{ -1 };

	int r{}, c{};
	char map[50][50]{};
	int fireSimulatedMap[50][50]{};

	queue<Point> q;
	Point startPos;
	Point endPos;
};