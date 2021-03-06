﻿#include "FormativeString207.h"

/// <summary>
/// 문제
/// 두 개의 문자열을 입력받아 앞에서부터 정수로 변환 가능한 부분을 변환한 후 두 수의 곱을 출력하는 프로그램을 작성하시오.
/// 각 문자열의 길이는 100이하이다.
///
/// 입력 예
/// 123.45  67@12 
/// 
/// 출력 예
/// 8241
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=115&sca=10f0
/// </summary>
void FormativeString207::Code()
{
	string str1, str2;

	std::cin >> str1 >> str2;

	int var1{ 0 };

	for (int i = 0; i < static_cast<int>(str1.size()); i++)
	{
		if (std::isdigit(str1[i]))
		{
			var1 = var1 * 10 + (str1[i] - '0');
		}
		else
		{
			break;
		}
	}

	int var2{ 0 };

	for (int i = 0; i < static_cast<int>(str2.size()); i++)
	{
		if (std::isdigit(str2[i]))
		{
			var2 = var2 * 10 + (str2[i] - '0');
		}
		else
		{
			break;
		}
	}

	std::cout << var1 * var2;
}