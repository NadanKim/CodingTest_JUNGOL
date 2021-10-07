#pragma once
#include <iostream>
#include <algorithm>

#include "../../Base.h"

class Bishop : public Base
{
private:
	int GetMaxBishop(int arr[10][10], int n, int count = 0);
	void CopyArr(int src[10][10], int n, int dst[10][10]);
	void FillBoard(int arr[10][10], int n, int x, int y);

protected:
	void Code() override;
};