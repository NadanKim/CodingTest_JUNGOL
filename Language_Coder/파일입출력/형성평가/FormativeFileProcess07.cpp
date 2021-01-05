#include "FormativeFileProcess07.h"

/// <summary>
/// 문제
/// 시작 년도와 끝 년도를 입력받아서 윤년이 몇 번 있는지를 구하여 출력하시오.
/// 
/// * 표준입출력방식으로 작성하세요.
/// 
/// 입력 예
/// 2000 2008
/// 
/// 출력 예
/// 3
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=111&sca=10i0
/// </summary>
void FormativeFileProcess07::Code()
{
	int beg, end;

	std::cin >> beg >> end;

	int count{ 0 };
	while (beg <= end)
	{
		if (beg % 400 == 0)
		{
			count++;
		}
		else if (beg % 4 == 0 && beg % 100 != 0)
		{
			count++;
		}

		beg++;
	}

	std::cout << count;
}