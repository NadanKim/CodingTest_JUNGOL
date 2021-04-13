#pragma once
#include <iostream>

#include "../../Base.h"

class CountPrimeNumber : public Base
{
private:
	void CalculateAllPrimeNumbers(bool* isPrimeNumberArr);

protected:
	void Code() override;
};