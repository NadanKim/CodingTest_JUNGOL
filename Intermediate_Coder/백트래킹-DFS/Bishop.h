#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <map>

#include "../../Base.h"

using std::vector;
using std::map;

class Bishop : public Base
{
private:
	enum class Color : int
	{
		White = 0,
		Black = 1
	};

	struct Point
	{
		Point(int x, int y) : x(x), y(y) {}

		int x, y;
	};

	void FindCoordsByColor(int arr[10][10], int n, map<Color, vector<Point>>& coordsMap, Color color);
	int GetMaxBishop(int arr[10][10], int n, map<Color, vector<Point>>& coordsMap);
	int GetMaxByColors(int arr[10][10], int n, vector<Point> coords, Color color, int count = 0);
	bool CheckBishop(int arr[10][10], int n, vector<Point> coords, int x, int y);

protected:
	void Code() override;
};