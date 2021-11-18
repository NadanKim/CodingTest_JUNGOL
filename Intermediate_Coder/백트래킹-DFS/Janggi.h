#pragma once
#include <iostream>

#include "../../Base.h"

class Janggi : public Base
{
private:
	struct Point
	{
		int x, y;

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

	int GetLeastMoveCount(int** visited, int n, int m, Point horse, const Point& soldier, int count = 0);
	bool IsOutOfBoard(const Point& p, int n, int m);

protected:
	void Code() override;
};