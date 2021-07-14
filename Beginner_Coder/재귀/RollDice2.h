#pragma once
#include <iostream>

#include "../../Base.h"

class RollDice2 : public Base
{
private:
	void AllNumbersSameTotal(int arr[], int n, int m, int depth = 0, int total = 0);

protected:
	void Code() override;
};