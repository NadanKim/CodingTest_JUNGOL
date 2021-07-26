#pragma once
#include <iostream>

#include "../../Base.h"

class SquareRoot : public Base
{
private:
	long long GetSquareRoot(long long num);

protected:
	void Code() override;
};