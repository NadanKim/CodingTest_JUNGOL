#pragma once
#include <iostream>
#include <stack>

#include "../../Base.h"

using std::stack;

class Histogram : public Base
{
private:
	long long GetHistogramMaxArea(int arr[], int n);
	int GetLeftIdx(int arr[], int n, int idx);

protected:
	void Code() override;
};