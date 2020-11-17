#include "FormativeArray203.h"

/// <summary>
/// 문제
/// 10 미만의 자연수 두 개를 입력받아서
/// 첫 번째 항과 두 번째 항을 입력받은 수로 초기화 시킨 후
/// 세 번째 항부터는 전전항과 전항의 합을 구하여
/// 그 합의 1의 자리로 채워서 차례로 10개를 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 3 5
/// 
/// 출력 예
/// 3 5 8 3 1 4 5 9 4 3
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=62&sca=10a0
/// </summary>
void FormativeArray203::Code()
{
	int num1, num2;

	std::cin >> num1 >> num2;

	int arr[10]{ num1, num2 };

	for (int i = 2; i < 10; i++)
	{
		arr[i] = (arr[i - 2] + arr[i - 1]) % 10;
	}

	for (int i = 0; i < 10; i++)
	{
		std::cout << arr[i] << ' ';
	}
}