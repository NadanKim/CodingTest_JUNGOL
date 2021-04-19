#pragma once
#include <iostream>
#include <string>

#include "../../Base.h"

using std::string;

class ConvertFromTo : public Base
{
private:
	long long ToDecimal(string n, int from);
	string FromDecimal(long long n, int to);

protected:
	void Code() override;
};