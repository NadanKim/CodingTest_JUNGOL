#pragma once
#include <iostream>

#include "../../Base.h"

class FindPrimeNumber : public Base
{
private:
	bool IsPrimeNumber(int number);
	void PrintNearestPrimeNumber(int number);

protected:
	void Code() override;
};