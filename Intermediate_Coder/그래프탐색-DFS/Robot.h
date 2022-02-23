#pragma once
#include <iostream>
#include <vector>

#include "../../Base.h"

using std::vector;

class Robot : public Base
{
private:
	struct WayInfo
	{
		WayInfo(int to, int cost) : to(to), cost(cost) {}

		int to;
		int cost;
	};

	int GetMinimumDistance(const vector<vector<WayInfo>>& rooms, bool isChecked[], int n, 
		int r1, int r2, int total = 0, int maximum = 0);

protected:
	void Code() override;
};