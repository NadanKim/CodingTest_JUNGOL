#pragma once
#include <iostream>
#include <stack>

#include "../../Base.h"

using std::stack;

class Building : public Base
{
private:
	void CalculateVisualBuilding(int arr[], int n);

protected:
	void Code() override;
};