#pragma once
#include <iostream>

#include "../../Base.h"

class GoodSequence : public Base
{
private:
	bool FindGoodSequence(int arr[], int n, int depth = 0);
	bool IsGoodPatern(int arr[], int idx);

protected:
	void Code() override;
};