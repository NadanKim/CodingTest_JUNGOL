#pragma once
#include <iostream>

#include "../../../Base.h"

class FormativeStruct04 : public Base
{
private:
	struct Person
	{
		int height;
		float weight;
	};

protected:
	void Code() override;
};