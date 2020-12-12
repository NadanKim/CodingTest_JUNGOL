#include "FormativeString209.h"

/// <summary>
/// 문제
/// 정수, 실수, 문자열을 차례로 입력받아서 새로운 문자열에 출력한 후 전체의 길이를 2등분하여 출력하는 프로그램을 작성하시오.
/// 실수는 반올림하여 소수 셋째자리까지 출력하는 것으로 하고, 새로운 문자열의 길이가 홀수일 때는 첫 번째 줄에 한 개를 더 출력한다.
/// 각 문자열의 길이는 30자 이내이다.
///
/// 입력 예
/// 12345 5.0123 fighting
/// 
/// 출력 예
/// 123455.01
/// 2fighting
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=137&sca=10f0
/// </summary>
void FormativeString209::Code()
{
	int var1;
	double var2;
	string str;

	std::cin >> var1 >> var2 >> str;

	char buff[100];

	std::sprintf(buff, "%d%.3f%s", var1, var2, str.c_str());
	str = buff;

	bool isOdd{ str.size() % 2 == 1 };
	
	std::cout << str.substr(0, str.size() / 2 + (isOdd ? 1 : 0)) << '\n';
	std::cout << str.substr(str.size() / 2 + (isOdd ? 1 : 0));
}