#include "FormativeArray109.h"

/// <summary>
/// 문제
/// 정수를 입력받다가 0 이 입력되면 0 을 제외하고 그 때까지 입력 받은 개수를 출력한 후
/// 입력받은 정수를 차례로 출력하되 그 수가 홀수이면 2배한 값을,
/// 짝수인 경우에는 2로 나눈 몫을 출력하는 프로그램을 작성하시오.
/// 
/// 입력되는 정수의 개수는 100개 이하이다.
/// 
/// 입력 예
/// 8 10 5 15 100 0
/// 
/// 출력 예
/// 5
/// 4 5 10 30 50
/// 
/// Hint!
/// [파이썬2]
/// 하나의 행에 공백으로 구분되어 주어지는 음이 아닌 정수들을 입력받는다. (아래 코드 참조)
/// 앞에서부터 0이 아니면 result[] 리스트에 모은다.
/// 0이 나오면 result[]를 반환하는 함수를 작성하시오.
/// 
/// def getPositiveNumber(alist) :
/// 	# ADD ADDITIONAL CODE HEAR !!!
/// 
/// 	alist = map(int, raw_input().split())
/// 	alist = getPositiveNumber(alist)
/// 	for i in alist :
///			if i % 2 == 0 :
///				printf i / 2,
///			else:
///				print i * 2,
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=58&sca=1090
/// </summary>
void FormativeArray109::Code()
{
	int arr[100];
	int count{ 0 };

	for (int i = 0; i < 100; i++)
	{
		std::cin >> arr[i];

		if (arr[i] == 0)
		{
			break;
		}

		count++;
	}

	std::cout << count << '\n';

	for (int i = 0; i < count; i++)
	{
		if (arr[i] % 2 == 0)
		{
			std::cout << arr[i] / 2 << ' ';
		}
		else
		{
			std::cout << arr[i] * 2 << ' ';
		}
	}
}