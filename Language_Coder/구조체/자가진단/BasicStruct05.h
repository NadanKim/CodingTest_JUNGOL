#pragma once
#include <iostream>
#include <string>

#include "../../../Base.h"

using std::string;

class BasicStruct05 : public Base
{
private:
	struct Person
	{
		string m_name;
		int m_height;
	};

protected:
	void Code() override;
};