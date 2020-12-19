#include "BasicPointer06.h"

/// <summary>
/// 문제
/// 배열의 크기를 입력받아 입력받은 크기만큼 실수 배열을 생성하고 배열의 원소를 입력받은 후 입력받은 자료 및 합과 평균을 반올림하여
/// 소수 둘째자리까지 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 4
/// 15 23.6 100.35 0.388
/// 
/// 출력 예
/// 15.00 23.60 100.35 0.39
/// hap : 139.34
/// avg : 34.83
/// 
/// Hint!
/// 입력받은 값을 소수 둘째 자리까지 출력하는 것이고 합계와 평균은 입력 받은 값으로 계산 후 소수 둘째 자리까지 출력하는 것이다.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=261&sca=10h0
/// </summary>
void BasicPointer06::Code()
{
	int n;

	std::cin >> n;

	double* arr = new double[n];

	double sum{ 0 };
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
		sum += arr[i];
	}

	double avg{ sum / n };

	std::cout.precision(2);
	std::cout.setf(std::ios::fixed);

	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << ' ';
	}
	std::cout << '\n';

	std::cout << "hap : " << sum << '\n';
	std::cout << "avg : " << avg;

	delete[] arr;
}