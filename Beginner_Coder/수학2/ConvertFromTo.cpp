#include "ConvertFromTo.h"

/// <summary>
/// 문제
/// A진법 수 N을 입력 받아 B진법 수로 출력하는 프로그램을 작성하시오.
/// N에 사용되는 값은 0 ~9, A ~Z이다.
/// (2 ≤ A, B ≤​ 36) (0≤​ N≤​ 263 - 1)
///
/// 입력 형식
/// 입력은 100개 이하의 테스트 케이스가 행으로 구분하여 주어진다.
/// 테스트 케이스의 끝에는 0이 주어진다.
/// 각 테스트 케이스에는 세 수 A, N, B가 공백으로 구분되어 주어진다.
/// 
/// 출력 형식
/// 각 테스트 케이스에 대하여 A진법수 N을 B진법 수로 변환한 결과를 행으로 구분하여 출력한다.
///
/// 입력 예
/// 2 11010 8
/// 2 10110 10
/// 10 2543 16
/// 16 ABC 8
/// 0
///
/// 출력 예
/// 32
/// 22
/// 9EF
/// 5274
/// 
/// Hint!
/// 2진수 1101을 자리수별 가중치를 주어 10진수로 나타내면 아래와 같다. 
/// 1101 = 0 * 2^4 + 1 * 2^3 + 1 * 2^2 + 0 * 2^1 + 1 이므로
/// = (((0 * 2 + 1) * 2 + 1) * 2 + 0) * 2 + 1 과 같다.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=2375&sca=2040
/// </summary>
void ConvertFromTo::Code()
{
	int a, b;
	string n;

	while (true)
	{
		std::cin >> a;

		if (a == 0)
		{
			break;
		}

		std::cin >> n >> b;

		std::cout << FromDecimal(ToDecimal(n, a), b) << '\n';
	}
}

long long ConvertFromTo::ToDecimal(string n, int from)
{
	long long result{ 0 };
	long long multiple{ 1 };

	for (int i{ static_cast<int>(n.size()) - 1 }; i >= 0; i--)
	{
		if (n[i] - '0' > 9)
		{
			result += (n[i] - 'A' + 10) * multiple;
		}
		else
		{
			result += (n[i] - '0') * multiple;
		}

		multiple *= from;
	}

	return result;
}

string ConvertFromTo::FromDecimal(long long n, int to)
{
	if (n == 0)
	{
		return "0";
	}

	string result;

	while (n > 0)
	{
		long long temp{ n % to };
		if (temp < 10)
		{
			result += static_cast<char>('0' + temp);
		}
		else
		{
			result += static_cast<char>('A' + temp - 10);
		}
		n /= to;
	}

	return string(result.rbegin(), result.rend());
}