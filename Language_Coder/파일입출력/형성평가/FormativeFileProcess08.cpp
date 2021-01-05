#include "FormativeFileProcess08.h"

/// <summary>
/// 문제
/// 첫째 줄에 정수 n(2≤n≤100)을 입력받고 다음 줄부터 n명 학생의 3과목 점수를 입력받아 평균을 구하여 점수가 높은 순으로
/// 출력하시오.단, 평균은 소수 둘째 자리에서 반올림하여 소수 첫째 자리까지 출력하시오.
/// 
/// * 표준입출력방식으로 작성하세요.
/// 
/// 입력 예
/// 5
/// 85 48 68
/// 73 55 89
/// 90 73 86
/// 63 90 100
/// 95 76 23
/// 
/// 출력 예
/// 84.3
/// 83.0
/// 72.3
/// 67.0
/// 64.7
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=112&sca=10i0
/// </summary>
void FormativeFileProcess08::Code()
{
	int n;

	std::cin >> n;

	double* arr = new double[n];

	double var1, var2, var3;
	for (int i = 0; i < n; i++)
	{
		std::cin >> var1 >> var2 >> var3;
		arr[i] = (var1 + var2 + var3) / 3;
	}

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				double temp{ arr[j] };
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	std::cout.precision(1);
	std::cout.setf(std::ios::fixed);

	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << '\n';
	}

	delete[] arr;
}