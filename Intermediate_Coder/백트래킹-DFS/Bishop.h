#pragma once
#include <iostream>
#include <algorithm>

#include "../../Base.h"

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

	int GetMaxBishop(bool arr[10][10], int n);
	int GetMaxByColors(bool arr[10][10], int n, Color color, int count = 0);
	void CopyArr(bool arr[10][10], int n, bool newArr[10][10]);
	void ColorBishopRange(bool arr[10][10], int n, int x, int y);

protected:
	void Code() override;
};