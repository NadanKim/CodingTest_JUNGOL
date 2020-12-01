#pragma once
#include <iostream>

#include "../../../Base.h"

class BasicFunction305 : public Base
{
protected:
	void Code() override;

private:
	void Function(int arr[], int curIdx, int n);
};