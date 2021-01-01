#pragma once
#include <iostream>
#include <string>
#include <iomanip>

#include "../../../Base.h"

using std::string;

class BasicFileProcess03 : public Base
{
private:
	struct Student
	{
		string m_name;
		int m_score{};
		int m_rank{};
		int m_number{};
	};

protected:
	void Code() override;
};