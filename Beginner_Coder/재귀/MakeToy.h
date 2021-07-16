#pragma once
#include <iostream>
#include <set>
#include <map>

#include "../../Base.h"

using std::set;
using std::map;

class MakeToy : public Base
{
private:
	struct Material
	{
		int x, y, z;

		friend std::istream& operator >>(std::istream& is, Material& m)
		{
			is >> m.x >> m.y >> m.z;
			return is;
		}
	};
	void CheckTotalBasicMaterials(Material arr[], int m, int curIdx, 
		map<int, int>& materialsCount, set<int>& basicMaterials, int prod = 1);

protected:
	void Code() override;
};