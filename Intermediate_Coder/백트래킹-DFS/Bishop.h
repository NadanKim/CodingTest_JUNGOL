#pragma once
#include <iostream>
#include <algorithm>
#include <vector>

#include "../../Base.h"

using std::vector;

class Bishop : public Base
{
private:
	struct Point
	{
		Point(int x, int y) : x(x), y(y) {}

		int x, y;
	};

	int GetMaxBishop(int arr[10][10], int n, const vector<Point>& coords, int count = 0);
	void CopyArr(int src[10][10], int n, int dst[10][10]);
	void FillBoard(int arr[10][10], int n, const Point& p);

protected:
	void Code() override;
};