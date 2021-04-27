#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <unordered_map>
#include <vector>
#include <algorithm>

#include "../../Base.h"

using std::string;
using std::stringstream;
using std::unordered_map;
using std::vector;

class CountWords : public Base
{
protected:
	void Code() override;
};