#pragma once
#include <iostream>

#include "../../Base.h"

class ChooseNumbers : public Base
{
private:
	bool IsLinkedNumber(int arr[], int n, int curIdx, int number, int depth = 0);

protected:
	void Code() override;
};