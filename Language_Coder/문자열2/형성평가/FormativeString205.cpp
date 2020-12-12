#include "FormativeString205.h"

/// <summary>
/// 문제
/// 5개의 단어(각 단어는 100자 이하)를 입력받은 후 문자와 문자열(100자 이하)을 한 개씩 입력받아 나중에 입력받은 문자나 문자열이
/// 포함된 단어를 모두 출력하는 프로그램을 작성하시오.
/// 찾는 단어가 없으면 “none”이라고 출력한다.
/// 
/// 입력 예
/// banana
/// apple
/// melon
/// tomato
/// pear
/// n
/// to
/// 
/// 출력 예
/// banana
/// melon
/// tomato
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=93&sca=10f0
/// </summary>
void FormativeString205::Code()
{
	string str1, str2;

	std::cin >> str1 >> str2;

	size_t result{ str1.size() > str2.size() ? str1.size() : str2.size() };

	std::cout << result;
}