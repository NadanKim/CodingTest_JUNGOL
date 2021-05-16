#pragma once
#include <iostream>

#include "../../Base.h"

class NumberBaseball : public Base
{
private:
	void CheckNumber(bool arr[10][10][10], int num, int s, int b);
	bool Exsists(int arr[3], int num);
	int GetNumberCount(bool arr[10][10][10]);

protected:
	void Code() override;
};