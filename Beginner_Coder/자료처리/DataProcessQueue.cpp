#include "DataProcessQueue.h"

/// <summary>
/// 문제
/// 큐는 먼저 들어온 데이터가 먼저 출력된다. 
/// 이러한 구조를 선입선출(FIFO - First In First Out)이라고 한다.
/// 
/// 이러한 큐 자료구조는 보통 우리의 생활에서는 매우 일상적인 자료구조이다.
/// 큐 자료구조의 형태를 가장 흔히 볼 수 있는 게 “줄서기”가 될 것이다.
/// 은행 창구에서 줄을 서거나, 버스를 기다리기 위해서 줄을 설 경우 가장 먼저 줄을 선 사람이 가장 먼저 은행 업무를 처리하거나,
/// 버스를 타게 된다.(새치기 하는 경우는 생각하지 말자)
/// 
/// 그림과 같은 큐 자료구조를 설계하고, 처리조건에 맞는 출력을 하시오.
/// 
/// ≪처리조건≫
/// 1. 주어지는 명령은 다음의 3가지이다.
/// 2. "i a"는 a라는 수를 큐에 넣는다.이때, a는 10, 000 이하의 자연수이다.
/// 3. "o"는 큐에서 데이터를 빼고, 그 데이터를 출력한다.만약 큐가 비어있으면, "empty"를 출력한다.
/// 4. "c"는 큐에 있는 데이터의 수를 출력한다.
///
/// 입력 형식
/// 첫줄에 N이 주어진다. N은 주어지는 명령어의 수이다.(1≤N≤100) 둘째 줄부터 N+1줄까지 한 줄에 하나씩 명령이 주어진다.
/// 
/// 출력 형식
/// 각 명령에 대한 출력 값을 한 줄에 하나씩 출력한다. 출력내용이 하나도 없는 경우는 주어지지 않는다.
///
/// 입력 예
/// 7
/// i 7
/// i 5
/// c
/// o
/// o
/// o
/// c
///
/// 출력 예
/// 2
/// 7
/// 5
/// empty
/// 0
/// 
/// Hint!
/// * [추상 자료형(ADT - Abstract Data Type)](https://ko.wikipedia.org/wiki/%EC%B6%94%EC%83%81_%EC%9E%90%EB%A3%8C%ED%98%95) : 자료들의 연산에 대하여 명기한 것이다.
/// Queue의 ADT(추상자료형)는 [STL queue](http://www.cplusplus.com/reference/queue/queue/?kw=queue)을 참조하여 다음과 같이 명기할 수 있다.
/// 1. empty() : 큐가 비었는가 ?
/// 2. size() : 큐에 남아있는 원소의 개수는 ?
/// 3. front() : 큐에 남아있는 원소중에 가장 오래된 원소는 ?
/// 4. back() : 최근 큐에 추가된 최근 원소는 ?
/// 5. push(data) : 큐에 data를 추가한다.
/// 6. pop() : 큐에 남아있는 원소중에 가장 오래된 원소를 삭제한다.
/// 
/// [linked List(c - 동적할당).pdf](http://www.jungol.co.kr/bbs/download.php?bo_table=pds&wr_id=7&no=2&page=8)
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=970&sca=2070
/// </summary>
void DataProcessQueue::Code()
{
	int n;

	std::cin >> n;

	DataStructure::Queue queue;

	int data;
	char order;
	for (int i = 0; i < n; i++)
	{
		std::cin >> order;

		switch (order)
		{
		case 'i':
			std::cin >> data;
			queue.Enqueue(data);
			break;
		case 'o':
			if (queue.Empty())
			{
				std::cout << "empty\n";
			}
			else
			{
				std::cout << queue.Dequeue() << '\n';
			}
			break;
		case 'c':
			std::cout << queue.Size() << '\n';
			break;
		}
	}
}

namespace DataStructure
{
	bool Queue::Empty()
	{
		if (_size > 0)
		{
			return false;
		}
		return true;
	}

	size_t Queue::Size()
	{
		return _size;
	}

	void Queue::Enqueue(int data)
	{
		Data* newData = new Data();
		newData->data = data;
		newData->next = _rear;

		if (_rear == nullptr)
		{
			_front = newData;
		}
		else
		{
			_rear->prev = newData;
		}
		
		_rear = newData;

		_size++;
	}

	int Queue::Dequeue()
	{
		int data{ 0 };

		Data* delData{ _front };
		if (delData != nullptr)
		{
			data = delData->data;

			_front = _front->prev;

			if (_front == nullptr)
			{
				_rear = nullptr;
			}

			delete delData;

			_size--;
		}

		return data;
	}
}