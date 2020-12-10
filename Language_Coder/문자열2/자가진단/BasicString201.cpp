#include "BasicString201.h"

/// <summary>
/// 문제
/// 5개의 단어를 입력받아 모든 단어를 입력받은 역순으로 출력하는 프로그램을 작성하시오.
/// 각 단어의 길이는 30이하이다.
///
/// 입력 예
/// dog
/// cat
/// chick
/// calf
/// goat
///
/// 출력 예
/// goat
/// calf
/// chick
/// cat
/// dog
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=239&sca=10f0
/// </summary>
void BasicString201::Code()
{
	string arr[5];

	for (int i = 0; i < 5; i++)
	{
		std::cin >> arr[i];
	}

	for (int i = 4; i >= 0; i--)
	{
		std::cout << arr[i] << '\n';
	}
}