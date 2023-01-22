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
		Data(int number, int count = 0) : number(number), count(count) {}

	public:
		int GetNumber() { return number; }
		int GetCount() { return count; }

	private:
		int number;
		int count;
	};

public:
	virtual void Code() override;

private:
	void FindPrimeNumbers();
	int GetCountToArrive();
	bool IsInRange(int number);
	bool IsPastNumber(int number);
	bool IsPrimeNumber(int number);

private:
	int a, b;
	vector<int> primeNumbers;
	vector<int> pastNumbers;
	queue<Data> q;
};