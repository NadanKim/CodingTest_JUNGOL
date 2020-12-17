#pragma once
#include <iostream>

#include "../../../Base.h"

class FormativeStruct03 : public Base
{
private:
	struct Point
	{
		int x, y;
	};

protected:
	void Code() override;
};