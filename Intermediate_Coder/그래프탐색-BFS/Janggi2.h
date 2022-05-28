#pragma once
#include <iostream>
#include <queue>

#include "../../Base.h"

using std::queue;

class Janggi2 : public Base
{
private:
	struct Point
	{
		Point() : x(0), y(0), count(0) {}

		int x, y;
		int count;

		bool operator==(const Point& other) const
		{
			return x == other.x && y == other.y;
		}

		friend std::istream& operator>>(std::istream& is, Point& p)
		{
			is >> p.x >> p.y;
			return is;
		}
	};

	int GetLeastMoveCount(int** visited, int n, int m, Point horse, const Point& soldier);
	bool IsOutOfBoard(const Point& p, int n, int m);

protected:
	void Code() override;
};