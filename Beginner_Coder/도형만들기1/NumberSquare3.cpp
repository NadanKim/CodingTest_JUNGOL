﻿#include "NumberSquare3.h"

/// <summary>
/// 문제
/// 정사각형의 한 변의 길이 n을 입력 받은 후 다음과 같이 숫자로 된 정사각형 형태로 출력하는 프로그램을 작성하시오.
/// 
/// < 처리조건 > 
/// 숫자의 진행 순서는 처음에 왼쪽 위에서 아래쪽으로 n만큼 진행 한 후
/// 바로 오른쪽 위에서 다시 아래쪽으로 진행하는 방법으로 정사각형이 될 때까지 반복한다.
/// 
/// 입력 형식
/// 정사각형 한 변의 길이 n(n의 범위는 100 이하의 자연수)을 입력받는다.
/// 
/// 출력 형식
/// 위의 형식과 같이 한 변의 길이가 n인 숫자 사각형을 출력한다.숫자 사이는 공백으로 구분하여 출력한다.
///
/// 입력 예
/// 4
///
/// 출력 예
/// 1 5 9 13
/// 2 6 10 14
/// 3 7 11 15
/// 4 8 12 16
/// 
/// Hint!
/// <생각하기>
/// 열을 우선으로 하여 바깥 for문을 작성하고, 열이 결정되면 행을 나타내는 for문을 작성해서 채워나가면 된다.
/// 
/// for (i = 0; i < n; i++) {
///     for (j = 0; j < n; j++) {
///         arr[j][i] = num++;
///     }
/// }
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=2070&sca=20
/// </summary>
void NumberSquare3::Code()
{
	int n;

	std::cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cout << i + j * n << ' ';
		}
		std::cout << '\n';
	}
}