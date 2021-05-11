#pragma once
#include <iostream>

#include "../../Base.h"

class FiveInARow : public Base
{
private:
	bool CheckRight(int** arr, int i, int checkVal);
	bool CheckDown(int** arr, int i, int checkVal);
	bool CheckRightDown(int** arr, int i, int checkVal);
	
	void PrintResult(int winner, int y, int x);

protected:
	void Code() override;
};