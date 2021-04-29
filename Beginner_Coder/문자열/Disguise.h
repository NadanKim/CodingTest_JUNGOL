#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

#include "../../Base.h"

using std::string;
using std::vector;
using std::unordered_map;

class Disguise : public Base
{
private:
	void DoDisguise();

protected:
	void Code() override;
};