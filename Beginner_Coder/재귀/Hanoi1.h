#pragma once
#include <iostream>

#include "../../Base.h"

class Hanoi1 : public Base
{
private:
	void CheckHanoiTower(int n, int from, int by, int to);

protected:
	void Code() override;
};