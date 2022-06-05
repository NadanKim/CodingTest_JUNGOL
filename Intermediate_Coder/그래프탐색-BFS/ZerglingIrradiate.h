#pragma once
#include <iostream>
#include <queue>

#include "../../Base.h"

using std::queue;

class ZerglingIrradiate : public Base
{
private:
	struct Point
	{
		int x, y;
		int time;

		Point() : x(0), y(0), time(0) {}
		Point(int x, int y, int time) : x(x), y(y), time(time) {}
	};

	int Irradiate(int** map, Point mapSize, Point atkCoord);
	bool IsInMap(int** map, Point mapSize, int x, int y);
	bool IsZergling(int** map, int x, int y);
	int CountZerglins(int** map, Point mapSize) const;

protected:
	void Code() override;
};