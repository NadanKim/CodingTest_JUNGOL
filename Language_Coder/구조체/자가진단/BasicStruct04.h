#pragma once
#include <iostream>

#include "../../../Base.h"

class BasicStruct04 : public Base
{
private:
	struct Point
	{
		int x, y;
	};

protected:
	void Code() override;
};