#pragma once
#include <iostream>

#include "../../Base.h"

class ColoredPaper3 : public Base
{
private:
	struct Point
	{
		int x;
		int y;
	};

	void FillArr(bool** arr, int x, int y);
	int CheckArea(bool** arr, int x, int y);
	int GetCurLineWidth(bool** arr, int x, int y);

protected:
	void Code() override;
};