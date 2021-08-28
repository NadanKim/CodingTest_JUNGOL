#pragma once
#include <iostream>

#include "../../Base.h"

class PrintSquare : public Base
{
private:
	long long SquareModuler(long long x, long long pow);

protected:
	void Code() override;
};