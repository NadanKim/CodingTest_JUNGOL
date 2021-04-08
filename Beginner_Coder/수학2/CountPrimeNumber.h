#pragma once
#include <iostream>
#include <vector>

#include "../../Base.h"

using std::vector;

class CountPrimeNumber : public Base
{
private:
	bool IsPrimeNumber(int number);
	vector<int> CalculateAllPrimeNumbers();

protected:
	void Code() override;
};