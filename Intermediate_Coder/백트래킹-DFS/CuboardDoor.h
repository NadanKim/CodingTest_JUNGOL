#pragma once
#include <iostream>
#include <algorithm>
#include <cmath>

#include "../../Base.h"

class CuboardDoor : public Base
{
private:
	int GetLeastMoveCount(int openDoor1, int openDoor2, int usingDoors[20], int m, int depth = 0);

protected:
	void Code() override;
};