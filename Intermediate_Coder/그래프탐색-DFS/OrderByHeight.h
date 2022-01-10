#pragma once
#include <iostream>
#include <vector>
#include <stack>
#include <set>

#include "../../Base.h"

using std::vector;
using std::stack;
using std::set;

class OrderByHeight : public Base
{
private:
	struct Student
	{
		vector<int> behinds;
		vector<int> forwards;
	};

	int GetKnownStudentCount(const vector<Student>& students, int n);
	int GetStudentCountBehind(const vector<Student>& students, int n, int studentNumber);
	int GetStudentCountForward(const vector<Student>& students, int n, int studentNumber);

protected:
	void Code() override;
};