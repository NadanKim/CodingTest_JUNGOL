#pragma once
#include <iostream>

#include "../../Base.h"

class NQueen : public Base
{
private:
	int GetNQueenCount(bool* arr[], int n, int y = 0);
	bool CanPutQueen(bool* arr[], int n, int x, int y);

protected:
	void Code() override;
};