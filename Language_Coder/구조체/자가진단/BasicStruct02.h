#pragma once
#include <iostream>
#include <string>

#include "../../../Base.h"

using std::string;

class BasicStruct02 : public Base
{
private:
	struct Student
	{
		string m_schoolName;
		string m_grade;
	};

protected:
	void Code() override;
};