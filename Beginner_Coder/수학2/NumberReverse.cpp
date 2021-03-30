#include "NumberReverse.h"

/// <summary>
/// 문제
/// 양의 정수를 입력받아 역으로 보여주고 각 자리 숫자의 합을 구하는 프로그램을 작성하라.
///
/// 입력 형식
/// 21억 이하의 양의 정수를 입력받는다. 잘못된 데이터는 입력되지 않는다. 
/// 하나의 결과가 나온 후에도 계속 새로운 입력을 받다가 0이 입력되면 프로그램을 종료한다.
/// 최대 10개의 양의 정수가 입력될 수 있다.
/// 
/// 출력 형식
/// 입력받은 수의 역과 각 자리 숫자의 합을 공백으로 구분하여 출력한다.
/// 유효하지않은 "0"은 출력하지 않는다.
/// 입력받은 수의 역도 21억 이하의 정수이다.
///
/// 입력 예
/// 453
/// 123456
/// 0
///
/// 출력 예
/// 354 12
/// 654321 21
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=288&sca=2040
/// </summary>
void NumberReverse::Code()
{
	int arr[10]{};
	int arrCount{ 0 };

	while (true)
	{
		std::cin >> arr[arrCount];

		if (arr[arrCount] == 0)
		{
			break;
		}

		if (arr[arrCount] > 0)
		{
			arrCount++;
			if (arrCount >= 10)
			{
				break;
			}
		}
	}

	for (int i = 0; i < arrCount; i++)
	{
		bool isZero{ true };
		int sum{ 0 };
		while (arr[i] > 0)
		{
			int temp{ arr[i] % 10 };
			if (isZero && temp > 0)
			{
				isZero = false;
			}

			if (!isZero)
			{
				sum += temp;
				std::cout << temp;
			}
			arr[i] /= 10;
		}
		std::cout << ' ' << sum << '\n';
	}
}