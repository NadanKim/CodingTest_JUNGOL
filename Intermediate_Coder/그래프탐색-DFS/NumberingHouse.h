#pragma once
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

#include "../../Base.h"

using std::map;
using std::vector;

class NumberingHouse : public Base
{
private:
	int Numbering(int** arr, int n, map<int, int>& result);
	void Counting(int** arr, int n, int x, int y, int number, map<int, int>& result);

protected:
	void Code() override;
};