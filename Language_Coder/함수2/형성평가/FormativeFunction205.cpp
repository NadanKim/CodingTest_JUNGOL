#include "FormativeFunction205.h"

/// <summary>
/// 문제
/// 세 개의 실수를 입력받아 합계와 평균을 구하여 평균을 반올림한 정수를 출력하고,
/// 다음은 입력받은 수를 각각 먼저 반올림한 후 합계와 평균을 구하여 평균을 반올림한 한 결과를 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 153.74 34.59 109.5
/// 
/// 출력 예
/// 99
/// 100
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=79&sca=10c0
/// </summary>
void FormativeFunction205::Code()
{
	float arr[3];

	for (int i = 0; i < 3; i++)
	{
		std::cin >> arr[i];
	}

	Function(arr);
}

void FormativeFunction205::Function(float arr[])
{
	std::cout << static_cast<int>(floor((arr[0] + arr[1] + arr[2]) / 3 + 0.5f)) << '\n';

	for (int i = 0; i < 3; i++)
	{
		arr[i] = floor(arr[i] + 0.5f);
	}
	std::cout << static_cast<int>(floor((arr[0] + arr[1] + arr[2]) / 3 + 0.5f)) << '\n';
}