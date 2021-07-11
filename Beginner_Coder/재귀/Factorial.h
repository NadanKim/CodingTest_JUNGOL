#pragma once
#include <iostream>

#include "../../Base.h"

class Factorial : public Base
{
private:
	long long GetFactorial(int n);

protected:
	void Code() override;
};