#pragma once
#include <iostream>
#include <vector>
#include <stack>
#include <set>

#include "../../Base.h"

using std::vector;
using std::stack;
using std::set;

class OrderByHeight : public Base
{
private:
	struct Student
	{
		set<int> from;
		set<int> to;
	};

protected:
	void Code() override;
};