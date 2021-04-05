#pragma once
#include <iostream>
#include <vector>

#include "../../Base.h"

using std::vector;

class FindPrimeNumber : public Base
{
private:
	bool IsPrimeNumber(int number);
	void PrintNearestPrimeNumber(int number, vector<int> allPrimeNumbers);
	vector<int> CalculateAllPrimeNumbers();

protected:
	void Code() override;
};