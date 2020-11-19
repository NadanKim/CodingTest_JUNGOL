#pragma once
#include <iostream>

#include "../../../Base.h"

class BasicFunction102 : public Base
{
protected:
	void Code() override;

private:
	void Function(int radius);
};