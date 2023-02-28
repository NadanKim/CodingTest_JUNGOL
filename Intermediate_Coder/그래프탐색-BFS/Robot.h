#pragma once
#include <iostream>
#include <queue>

#include "../../Base.h"

using std::queue;

class Robot : public Base
{
protected:
	struct Direction
	{
		int x, y;
	};

	struct Position
	{
		int x, y;
		int cost;
		int direction;
		int sameCount;

		bool IsSameDirection(int dir)
		{
			return direction == dir;
		}

		int GetMoveCost(int dir)
		{
			int cost = GetTurnCost(dir);

			// 다른 방향으로 최초 이동 시 비용이 들어간다.
			if (IsSameDirection(dir) == false)
			{
				cost += 1;
			}

			return cost;
		}

		int GetTurnCost(int dir)
		{
			int cost = 1;
			
			// 같은 방향은 코스트가 들지 않는다.
			if (IsSameDirection(dir))
			{
				cost = 0;
			}
			// 반대 방향은 두 번 돌아야 하므로 비용이 2가 된다.
			else if (direction == 0 && dir == 1
				|| direction == 1 && dir == 0
				|| direction == 2 && dir == 3
				|| direction == 3 && dir == 2)
			{
				cost = 2;
			}

			return cost;
		}

		int GetSameCount(int dir)
		{
			if (IsSameDirection(dir))
			{
				return sameCount + 1;
			}

			return 0;
		}

		void CheckSameCount()
		{
			if (sameCount < 3)
			{
				return;
			}

			cost += 1;
			sameCount = 1;
		}
	};

public:
	virtual void Code() override;

private:
	int GetLeastCostToGo();
	bool IsArrive(const Position& p) const;
	bool CanMoveTo(const Position& p) const;
	bool IsInMap(const Position& p) const;

private:
	const Direction directionToMove[4]{ {1, 0}, {-1, 0}, {0, 1}, {0, -1} };

	int m, n;
	bool map[101][101]{};

	queue<Position> q;

	Position start, end;
};