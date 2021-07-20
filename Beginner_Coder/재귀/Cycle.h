#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

#include "../../Base.h"

using std::vector;

class Cycle : public Base
{
private:
	int GetCycleNumberCount(int n, int p, int curNubmer, vector<int>& numbers);

protected:
	void Code() override;
};