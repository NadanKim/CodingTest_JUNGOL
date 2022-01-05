#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

#include "../../Base.h"

using std::vector;
using std::stack;

class MazeExploration : public Base
{
private:
	struct Room
	{
		Room(int roomNumber) : roomNumber(roomNumber), visited(false) {}

		int roomNumber;
		bool visited;
		vector<int> linkedRooms;
	};

	void FindRoomOrder(vector<Room> rooms, int n, vector<int>& roomOrder);

protected:
	void Code() override;
};