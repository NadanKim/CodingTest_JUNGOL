#pragma once
#include <iostream>
#include <algorithm>

#include "../../Base.h"

class NQueen : public Base
{
private:
	int GetNQueenCount(bool arr[][13], int n, int y = 0);
	void ColorQueenArea(bool arr[][13], int n, int x, int y);

protected:
	void Code() override;
};