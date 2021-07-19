#pragma once
#include <iostream>

#include "../../Base.h"

class NextCombination : public Base
{
private:
	bool GetNextCombination(int arr[], int numbers[], int n, int k,
		bool& found, int depth = 0);

protected:
	void Code() override;
};