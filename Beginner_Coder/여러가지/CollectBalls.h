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
	int CountToCollect(vector<char>& workingList, int n, char target, int direction);
	void Copy(const vector<char>& srcList, vector<char>& dstList, int n);

protected:
	void Code() override;
};