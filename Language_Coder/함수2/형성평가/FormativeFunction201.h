#pragma once
#include <iostream>

#include "../../../Base.h"

class FormativeFunction201 : public Base
{
protected:
	void Code() override;

private:
	int* Input(int& n);
	void Sort(int n, int arr[]);
	void Print(int n, int arr[]);
};