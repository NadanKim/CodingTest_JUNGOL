#include "BasicFunction101.h"

/// <summary>
/// 문제
/// 문자열 "~!@#$^&*()_+|" 를 출력하는 함수를 작성하고 정수를 입력받아 입력받은 수만큼 함수를 호출하는 프로그램을 작성하시오.
/// 
/// * 주의 : 문자열을 잘 확인하세요.
/// * 문자열을 복사해서 출력해도 됩니다.
///
/// 입력 예
/// 3
/// 
/// 출력 예
/// ~!@#$^&* ()_ + |
/// ~!@#$ ^ &*()_ + |
/// ~!@#$ ^ &*()_ + |
/// 
/// Hint!
/// [함수 개념](http://www.jungol.co.kr/bbs/download.php?bo_table=pds&wr_id=29&no=0)
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=208&sca=10b0
/// </summary>
void BasicFunction101::Code()
{
	int var;

	std::cin >> var;

	for (int i = 0; i < var; i++)
	{
		Function();
	}
}

void BasicFunction101::Function()
{
	std::cout << "~!@#$^&*()_+|\n";
}
