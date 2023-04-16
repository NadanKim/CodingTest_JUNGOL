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
		Point(int x, int y) : x(x), y(y) {}

		int x;
		int y;

		friend std::istream& operator>>(std::istream& is, Point& p)
		{
			is >> p.x >> p.y;

			// (0, 0) 부터 시작하도록 보정
			p.x -= 1;
			p.y -= 1;

			return is;
		}
	};

	struct BusLine
	{
		enum class MoveDirection
		{
			None,
			Horizontal,
			Vertical
		};

		BusLine() : num(0), dir(MoveDirection::None) {}

		bool CanGo(const Point& pos)
		{
			if (dir == BusLine::MoveDirection::Horizontal)
			{
				if (pos.y == start.y)
				{
					for (int i = start.x; i <= end.x; i++)
					{
						if (pos.x == i)
						{
							return true;
						}
					}
				}
			}
			else
			{
				if (pos.x == start.x)
				{
					for (int i = start.y; i <= end.y; i++)
					{
						if (pos.y == i)
						{
							return true;
						}
					}
				}
			}

			return false;
		}

		int num;
		Point start;
		Point end;
		MoveDirection dir;
		
		friend std::istream& operator>>(std::istream& is, BusLine& p)
		{
			is >> p.num >> p.start >> p.end;

			if (p.start.x != p.end.x)
			{
				p.dir = MoveDirection::Horizontal;
			}
			else
			{
				p.dir = MoveDirection::Vertical;
			}

			return is;
		}
	};

	struct UserInfo
	{
		UserInfo() : busId(-1), busCnt(0) {}

		int busId;
		Point pos;
		int busCnt;
	};

	enum class MapStatus
	{
		Block,
		Movable,
		Removed,
	};

protected:
	virtual void Code() override;

private:
	void Ready();
	void MakeWay(const BusLine& bus);
	void Finish();

	int GetLeastBusCnt();
	int GetLeastBusCnt(UserInfo startInfo);

	bool IsInMap(const Point& pos);
	bool IsArrive(const Point& pos);
	void RestoreWay();

private:
	int m, n;
	int k;
	Point ps, pe;
	vector<BusLine> buses;
	vector<Point> movement;
	MapStatus** map;
	queue<UserInfo> q;
};