#pragma once
#include <iostream>
#include <cmath>

#include "../../Base.h"

class PrimeNumberAndCompositeNumber : public Base
{
private:
	bool IsPrimeNumber(int number);

protected:
	void Code() override;
};