#pragma once
#include <iostream>

#include "../../../Base.h"

class FormativeFunction303 : public Base
{
protected:
	void Code() override;

private:
	void Function(int arr[], int curIdx, int sum, int n, int m);
};