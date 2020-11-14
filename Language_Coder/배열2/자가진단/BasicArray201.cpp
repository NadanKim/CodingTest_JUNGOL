#include "BasicArray201.h"

/// <summary>
/// 문제
/// 영문 대문자를 입력받다가 대문자 이외의 문자가 입력되면 입력을 중단하고
/// 영문 대문자들에 대하여 1번 이상 입력된 각 문자와 그 문자의 개수를 사전 순으로 출력하는 프로그램을 작성하시오.
///
/// 입력 예
/// A B C F F F B Z !
/// 
/// 출력 예
/// A : 1
/// B: 2
/// C : 1
/// F : 3
/// Z : 1
/// 
/// Hint!
/// C, C++ 사용자 힌트입니다.
/// 'A'는 0번 'B'는 1번 'C'는 2번 … 'Z'는 25번에 count 한다.
/// 'A'는 메모리에 65로 저장된다.
/// 따라서 입력받은 문자에서 65 또는 'A'를 빼면 해당문자의 개수를 저장할 번호가 된다.
/// ('B' - 65 = 1 또는 'B' - 'A' = 1) 1을 다시 'B'로 바꾸어 출력하려면 char(1 + 65) 또는 char(1 + 'A')를 출력하면 된다.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=201&sca=10a0
/// </summary>
void BasicArray201::Code()
{
	int arr[26]{};
	char ch;

	while (true)
	{
		std::cin >> ch;

		if ('Z' < ch || ch < 'A')
		{
			break;
		}

		arr[ch - 'A']++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (arr[i] > 0)
		{
			std::cout << static_cast<char>('A' + i) << " : " << arr[i] << '\n';
		}
	}
}