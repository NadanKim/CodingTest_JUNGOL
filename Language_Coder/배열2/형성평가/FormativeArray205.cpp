#include "FormativeArray205.h"

/// <summary>
/// 문제
/// 호석이네 학교는 6학년이 네 반이 있는데 각 반의 대표를 세 명씩 선발하여 제기차기 시합을 하였다.
/// 반별로 세 명이 제기를 찬 개수를 입력받아 각 반별로 제기를 찬 개수의 합계를 출력하는 프로그램을 작성하시오.
/// (반드시 배열을 이용하고 입력후에 출력하는 방식으로 하세요.)
/// 
/// 입력 예
/// 1class? 15 2 35
/// 2class? 33 1 6
/// 3class? 5 10 19
/// 4class? 1 8 55
/// 
/// 출력 예
/// 1class : 52
/// 2class : 40
/// 3class : 34
/// 4class : 64
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=64&sca=10a0
/// </summary>
void FormativeArray205::Code()
{
	int classScore[4][3];

	for (int i = 0; i < 4; i++)
	{
		std::cout << i + 1 << "class? ";
		std::cin >> classScore[i][0] >> classScore[i][1] >> classScore[i][2];
	}

	for (int i = 0; i < 4; i++)
	{
		int sum{ classScore[i][0] + classScore[i][1] + classScore[i][2] };

		std::cout << i + 1 << "class : " << sum << '\n';
	}
}