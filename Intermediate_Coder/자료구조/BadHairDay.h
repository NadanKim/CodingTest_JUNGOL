#pragma once
#include <iostream>
#include <stack>

#include "../../Base.h"

using std::stack;

class BadHairDay : public Base
{
private:
	struct CowStack
	{
		CowStack() : count{ 0 } {}

		stack<int> heightStack;
		int count;

		void AddData(int height);
	};

protected:
	void Code() override;
};