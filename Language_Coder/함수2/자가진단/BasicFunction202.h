#pragma once
#include <iostream>

#include "../../../Base.h"

class BasicFunction202 : public Base
{
protected:
	void Code() override;

private:
	void Function(int month, int day);
};