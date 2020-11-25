#pragma once
#include <iostream>

#include "../../../Base.h"

#define POW2(var) (var) * (var)
#define POW3(var) (var) * (var) * (var)

#define Function1(var1, var2) '(' << var1 << " - " << var2 << ") ^ 2 = " << POW2(var1 - var2)
#define Function2(var1, var2) '(' << var1 << " + " << var2 << ") ^ 3 = " << POW3(var1 + var2)

class BasicFunction208 : public Base
{
protected:
	void Code() override;
};