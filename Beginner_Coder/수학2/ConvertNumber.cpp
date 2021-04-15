#include "ConvertNumber.h"

/// <summary>
/// 문제
/// 10진수를 입력 받아서 2, 8, 16진수로 바꾸어 출력하는 프로그램을 작성하시오.
///
/// 입력 형식
/// 입력의 첫줄에는 10진수 N(1≤N≤100,000)과 바꿀 진수 B(2, 8, 16)가 공백으로 구분하여 입력된다.
/// 16진수에서 10이상의 수는 순서대로 'A', 'B', 'C', 'D', 'E', 'F'로 나타낸다.
/// 
/// 출력 형식
/// 입력받은 10진수를 B진수로 바꾸어 출력한다.
///
/// 입력 예
/// 27 2
///
/// 출력 예
/// 11011
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=806&sca=2040
/// </summary>
void ConvertNumber::Code()
{
	int n, b;

	std::cin >> n >> b;

	if (n == 0)
	{
		std::cout << 0;
		return;
	}

	string result;

	while (n > 0)
	{
		int temp{ n % b };
		if (temp < 10)
		{
			result += ('0' + temp);
		}
		else
		{
			result += ('A' + temp - 10);
		}
		n /= b;
	}

	for (int i = static_cast<int>(result.size()) - 1; i >= 0; i--)
	{
		std::cout << result[i];
	}
}