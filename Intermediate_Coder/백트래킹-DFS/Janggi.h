#pragma once
#include <iostream>

#include "../../Base.h"

class Janggi : public Base
{
private:
	int GetLeastMoveCount(int xMoveDir[8], int yMoveDir[8],
		int** visited,
		int n, int m, int r, int c, int s, int k, int count = 0);

protected:
	void Code() override;
};