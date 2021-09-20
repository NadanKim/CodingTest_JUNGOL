#pragma once
#include <iostream>
#include <algorithm>

#include "../../Base.h"

class HamiltonPath : public Base
{
private:
	int GetLeastCost(short arr[][12], int n, int locIdx = 0, int cost = 0, int depth = 0);
	void BlockPrevLocation(short arr[][12], int n, int locIdx);
	void BlockNextLocation(short arr[][12], int n, int locIdx);

protected:
	void Code() override;
};