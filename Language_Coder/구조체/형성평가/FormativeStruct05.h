#pragma once
#include <iostream>
#include <string>

#include "../../../Base.h"

using std::string;

class FormativeStruct05 : public Base
{
private:
	struct Person
	{
		string m_name;
		int m_score1;
		int m_score2;
		int m_score3;
		int m_sumOfScore;
	};

protected:
	void Code() override;
};