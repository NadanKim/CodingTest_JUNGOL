#include "CharacterRhombus.h"

/// <summary>
/// 문제
/// 마름모의 한 변의 길이 N을 입력 받아 아래와 같이 문자 마름모를 출력하는 프로그램을 작성하시오.
/// 
/// < 처리조건 >
/// (1) 첫 번째 행의 중앙부터 출발하여 시계 반대 방향으로 'A' 부터 차례대로 채워나간다. ('Z'다음에는 다시 'A'가 된다.)
/// (2) 바깥 부분이 다 채워지면 두 번째 행 중앙부터 다시 같은 작업을 반복한다.
/// (3) 같은 방법으로 마름모를 다 채워지도록 하여 출력한다.
///
/// 입력 형식
/// 마름모의 한변의 길이 N(N의 범위는 100 이하의 양의 정수)을 입력받는다.
/// 
/// 출력 형식
/// 주어진 형태대로 한 변의 길이가 N인 문자 마름모를 출력한다. 문자 사이는 한 개의 공백으로 구분한다.
/// 주의: 출력 시 널 문자('NULL', '\0')는 출력 되지 않게 하세요..
///
/// 입력 예
/// 4
/// 
/// 출력 예
///       A
///     B M L
///   C N U T K
/// D O V Y X S J
///   E P W R I
///     F Q H
///       G
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=2073&sca=2020
/// </summary>
void CharacterRhombus::Code()
{
	int n;

	std::cin >> n;

	int width{ n * 2 - 1 };
	char** arr = new char*[width];
	for (int i = 0; i < width; i++)
	{
		arr[i] = new char[width];
		std::fill_n(arr[i], width, ' ');
	}

	int minLimit{ 0 }, maxLimit{ width };
	int i{ 0 }, j{ n - 1 };
	while (true)
	{
		while (true)
		{
			if (j < minLimit || arr[i][j] != ' ')
			{
				j += 2;
				break;
			}

			arr[i++][j--] = GetCh();
		}

		while (true)
		{
			if (i >= maxLimit || arr[i][j] != ' ')
			{
				i -= 2;
				break;
			}

			arr[i++][j++] = GetCh();
		}

		while (true)
		{
			if (j >= maxLimit || arr[i][j] != ' ')
			{
				j -= 2;
				break;
			}

			arr[i--][j++] = GetCh();
		}

		while (true)
		{
			if (i < minLimit || arr[i][j] != ' ')
			{
				i += 1;
				break;
			}

			arr[i--][j--] = GetCh();
		}

		minLimit++;
		maxLimit--;

		if (i == n - 1 && i == j)
		{
			arr[i][j] = GetCh();
			break;
		}
	}

	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < width; j++)
		{
			std::cout << arr[i][j] << ' ';
		}
		std::cout << '\n';
	}
}

char CharacterRhombus::GetCh()
{
	static char ch{ 'A' };

	if (ch > 'Z')
	{
		ch = 'A';
	}

	return ch++;
}