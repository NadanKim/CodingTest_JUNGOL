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

		BusLine() : num(0), dir(MoveDirection::None), checked(false) {}

		int num;
		Point start;
		Point end;
		MoveDirection dir;
		bool checked;

		bool IsInWay(const Point& p) const
		{
			if (dir == MoveDirection::Horizontal)
			{
				if (p.y != start.y)
				{
					return false;
				}

				return start.x <= p.x && p.x <= end.x;
			}
			else
			{
				if (p.x != start.x)
				{
					return false;
				}

				return start.y <= p.y && p.y <= end.y;
			}
		}

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

	struct CheckInfo
	{
		CheckInfo(int busNum, int cnt) : busNum(busNum), cnt(cnt) {}

		int busNum;
		int cnt;
	};

protected:
	virtual void Code() override;

private:
	void Ready();
	void Finish();

	int GetLeastBusCnt();

private:
	int m, n;
	int k;
	Point ps, pe;
	vector<BusLine> busList;
	queue<CheckInfo> q;
};