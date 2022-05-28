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
		vector<int> worseFriends;

		int upCount;
		int downCount;

		bool isChecked;
	};

	void CheckStudentRanking(vector<Student>& students, int n, int x);
	void CheckBetterStudents(vector<Student>& students, int x);
	void CheckWorseStudents(vector<Student>& students, int x);
	void ResetCheckedStudents(vector<Student>& students, int n);

protected:
	void Code() override;
};