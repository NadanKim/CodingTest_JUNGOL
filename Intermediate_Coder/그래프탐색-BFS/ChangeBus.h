#pragma once
#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>

#include "../../Base.h"

using std::vector;
using std::queue;
using std::unordered_map;

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
			is >> p.y >> p.x;

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
					if (start.x <= pos.x && pos.x <= end.x)
					{
						return true;
					}
				}
			}
			else
			{
				if (pos.x == start.x)
				{
					if (start.y <= pos.y && pos.y <= end.y)
					{
						return true;
					}
				}
			}

			return false;
		}

		int num;
		Point start;
		Point end;
		MoveDirection dir;

	private:
		void SwapStartEnd()
		{
			Point temp = start;
			start.x = end.x;
			start.y = end.y;
			end = temp;
		}
		
		friend std::istream& operator>>(std::istream& is, BusLine& bus)
		{
			is >> bus.num >> bus.start >> bus.end;

			if (bus.start.x != bus.end.x)
			{
				bus.dir = MoveDirection::Horizontal;
				if (bus.end.x < bus.start.x)
				{
					bus.SwapStartEnd();
				}
			}
			else
			{
				bus.dir = MoveDirection::Vertical;
				if (bus.end.y < bus.start.y)
				{
					bus.SwapStartEnd();
				}
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
	vector<BusLine> busList;
	unordered_map<BusLine::MoveDirection, vector<Point>> movement;
	MapStatus** map;
	queue<UserInfo> q;
};