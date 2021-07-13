#pragma once
#include <iostream>

#include "../../Base.h"

class RollDice1 : public Base
{
private:
	void RollMode1(int arr[], int n, int depth = 0);
	void RollMode2(int arr[], int n, int depth = 0);
	void RollMode3(int arr[], int n, int depth = 0);

protected:
	void Code() override;
};