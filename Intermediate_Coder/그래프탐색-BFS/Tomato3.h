#pragma once
#include <iostream>
#include <queue>

#include "../../Base.h"

using std::queue;

class Tomato3 : public Base
{
private:
	struct Point
	{
		int x, y;
		int day;

		Point() : x(0), y(0), day(0) {}
		Point(int x, int y, int day = 0) : x(x), y(y), day(day) {}
	};

	int CalculateDoneDay();
	bool IsInBox(int x, int y);
	bool IsAllDone();

protected:
	void Code() override;

private:
	const int xDir[4]{ 0, 0, -1, 1 };
	const int yDir[4]{ -1, 1, 0, 0 };

	int n{}, m{};
	short box[1000][1000]{};

	queue<Point> q;
};