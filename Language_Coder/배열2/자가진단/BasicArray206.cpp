#include "BasicArray206.h"

/// <summary>
/// 문제
/// 5명 학생의 국어 영어 수학 과학 4과목의 점수를 입력 받아서 각 개인별로 평균이 80 이상이면“합격”
/// 그렇지 않으면“불합격”을 출력하고 합격한 사람의 수를 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 85 67 95 65
/// 80 95 86 56
/// 100 98 67 86
/// 95 76 84 65
/// 67 86 90 76
/// 
/// 출력 예
/// fail
/// fail
/// pass
/// pass
/// fail
/// Successful : 2
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=206&sca=10a0
/// </summary>
void BasicArray206::Code()
{
	int score[5][4];

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cin >> score[i][j];
		}
	}

	int avg[5]{};

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			avg[i] += score[i][j];
		}
		avg[i] /= 4;
	}

	int passCount{ 0 };

	for (int i = 0; i < 5; i++)
	{
		if (avg[i] >= 80)
		{
			std::cout << "pass\n";

			passCount++;
		}
		else
		{
			std::cout << "fail\n";
		}
	}

	std::cout << "Successful : " << passCount;
}