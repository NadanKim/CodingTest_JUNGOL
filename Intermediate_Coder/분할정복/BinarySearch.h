#pragma once
#include <iostream>

#include "../../Base.h"

class BinarySearch : public Base
{
private:
	int DoSearch(int arr[], int beg, int end, int num);

protected:
	void Code() override;
};