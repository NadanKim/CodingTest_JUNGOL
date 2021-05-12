#include "FiveInARow.h"

/// <summary>
/// 문제
/// 오목은 바둑판에 검은 바둑알과 흰 바둑알을 교대로 놓아서 겨루는 게임이다. 
/// 바둑판에는 19개의 가로줄과 19개의 세로줄이 그려져 있는데
/// 가로줄은 위에서부터 아래로 1번, 2번, ..., 19번의 번호가 붙고
/// 세로줄은 왼쪽에서부터 오른쪽으로 1번, 2번, ... 19번의 번호가 붙는다.
/// 
/// 위의 그림에서와 같이 같은 색의 바둑알이 연속적으로 다섯 알을 놓이면 그 색이 이기게 된다.
/// 여기서 연속적이란 가로, 세로 또는 대각선 방향 모두를 뜻한다.
/// 즉, 위의 그림은 검은색이 이긴 경우이다.
/// 하지만 여섯 알 이상이 연속적으로 놓인 경우에는 이긴 것이 아니다.
/// 
/// 입력으로 바둑판의 어떤 상태가 주어졌을 때, 검은색이 이겼는지,
/// 흰색이 이겼는지 또는 아직 승부가 결정되지 않았는지를 판단하는 프로그램을 작성하시오.
/// 단, 검은색과 흰색이 동시에 이기거나 검은색 또는 흰색이 두 군데 이상에서 동시에 이기는 경우는 입력으로 들어오지 않는다.
///
/// 입력 형식
/// 19줄에 각 줄마다 19개의 숫자로 표현되는데, 검은 바둑알은 1, 흰 바둑알은 2, 알이 놓이지 않는 자리는 0으로 표시되며,
/// 숫자는 한 칸씩 띄어서 표시된다.
/// 
/// 출력 형식
/// 첫줄에 검은색이 이겼을 경우에는 1을, 흰색이 이겼을 경우에는 2를, 아직 승부가 결정되지 않았을 경우에는 0을 출력한다.
/// 검은색 또는 흰색이 이겼을 경우에는 둘째 줄에 연속된 다섯 개의 바둑알 중에서 가장 왼쪽에 있는 바둑알(연속된 다섯 개의
/// 바둑알이 세로로 놓인 경우, 그 중 가장 위에 있는 것)의 가로줄 번호와, 세로줄 번호를 순서대로 출력한다.
///
/// 입력 예
/// 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
/// 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
/// 0 1 2 0 0 2 2 2 1 0 0 0 0 0 0 0 0 0 0
/// 0 0 1 2 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0
/// 0 0 0 1 2 0 0 0 0 0 0 0 0 0 0 0 0 0 0
/// 0 0 0 0 1 2 2 0 0 0 0 0 0 0 0 0 0 0 0
/// 0 0 1 1 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0
/// 0 0 0 0 0 0 2 1 0 0 0 0 0 0 0 0 0 0 0
/// 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
/// 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
/// 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
/// 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
/// 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
/// 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
/// 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
/// 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
/// 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
/// 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
/// 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
/// 
/// 출력 예
/// 1
/// 3 2
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=1006&sca=1960
/// </summary>
void FiveInARow::Code()
{
	const int CHECK_RIGHT_UP = 1 << 2;
	const int CHECK_RIGHT = 1 << 3;
	const int CHECK_DOWN = 1 << 4;
	const int CHECK_RIGHT_DOWN = 1 << 5;

	int** arr = new int* [19];
	for (int i = 0; i < 19; i++)
	{
		arr[i] = new int[19];
		std::fill_n(arr[i], 19, 0);
	}

	for (int i = 0; i <= 18; i++)
	{
		for (int j = 0; j <= 18; j++)
		{
			std::cin >> arr[i][j];
		}
	}

	bool hasWinner{ false };

	for (int y = 0; y <= 18; y++)
	{
		for (int x = 0; x <= 14; x++)
		{
			int num{ GetNumberAtCoord(arr, x, y) };

			if (num == 0)
			{
				continue;
			}

			if (y >= 4 && !IsAlreadyChecked(arr, x, y, CHECK_RIGHT_UP))
			{
				hasWinner |= CheckDirection(arr, num, x, y, 1, -1, CHECK_RIGHT_UP);
			}
			if (!IsAlreadyChecked(arr, x, y, CHECK_RIGHT))
			{
				hasWinner |= CheckDirection(arr, num, x, y, 1, 0, CHECK_RIGHT);
			}
			if (y <= 14 && !IsAlreadyChecked(arr, x, y, CHECK_DOWN))
			{
				hasWinner |= CheckDirection(arr, num, x, y, 0, 1, CHECK_DOWN);
			}
			if (y <= 14 && !IsAlreadyChecked(arr, x, y, CHECK_RIGHT_DOWN))
			{
				hasWinner |= CheckDirection(arr, num, x, y, 1, 1, CHECK_RIGHT_DOWN);
			}

			if (hasWinner)
			{
				std::cout << num << '\n';
				std::cout << y + 1 << ' ' << x + 1;
				return;
			}
		}
	}

	if (!hasWinner)
	{
		std::cout << 0;
	}

	for (int i = 0; i < 19; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}

int FiveInARow::GetNumberAtCoord(int** arr, int x, int y)
{
	if ((arr[y][x] & 0x1) == 1) return 1;
	if ((arr[y][x] & 0x2) == 2) return 2;
	return 0;
}

bool FiveInARow::IsAlreadyChecked(int** arr, int x, int y, const int checkVal)
{
	return (arr[y][x] & checkVal) == checkVal;
}

bool FiveInARow::CheckDirection(int** arr, int num, int xBeg, int yBeg,
	int xInc, int yInc, const int checkVal)
{
	int count{ 1 };
	int x{ xBeg }, y{ yBeg };

	do
	{
		x += xInc;
		y += yInc;

		if (GetNumberAtCoord(arr, x, y) != num)
		{
			break;
		}

		count++;
	} while (!IsEdge(x, y, yInc));

	if (count == 5)
	{
		return true;
	}

	while (true)
	{
		arr[yBeg][xBeg] |= checkVal;

		xBeg += xInc;
		yBeg += yInc;

		if (xInc != 0 && xBeg == x || yInc != 0 && yBeg == y)
		{
			break;
		}
	}

	return false;
}

bool FiveInARow::IsEdge(int x, int y, int yInc)
{
	if (x == 18) return true;
	if (yInc == -1 && y == 0) return true;
	if (yInc == 1 && y == 18) return true;
	return false;
}