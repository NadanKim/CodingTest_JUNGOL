#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

#include "../../Base.h"

using std::vector;

class Sudoku : public Base
{
private:
	struct Point
	{
		Point(int x, int y) : x(x), y(y) {}

		int x, y;
	};

	bool PrintAnswer(int arr[9][9], vector<Point>& coords, size_t depth = 0);
	void PrintBoard(int arr[9][9]);
	bool IsUnique(int arr[9][9], Point p, int num);
	bool CheckHorizontal(int arr[9][9], int y, int num);
	bool CheckVertical(int arr[9][9], int x, int num);
	bool CheckSquare(int arr[9][9], int x, int y, int num);

protected:
	void Code() override;
};