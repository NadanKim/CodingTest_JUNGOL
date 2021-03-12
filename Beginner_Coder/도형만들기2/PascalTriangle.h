#pragma once
#include <iostream>

#include "../../Base.h"

class PascalTriangle : public Base
{
private:
	void Case1(int n);
	void Case2(int n);
	void Case3(int n);

	int** CreateArray(int n);
	void DeleteArray(int** arr, int n);

	void PrintArray(int** arr, int n, bool space = false);

protected:
	void Code() override;
};