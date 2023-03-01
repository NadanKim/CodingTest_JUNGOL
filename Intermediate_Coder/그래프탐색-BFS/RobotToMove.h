#pragma once
#include <iostream>
#include <queue>

#include "../../Base.h"

using std::queue;

class RobotToMove : public Base
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

		Position() : x(0), y(0), cost(0), direction(0) {}

		int GetTurnCost(int dir)
		{
			int cost = 1;
			
			// ���� ������ �ڽ�Ʈ�� ���� �ʴ´�.
			if (direction == dir)
			{
				cost = 0;
			}
			// �ݴ� ������ �� �� ���ƾ� �ϹǷ� ����� 2�� �ȴ�.
			else if (direction == 0 && dir == 1
				|| direction == 1 && dir == 0
				|| direction == 2 && dir == 3
				|| direction == 3 && dir == 2)
			{
				cost = 2;
			}

			return cost;
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
	bool visited[101][101][4]{};

	queue<Position> q;

	Position start, end;
};