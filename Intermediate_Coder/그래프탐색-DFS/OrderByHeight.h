#pragma once
#include <iostream>
#include <vector>
#include <stack>

#include "../../Base.h"

using std::vector;
using std::stack;

class OrderByHeight : public Base
{
private:
	struct Student
	{
		Student() : knownCount(0), isChecked(false) {}

		vector<int> forwards;
		int knownCount;
		bool isChecked;
	};

	int GetKnownStudentCount(vector<Student>& students, int n);
	void ResetCheckedStudents(vector<Student>& students, int n);

protected:
	void Code() override;
};