#pragma once
#include <iostream>
#include <climits>

#include "../../Base.h"

class NumberBeadEasy : public Base
{
private:
	int FindMinTotal(int arr[], int n, int m, int beg, int end);
	int GetGroupCount(int arr[], int n, int max);
	int GetMaxNum(int arr[], int n);
	int GetTotal(int arr[], int n);

protected:
	void Code() override;
};