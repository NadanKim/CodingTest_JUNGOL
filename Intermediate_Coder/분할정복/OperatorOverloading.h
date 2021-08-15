#pragma once
#include <iostream>

#include "../../Base.h"

class OperatorOverloading : public Base
{
public:
	struct Rectangle
	{
		int width;
		int height;

		bool operator <(const Rectangle& other);
		friend std::istream& operator >>(std::istream& is, Rectangle& rect)
		{
			is >> rect.width >> rect.height;
			return is;
		}
	};

protected:
	void Code() override;
};