#include "BasicLoop301.h"

/// <summary>
/// 문제
/// 자연수 n을 입력받고 1부터 홀수를 차례대로 더해나가면서 합이 n 이상이면 그 때까지 더해진 홀수의 개수와
/// 그 합을 출력하는 프로그램을 작성하시오.
///
/// 입력 예
/// 100
/// 
/// 출력 예
/// 10 100
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=186&sca=1080
/// </summary>
void BasicLoop301::Code()
{
	int n;

	std::cin >> n;

	int sum{ 0 }, count{ 0 }, num{ 1 };

	for (int num = 1; sum < n; num += 2)
	{
		sum += num;
		count++;
	}

	std::cout << count << ' ' << sum;
}