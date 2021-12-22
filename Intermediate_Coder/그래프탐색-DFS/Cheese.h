#pragma once
#include <iostream>
#include <stack>

#include "../../Base.h"

using std::stack;

class Cheese : public Base
{
private:
	struct Point
	{
		int x, y;
		
		Point(int x, int y) : x(x), y(y) {};
	};

	int GetCheeseMeltingCount(char** arr, int n, int m);
	bool IsCheese(char** arr, int n, int m, int x, int y);
	bool IsAir(char** arr, int n, int m, int x, int y);
	void CheckSideCheese(char** arr, int n, int m, int x, int y);
	void MeltCheese(char** arr, int n, int m);
	void RefreshAir(char** arr, int n, int m);
	int CountCheese(char** arr, int n, int m);

protected:
	void Code() override;
};