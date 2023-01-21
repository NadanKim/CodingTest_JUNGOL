#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

#include "../../Base.h"

using std::vector;
using std::queue;

class TravelWithPrimeNumber : public Base
{
private:
	struct Data
	{
	public:
		Data(int number)
			: number(number), count(0) 
		{
			pastNumbers.push_back(number);
		}

	public:
		int GetNumber() { return number; }
		int GetCount() { return count; }

		void SetPastData(const Data& other)
		{
			count = other.count + 1;

			for (int number : other.pastNumbers)
			{
				pastNumbers.push_back(number);
			}
		}

		bool IsPastNumber(int number)
		{
			return std::find(pastNumbers.cbegin(), pastNumbers.cend(), number) != pastNumbers.cend();
		}

	private:
		int number;
		int count;

		vector<int> pastNumbers;
	};

public:
	virtual void Code() override;

private:
	void FindPrimeNumbers();
	bool IsPrimeNumber(int number);

private:
	int a, b;
	vector<int> primeNumbers;
	queue<Data> q;
};