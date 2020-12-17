#pragma once
#include <iostream>
#include <string>

#include "../../../Base.h"

using std::string;

class FormativeStruct02 : public Base
{
private:
	struct Person
	{
		string m_name;
		string m_phone;
		string m_address;
	};

protected:
	void Code() override;
};