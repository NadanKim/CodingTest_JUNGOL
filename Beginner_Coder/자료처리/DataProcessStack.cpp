#include "DataProcessStack.h"

/// <summary>
/// 문제
/// Stack은 "더미"란 뜻을 가진다.
/// 책 더미, 신문 더미 등에 사용하는 단어이다.
/// 책 더미를 예로 들어 보자.
/// 책 더미를 쌓았다고 했을 때, 이 책 더미에서 책을 가져오는 가장 정상적인 방법은 제일 위에 있는 책을 가져오는 방식이다.
/// 
/// 다시 말하면 가장 먼저 들어간 책은 가장 나중에 꺼낼 수 있을 것이다.
/// 이런식으로 자료가 가장 밑에 쌓이고(입력).자료를 가져올 때(출력)는 가장 위(최근)의 자료를 가져오는 자료구조를 Stack하고 한다.
/// 이러한 Stack의 특징 때문에 흔히 "FILO(First-In-Last-Out : 선입후출)" 혹은 "LIFO(Last-In-First-Out : 후입선출)"라고 한다.
/// 
/// 그림과 같이 Stack을 설계하고 다음의 처리조건에 맞는 출력을 하시오.
/// 
/// <처리조건>
/// 주어진 명령은 다음의 3가지이다.
/// 1. "i a"는 a라는 수를 스택에 넣는다.이때, a는 10, 000 이하의 자연수이다.
/// 2. "o"는 스택에서 데이터를 빼고, 그 데이터를 출력한다.만약 스택이 비어있으면, "empty"를 출력한다.
/// 3. "c"는 스택에 쌓여있는 데이터의 수를 출력한다.
///
/// 입력 형식
/// 첫 줄에 N이 주어진다. N은 주어지는 명령의 수이다. (1≤N≤100)
/// 둘째 줄부터 N + 1줄까지 N개의 명령이 주어지는데, 한 줄에 하나씩 주어진다.
/// 
/// 출력 형식
/// 각 명령에 대한 출력 값을 한 줄에 하나씩 출력한다.
/// 출력내용이 하나도 없는 경우는 주어지지 않는다.
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
/// 5
/// 7
/// empty
/// 0
/// 
/// Hint!
/// * [추상 자료형(ADT - Abstract Data Type)](https://ko.wikipedia.org/wiki/%EC%B6%94%EC%83%81_%EC%9E%90%EB%A3%8C%ED%98%95)
/// :자세한 구현 방법을 제시하지 않고 자료들의 연산에 대하여 명기한 것.
/// 
/// * stack의 ADT(추상자료형)는 [STL stack](http://www.cplusplus.com/reference/stack/stack/)을 참조하여 다음과 같이 명기할 수 있다.
/// 1. empty() : 스택이 비었는가 ?
/// 2. size() : 스택에 담긴 원소의 개수는 ?
/// 3. top() : 최근 스택에 담긴 원소는 ?
/// 4. push(data) : 스택에 data를 추가한다.
/// 5. pop() : 최근 스택에 담은 원소를 삭제한다.
/// 
/// [linked List(c - 동적할당).pdf](http://jungol.co.kr/bbs/download.php?bo_table=pds&wr_id=7&no=2&page=8)
/// [linked List(cpp - 동적할당).pdf](http://jungol.co.kr/bbs/download.php?bo_table=pds&wr_id=6&no=2&page=10)
/// [LinkedList_memoryPool.pdf](http://jungol.co.kr/bbs/download.php?bo_table=pds&wr_id=7&no=0&page=11)
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=382&sca=2070
/// </summary>
void DataProcessStack::Code()
{
	int n;

	std::cin >> n;

	DataStructure::Stack stack;

	int data;
	char order;
	for (int i = 0; i < n; i++)
	{
		std::cin >> order;

		switch (order)
		{
		case 'i':
			std::cin >> data;
			stack.Push(data);
			break;
		case 'o':
			if (stack.Empty())
			{
				std::cout << "empty\n";
			}
			else
			{
				std::cout << stack.Pop() << '\n';
			}
			break;
		case 'c':
			std::cout << stack.Size() << '\n';
			break;
		}
	}
}

namespace DataStructure
{
	bool Stack::Empty()
	{
		if (_size > 0)
		{
			return false;
		}
		return true;
	}

	size_t Stack::Size()
	{
		return _size;
	}

	void Stack::Push(int data)
	{
		Data* newData = new Data();
		newData->data = data;
		newData->next = _top;
		
		_top = newData;

		_size++;
	}

	int Stack::Pop()
	{
		int data{ 0 };

		Data* delData{ _top };
		if (delData != nullptr)
		{
			data = delData->data;
			_top = delData->next;
			delete delData;

			_size--;
		}

		return data;
	}
}