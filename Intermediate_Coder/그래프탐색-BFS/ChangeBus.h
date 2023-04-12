#pragma once
#include <iostream>
#include <vector>
#include <queue>

#include "../../Base.h"

using std::vector;
using std::queue;

class ChangeBus : public Base
{
private:
	struct Point
	{
		Point() : x(0), y(0) {}

		int x;
		int y;

		friend std::istream& operator>>(std::istream& is, Point& p)
		{
			is >> p.x >> p.y;
			return is;
		}
	};

	struct BusLine
	{
		BusLine() : num(0) {}

		int num;
		Point start;
		Point end;

		friend std::istream& operator>>(std::istream& is, BusLine& p)
		{
			is >> p.num >> p.start >> p.end;
			return is;
		}
	};

protected:
	virtual void Code() override;

private:
	void Ready();
	void Finish();

private:
	int m, n;
	int k;
	Point ps, pe;
	vector<BusLine> buses;
};