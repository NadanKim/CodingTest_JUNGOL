#include "SnailTriangle.h"

/// <summary>
/// 문제
/// 삼각형의 높이 N을 입력받아서 아래와 같이 숫자 0부터 달팽이 모양으로 차례대로 채워진 삼각형을 출력하는 프로그램을 작성하시오.
/// 
/// < 처리조건 >
/// 왼쪽 위부터 시계방향으로 오른쪽 아래로 이동하면서 숫자 0부터 N개를 채우고
/// 다시 왼쪽으로, 다음은 위쪽으로 반복하면서 채워 나간다. (숫자 9 다음에는 0부터 다시 시작한다.)
///
/// 입력 형식
/// 삼각형의 한변의 길이 N(N의 범위는 100 이하의 양의 정수)을 입력받는다.
/// 
/// 출력 형식
/// 주어진 형태대로 높이가 N인 달팽이 삼각형을 출력한다. 숫자 사이는 한 개의 공백으로 구분한다.
///
/// 입력 예
/// 6
/// 
/// 출력 예
/// 0
/// 4 1
/// 3 5 2
/// 2 0 6 3
/// 1 9 8 7 4
/// 0 9 8 7 6 5
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=609&sca=2020
/// </summary>
void SnailTriangle::Code()
{
	int n;

	std::cin >> n;

	int** arr = new int* [n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[n];
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = -1;
		}
	}

	int num{ 0 };
	int i{ 0 }, j{ 0 };
	SnailDirection direction{ SnailDirection::RightDown };
	while (true)
	{
		switch (direction)
		{
		case SnailDirection::RightDown:
			direction = RightDown(arr, n, i, j, num);
			break;
		case SnailDirection::Left:
			direction = Left(arr, n, i, j, num);
			break;
		case SnailDirection::Up:
			direction = Up(arr, n, i, j, num);
			break;
		}

		if (num > 9)
		{
			num = 0;
		}

		if (direction == SnailDirection::Done)
		{
			break;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] != -1)
			{
				std::cout << arr[i][j] << ' ';
			}
		}
		std::cout << '\n';
	}

	for (int i = 0; i < n; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}

SnailTriangle::SnailDirection SnailTriangle::RightDown(int** arr, int n, int& i, int& j, int& num)
{
	if (i >= n || arr[i][j] != -1)
	{
		i -= 1;
		j -= 2;

		if (arr[i][j] != -1)
		{
			return SnailDirection::Done;
		}

		return SnailDirection::Left;
	}

	arr[i++][j++] = num++;
	
	return SnailDirection::RightDown;
}

SnailTriangle::SnailDirection SnailTriangle::Left(int** arr, int n, int& i, int& j, int& num)
{
	if (j < 0 || arr[i][j] != -1)
	{
		i -= 1;
		j += 1;

		if (arr[i][j] != -1)
		{
			return SnailDirection::Done;
		}

		return SnailDirection::Up;
	}

	arr[i][j--] = num++;

	return SnailDirection::Left;
}

SnailTriangle::SnailDirection SnailTriangle::Up(int** arr, int n, int& i, int& j, int& num)
{
	if (i < 0 || arr[i][j] != -1)
	{
		i += 2;
		j += 1;

		if (arr[i][j] != -1)
		{
			return SnailDirection::Done;
		}

		return SnailDirection::RightDown;
	}

	arr[i--][j] = num++;

	return SnailDirection::Up;
}