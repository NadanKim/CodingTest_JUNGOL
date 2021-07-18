#pragma once
#include <iostream>

#include "../../Base.h"

class Lotto : public Base
{
private:
	void FindLottoNumbers(int arr[], int k, int numbers[], int depth = 0);

protected:
	void Code() override;
};