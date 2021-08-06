#pragma once
#include <iostream>
#include <set>

#include "../../Base.h"

using std::set;

class Mosaic : public Base
{
private:
	int FindProperSize(set<int> colSet, int paperCnt, int minSize);

protected:
	void Code() override;
};