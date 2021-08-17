#pragma once
#include <iostream>
#include <algorithm>
#include <string>

#include "../../Base.h"

using std::string;

class STLSort3 : public Base
{
private:
	struct Student
	{
		string name;
		int score;

		bool operator <(const Student& other);
		friend std::istream& operator >>(std::istream& is, Student& student)
		{
			is >> student.name >> student.score;
			return is;
		}
		friend std::ostream& operator <<(std::ostream& os, const Student& student)
		{
			os << student.name << ' ' << student.score;
			return os;
		}
	};

	void SortDesc(Student arr[], int n);

protected:
	void Code() override;
};