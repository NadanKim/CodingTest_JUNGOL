#pragma once
#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>

#include "../../Base.h"

using std::vector;

class CollectBalls : public Base
{
private:
	int CountToCollect(vector<char> workingList, char target, int direction);

protected:
	void Code() override;
};