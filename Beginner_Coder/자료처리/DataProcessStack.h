#pragma once
#include <iostream>

#include "../../Base.h"

namespace DataStructure
{
	struct Data
	{
		int data;
		Data* next{ nullptr };
	};

	class Stack
	{
	public:
		Stack() : _size(0), _top(nullptr) {}
		bool Empty();
		size_t Size();
		void Push(int data);
		int Pop();

	private:
		size_t _size;
		Data* _top;
	};
}

class DataProcessStack : public Base
{
protected:
	void Code() override;
};