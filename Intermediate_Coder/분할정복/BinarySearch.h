#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>

#include "../../Base.h"

class BinarySearch : public Base
{
private:
	int DoSearch(int arr[], int beg, int end, int num);

protected:
	void Code() override;
};