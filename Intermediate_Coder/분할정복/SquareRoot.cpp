#include "SquareRoot.h"

/// <summary>
/// 문제
/// 임의의 정수 N이 주어졌을 때 N의 양의 제곱근의 정수부분을 출력하는 프로그램을 작성하라.
/// 양의 제곱근이란 다음을 만족하는 수 X 를 뜻한다.
/// 
/// N = X2(X≥1)
/// 
/// [주의  !!!]
/// sqrt와 같은 함수를 사용하지 말아야 하며
/// stdio.h 와 iostream 등 입출력 헤더에 있는 함수만이 사용가능하다.
/// 이를 어길 경우 0점 처리한다.
///
/// 입력 형식
/// 입력에는 2^63-1 이하의 양의 정수 N이 입력된다
/// 
/// 출력 형식
/// N의 제곱근의 정수부분을 출력한다.
///
/// 입력 예	/// 입력 예
/// 8		/// 16
///
/// 출력 예	/// 출력 예
/// 2		/// 4
/// 
/// Hint!
/// hancomc@hotmail.net
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=523&sca=30
/// </summary>
void SquareRoot::Code()
{
	unsigned long long num;

	std::cin >> num;

	std::cout << GetSquareRoot(num);
}

unsigned long long SquareRoot::GetSquareRoot(unsigned long long num)
{
	unsigned long long x{ num };
	for (int i = 0; i < 100; i++)
	{
		x = (x + num / x) / 2;
	}
	return x;
}