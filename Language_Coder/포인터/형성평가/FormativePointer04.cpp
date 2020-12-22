#include "FormativePointer04.h"

/// <summary>
/// 문제
/// 10개의 원소를 저장할 수 있는 배열을 선언한 후 포인터 변수를 이용하여 자료를 입력받아 홀수의 개수와
/// 짝수의 개수를 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 3 5 10 52 1 97 36 25 13 29
/// 
/// 출력 예
/// odd : 7
/// even : 3
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=103&sca=10h0
/// </summary>
void FormativePointer04::Code()
{
	int* arr = new int[10];

	for (int i = 0; i < 10; i++)
	{
		std::cin >> arr[i];
	}

	int odd{ 0 }, even{ 0 };
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}

	std::cout << "odd : " << odd << '\n';
	std::cout << "even : " << even;

	delete[] arr;
}