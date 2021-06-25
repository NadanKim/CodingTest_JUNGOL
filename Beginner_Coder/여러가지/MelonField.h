#pragma once
#include <iostream>

#include "../../Base.h"

class MelonField : public Base
{
private:
	struct DirLen
	{
		DirLen() { direction = 0; length = 0; }
		DirLen(int dir, int len)
		{
			direction = dir;
			length = len;
		}
		bool operator==(DirLen& other)
		{
			return direction == other.direction && length == other.length;
		}

		int direction;
		int length;
	};

	int FindNearBy(DirLen shapeArr[], DirLen target, int toFindDir);

protected:
	void Code() override;
};