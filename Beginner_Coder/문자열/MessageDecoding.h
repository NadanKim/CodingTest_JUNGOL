#pragma once
#include <iostream>
#include <string>
#include <limits>

#include "../../Base.h"

using std::string;

class MessageDecoding : public Base
{
private:
	int CharToIndex(char c);

protected:
	void Code() override;
};