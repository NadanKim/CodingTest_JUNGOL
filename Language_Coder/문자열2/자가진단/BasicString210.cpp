#include "BasicString210.h"

/// <summary>
/// 문제
/// 20자 이하인 한 개의 문자열을 입력받아서 첫 줄에는 정수로 변환하여 2배한 값을 출력하고,
/// 다음 줄에는실수로 변환한 값을 반올림하여 소수 둘째자리까지 출력하는 프로그램을 작성하시오.
///
/// 입력 예
/// 50.1*34
/// 
/// 출력 예
/// 100
/// 50.10
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=248&sca=10f0
/// </summary>
void BasicString210::Code()
{
	string str;

	std::cin >> str;

	int index{ 0 };
	bool hasDot{ false };
	for (; index < str.size(); index++)
	{
		if (!isdigit(str[index]))
		{
			if (str[index] == '.' && !hasDot)
			{
				hasDot = true;
			}
			else
			{
				break;
			}
		}
	}

	str = str.substr(0, index);

	std::cout.precision(2);
	std::cout.setf(std::ios::fixed);

	std::cout << std::atoi(str.c_str()) * 2 << '\n';
	std::cout << std::atof(str.c_str());
}