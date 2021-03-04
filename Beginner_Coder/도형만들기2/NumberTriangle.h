#pragma once
#include <iostream>

#include "../../Base.h"

class NumberTriangle : public Base
{
private:
	void Case1(int n);
	void Case2(int n);
	void Case3(int n);

protected:
	void Code() override;
};