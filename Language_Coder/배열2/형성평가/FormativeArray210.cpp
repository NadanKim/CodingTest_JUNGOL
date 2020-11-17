#include "FormativeArray210.h"

/// <summary>
/// 문제
/// 3행 5열의 2차원 문자배열 형태의 대문자들을 입력 받은 후 소문자로 바꾸어서 공백으로 구분하여 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// A B C D E
/// F G H I J
/// K L M N O
/// 
/// 출력 예
/// a b c d e
/// f g h i j
/// k l m n o
/// 
/// Hint!
/// 대문자 A는 65로 저장되고 소문자 a는 97로 저장된다. 즉 소문자는 대문자보다 32가 더 크다.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=69&sca=10a0
/// </summary>
void FormativeArray210::Code()
{
	char arr[3][5];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			std::cin >> arr[i][j];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr[i][j] = arr[i][j] - 'A' + 'a';
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			std::cout << arr[i][j] << ' ';
		}
		std::cout << '\n';
	}
}