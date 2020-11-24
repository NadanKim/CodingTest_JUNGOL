#include "FormativeFunction105.h"

/// <summary>
/// 문제
/// 3명 학생의 3과목 점수를 입력받아 각 과목별 학생별 총점을 출력하는 구조화된 프로그램을 작성하시오.
/// 
/// 입력 예
/// 50 80 100
/// 96 88 66
/// 100 85 90
/// 
/// 출력 예
/// 50 80 100 230
/// 96 88 66 250
/// 100 85 90 275
/// 246 253 256 755
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=74&sca=10b0
/// </summary>
void FormativeFunction105::Code()
{
	int score[3][3]{};

	for (int i = -0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cin >> score[i][j];
		}
	}

	Function(score);
}

void FormativeFunction105::Function(int score[3][3])
{
	int sumScore[4][4]{};

	for (int i = -0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sumScore[i][j] = score[i][j];
			sumScore[i][3] += score[i][j];
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sumScore[3][i] += sumScore[j][i];
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << sumScore[i][j] << ' ';
		}
		std::cout << '\n';
	}
}