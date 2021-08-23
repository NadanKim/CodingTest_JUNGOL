#pragma once
#include <iostream>

#include "../../Base.h"

class MakeColoredPaper : public Base
{
private:
	void CountColoredPapers(int** arr, int n, int x, int y, int* cntArr);
	bool IsAllSame(int** arr, int n, int x, int y);

protected:
	void Code() override;
};