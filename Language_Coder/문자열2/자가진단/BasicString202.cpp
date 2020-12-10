#include "BasicString202.h"

/// <summary>
/// 문제
/// 공백을 포함한 문장을 입력 받아서 홀수 번째 단어를 차례로 출력하는 프로그램을 작성하시오.
/// 문장의 길이는 100자 이하이다.
///
/// 입력 예
/// I like you better than him.
/// 
/// 출력 예
/// I
/// you
/// than
/// 
/// Hint!
/// [문장을 단어로 나누기](http://comkiwer.tistory.com/entry/C-CPP-%EA%B3%B5%EB%B0%B1%EC%9D%84-%ED%8F%AC%ED%95%A8%ED%95%9C-%EB%AC%B8%EC%9E%90%EC%97%B4-split%ED%95%98%EA%B8%B0?category=734118)
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=240&sca=10f0
/// </summary>
void BasicString202::Code()
{
	string str;

	std::getline(std::cin, str);

	int index{ 1 };
	string word;
	for (stringstream ss{ str }; ss >> word; index++)
	{
		if (index % 2 == 1)
		{
			std::cout << word << '\n';
		}
	}
}