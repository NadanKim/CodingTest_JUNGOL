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

	enum class Direction : int
	{
		Horizontal = 0,
		Vertical = 1
	};

	int GetMaxBishop(bool arr[10][10], int n);
	int GetMaxByColors(bool arr[10][10], int n, Color color, int count = 0);
	int GetMaxByDirection(bool arr[10][10], int n, Color color, Direction direction, int count);
	void CopyArr(bool arr[10][10], int n, bool newArr[10][10]);
	void ColorBishopRange(bool arr[10][10], int n, int x, int y);

protected:
	void Code() override;
};