#pragma once
#include <iostream>

#include "../../Base.h"

class BadHairDay : public Base
{
private:
	struct Cow
	{
		Cow() : height(0), count(0), isBlind(false) {}

		int height;
		int count;
		bool isBlind;

		void MakeItBlind();

		Cow operator++(int);
		bool operator<(const Cow& other);
		friend std::istream& operator>>(std::istream& is, Cow& cow)
		{
			is >> cow.height;
			return is;
		}
	};

	int GetTotalCount(Cow* arr, int n);

protected:
	void Code() override;
};