#include "BasicString104.h"

/// <summary>
/// 문제
/// 문자열을 입력받고 정수를 입력 받아서 문자열의 맨 뒤부터 정수만큼 출력하는 프로그램을 작성하시오.
/// 만약 입력받은 정수가 문자열의 길이보다 크다면 맨 뒤부터 맨 처음까지 모두 출력한다.
/// 
/// (문자열 길이는 최대 100자 이하이다.)
/// 
/// 입력 예
/// korea 3
/// 
/// 출력 예
/// aer
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=233&sca=10e0
/// </summary>
void BasicString104::Code()
{
	string str;
	size_t n;

	std::cin >> str >> n;

	std::reverse(str.begin(), str.end());

	if (n > str.size())
	{
		std::cout << str;
	}
	else
	{
		std::cout << str.substr(0, n);
	}
}