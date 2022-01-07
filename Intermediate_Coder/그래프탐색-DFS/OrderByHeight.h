#pragma once
#include <iostream>
#include <vector>

#include "../../Base.h"

using std::vector;

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