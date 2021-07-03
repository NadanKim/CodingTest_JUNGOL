#pragma once
#include <iostream>

#include "../../Base.h"

namespace DataStructure
{
	struct Data
	{
		int data;
		Data* prev{ nullptr };
		Data* next{ nullptr };
	};

	class Queue
	{
	public:
		Queue() : _size(0), _front(nullptr), _rear(nullptr) {}
		bool Empty();
		size_t Size();
		void Enqueue(int data);
		int Dequeue();

	private:
		size_t _size;
		Data* _front;
		Data* _rear;
	};
}

class DataProcessQueue : public Base
{
protected:
	void Code() override;
};