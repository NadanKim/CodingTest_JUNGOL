#pragma once
#include <iostream>
#include <algorithm>

#include "../../Base.h"

class STLSort1 : public Base
{
private:
	void PrintSortedArr(int arr[], int n, int s = 0, int e = 0);

protected:
	void Code() override;
};