#include "BasicFunction203.h"

/// <summary>
/// 문제
/// 두 개의 정수를 입력받아 절대값이 더 큰 수를 출력하고 두 개의 실수를 입력받아 절대값이 작은 수를 출력하는 프로그램을 작성하시오.
/// 실수는 소수점 이하 2자리까지 출력한다.
/// 
/// 입력 예
/// -50 40
/// - 12.34 5.67
/// 
/// 출력 예
/// -50
/// 5.67
///
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=218&sca=10c0
/// </summary>
void BasicFunction203::Code()
{
	int a, b;

	std::cin >> a >> b;

	int big{ Function<int>(a) > Function<int>(b) ? a : b };

	std::cout << big << '\n';

	float c, d;

	std::cin >> c >> d;

	float small{ Function<float>(c) < Function<float>(d) ? c : d };

	std::cout.precision(2);
	std::cout.setf(std::ios::fixed);

	std::cout << small;
}

template <typename T>
T BasicFunction203::Function(T var)
{
	var = (var < 0 ? -var : var);

	return var;
}