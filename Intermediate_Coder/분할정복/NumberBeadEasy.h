#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <climits>

#include "../../Base.h"

class NumberBeadEasy : public Base
{
private:
	int FindMinTotal(int arr[], int n, int totalArr[], int m, 
		int prev = 0, int depth = 0);

protected:
	void Code() override;
};