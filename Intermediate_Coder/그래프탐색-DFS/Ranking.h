#pragma once
#include <iostream>
#include <vector>
#include <stack>

#include "../../Base.h"

using std::vector;
using std::stack;

class Ranking : public Base
{
private:
	struct Student
	{
		Student() : upCount(0), downCount(0), isChecked(false) {}

		vector<int> betterFriends;

		int upCount;
		int downCount;

		bool isChecked;
	};

	void CheckStudentRanking(vector<Student>& students, int n);
	void ResetCheckedStudents(vector<Student>& students, int n);

protected:
	void Code() override;
};