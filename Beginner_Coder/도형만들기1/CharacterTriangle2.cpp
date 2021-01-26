#include "CharacterTriangle2.h"

/// <summary>
/// 문제
/// 삼각형의 높이 N을 입력받아서 아래와 같이 문자 'A'부터 차례대로 맨 오른쪽 가운데 행부터 차례대로
/// 아래와 같이 채워서 삼각형 모양을 출력하는 프로그램을 작성하시오.
/// 
/// < 처리조건 >
/// (1) 오른쪽 가운데 행에 문자 'A'를 채우고 왼쪽 열로 이동하여 위에서 아래로 채워나간다.
/// (2) 가장 왼쪽 행까지 반복하여 모두 채워 나간다. (문자 'Z'다음에는 'A'부터 다시 시작한다.)
///
/// 입력 형식
/// 삼각형의 높이 N(N의 범위는 1이상 100 이하의 홀수)을 입력받는다.
/// 
/// 출력 형식
/// 주어진 형태대로 높이가 N인 문자삼각형을 출력한다. 문자 사이는 한 개의 공백으로 구분한다.
/// 입력범위를 벗어나면 "INPUT ERROR"를 출력한다.
///
/// 입력 예
/// 5
///
/// 출력 예
/// E
/// F B
/// G C A
/// H D
/// I
/// 
/// Hint!
/// <생각하기>
/// 열 우선으로 작성하면 된다.열 번호에 따른 행의 범위는 다음과 같다.
/// 열 번호	| 행의 시작	| 행의 끝
///		3	|		3	|	3
///		2	|		2	|	4
///		1	|		1	|	5
/// 열 번호를 i라 하면 시작위치는 i와 같고 끝위치는 (n / 2) * 2 - i 와 같다.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=2075&sca=20
/// </summary>
void CharacterTriangle2::Code()
{
	int n;

	std::cin >> n;

	if (n % 2 == 0 || n > 100)
	{
		std::cout << "INPUT ERROR";
	}
	else
	{
		char arr[101][101]{};

		for (int i = 0; i < 101; i++)
		{
			for (int j = 0; j < 101; j++)
			{
				arr[i][j] = ' ';
			}
		}

		char ch{ 'A' };

		for (int i = n / 2; i >= 0; i--)
		{
			for (int j = i; j < n - i; j++)
			{
				arr[j][i] = ch++;

				if (ch > 'Z')
				{
					ch = 'A';
				}
			}
		}

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				std::cout << arr[i][j] << ' ';
			}
			std::cout << '\n';
		}
	}
}