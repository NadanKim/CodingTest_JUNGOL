#include "FormativeArray206.h"

/// <summary>
/// 문제
/// 예제를 보고 적당한 배열을 선언한 후 1행의 1열과 3열 5열을 각각 1로 초기화하고 나머지는 모두 0으로 초기화 한 후
/// 2행부터는 바로 위행의 왼쪽과 오른쪽의 값을 더하여 채운 후 출력하는 프로그램을 작성하시오.
/// 
/// 출력 예
/// 1 0 1 0 1
/// 0 2 0 2 0
/// 2 0 4 0 2
/// 0 6 0 6 0
/// 6 0 12 0 6
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=65&sca=10a0
/// </summary>
void FormativeArray206::Code()
{
	int arr[5][5]{
		1, 0, 1, 0, 1,
	};

	for (int i = 1; i < 5; i++)
	{
		// 왼쪽 끝 값 보정
		arr[i][0] = arr[i - 1][1];

		// 오른쪽 끝 값 보정
		arr[i][4] = arr[i - 1][3];

		for (int j = 1; j < 4; j++)
		{
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j + 1];
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			std::cout << arr[i][j] << ' ';
		}
		std::cout << '\n';
	}
}