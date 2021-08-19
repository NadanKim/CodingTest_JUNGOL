#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <algorithm>
#include <string>

#include "../../Base.h"

using std::string;

class STLSort4 : public Base
{
private:
	struct Student
	{
		int id;
		string name;
		int preference;
	};

	static bool Compare(const Student& s1, const Student& s2)
	{
		if (s1.preference == s2.preference)
		{
			if (s1.name == s2.name)
			{
				return s1.id < s2.id;
			}
			return s1.name < s2.name;
		}
		return s1.preference > s2.preference;
	}

	void Sort(Student arr[], int n);

protected:
	void Code() override;
};