#pragma once
#include <iostream>
#include <stack>

#include "../../Base.h"

using std::stack;

class Tower : public Base
{
private:
	void PrintHitTowers(int arr[], int n);

protected:
	void Code() override;
};