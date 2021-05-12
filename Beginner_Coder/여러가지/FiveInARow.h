#pragma once
#include <iostream>

#include "../../Base.h"

class FiveInARow : public Base
{
private:
	int GetNumberAtCoord(int** arr, int x, int y);
	bool IsAlreadyChecked(int** arr, int x, int y, const int checkVal);
	bool CheckDirection(int** arr, int num, int xBeg, int yBeg,
		int xInc, int yInc, const int checkVal);
	bool IsEdge(int x, int y, int yInc);

protected:
	void Code() override;
};