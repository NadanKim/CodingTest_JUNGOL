#pragma once
#include <iostream>

#include "../../Base.h"

class SquareRoot : public Base
{
private:
	unsigned long long GetSquareRoot(unsigned long long num);

protected:
	void Code() override;
};