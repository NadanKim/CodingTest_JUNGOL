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

	int GetMaxBishop(int arr[10][10], int n);
	int GetMaxByColors(int arr[10][10], int n, Color color, int count = 0);
	void CopyArr(int src[10][10], int n, int dst[10][10]);
	void FillBoard(int arr[10][10], int n, int x, int y);

protected:
	void Code() override;
};