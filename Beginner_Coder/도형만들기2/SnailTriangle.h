#pragma once
#include <iostream>

#include "../../Base.h"

class SnailTriangle : public Base
{
private:
	enum class SnailDirection { RightDown, Left, Up, Done };

	SnailDirection RightDown(int** arr, int n, int& i, int& j, int& num);
	SnailDirection Left(int** arr, int n, int& i, int& j, int& num);
	SnailDirection Up(int** arr, int n, int& i, int& j, int& num);

protected:
	void Code() override;
};