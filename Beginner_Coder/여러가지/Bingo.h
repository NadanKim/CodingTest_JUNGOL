#pragma once
#include <iostream>
#include <unordered_map>

#include "../../Base.h"

using std::unordered_map;

class Bingo : public Base
{
private:
	struct Point
	{
		Point() : x(0), y(0) {}
		Point(int x, int y) : x(x), y(y) {}

		int x;
		int y;
	};

	bool CheckThreeBingo(unordered_map<int, Point> map, int input,
		int checkBoard[5][5], int& bingoCount);
	bool IsDiagonalToRU(Point& pos);
	bool IsDiagonalToRD(Point& pos);
	bool IsExistsValueToEdge(const int checkBoard[5][5], Point pos, int incX, int incY);
	bool IsEdge(Point& pos);

protected:
	void Code() override;
};