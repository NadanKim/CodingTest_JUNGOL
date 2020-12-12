#include "FormativeString201.h"

/// <summary>
/// 문제
/// 공백을 포함한 문자열을 입력받아 각 단어로 분리하여 문자열 배열에 저장한 후 입력순서의 반대 순서로 출력하는 프로그램을 작성하시오.
/// 문자열의 길이는 100자 이하이다.
/// 
/// 입력 예
/// C++ Programing jjang!!
/// 
/// 출력 예
/// jjang!!
/// Programing
/// C++
/// 
/// Hint!
/// [문장을 단어로 나누기](http://comkiwer.tistory.com/entry/C-CPP-%EA%B3%B5%EB%B0%B1%EC%9D%84-%ED%8F%AC%ED%95%A8%ED%95%9C-%EB%AC%B8%EC%9E%90%EC%97%B4-split%ED%95%98%EA%B8%B0?category=734118)
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=89&sca=10f0
/// </summary>
void FormativeString201::Code()
{
	char ch1, ch2;

	std::cin >> ch1 >> ch2;

	int var1{ static_cast<int>(ch1) };
	int var2{ static_cast<int>(ch2) };

	std::cout << var1 + var2 << ' ' << abs(var1 - var2);
}