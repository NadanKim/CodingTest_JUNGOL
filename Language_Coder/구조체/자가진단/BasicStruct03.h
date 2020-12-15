#pragma once
#include <iostream>
#include <string>

#include "../../../Base.h"

using std::string;

class BasicStruct03 : public Base
{
private:
	struct Student
	{
		string m_name;
		int m_koreanScore;
		int m_englishScore;
	};

protected:
	void Code() override;
};