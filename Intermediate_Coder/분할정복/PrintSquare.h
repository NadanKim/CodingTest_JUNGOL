#pragma once
#include <iostream>

#include "../../Base.h"

class PrintSquare : public Base
{
private:
	long long PrintSquareModuler(long long x, long long pow, long long result = 1);

protected:
	void Code() override;
};