#pragma once
#include <iostream>
#include <climits>

#include "../../Base.h"

class CollectBalls : public Base
{
private:
	int CountToCollect(const char* arr, int n, char target, int direction);

protected:
	void Code() override;
};