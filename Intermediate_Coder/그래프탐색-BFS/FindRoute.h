#pragma once
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <string>

#include "../../Base.h"

using std::queue;
using std::vector;
using std::string;

class FindRoute : public Base
{
protected:
	struct Route
	{
		int index = 0;
		vector<int> route;
		
		Route() {}
		Route(int index) : index(index) { route.push_back(index); }
		Route(int index, const Route& other)
			: index(index)
		{
			for (int otherIndex : other.route)
			{
				route.push_back(otherIndex);
			}
			route.push_back(index);
		}

		bool IsInRoute(int newIndex)
		{
			return std::find(route.begin(), route.end(), newIndex) != route.end();
		}
	};

public:
	virtual void Code() override;

private:
	bool FindHamingRoute();
	bool IsHamingDistance(int index1, int index2);

private:
	int n, k;
	int a, b;

	vector<string> allData;
	queue<Route> q;

	Route result;
};