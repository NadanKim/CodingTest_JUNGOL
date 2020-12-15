#pragma once
#include <iostream>
#include <string>

#include "../../../Base.h"

using std::string;

class BasicStruct06 : public Base
{
private:
	struct Person
	{
		string m_name;
		int m_height;
		float m_weight;
	};

protected:
	void Code() override;
};