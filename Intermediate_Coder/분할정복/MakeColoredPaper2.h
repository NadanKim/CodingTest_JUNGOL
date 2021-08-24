#pragma once
#include <iostream>

#include "../../Base.h"

class MakeColoredPaper2 : public Base
{
private:
	void CheckColoredPapers(int** arr, int n, int x, int y);
	bool IsAllSame(int** arr, int n, int x, int y);

protected:
	void Code() override;
};