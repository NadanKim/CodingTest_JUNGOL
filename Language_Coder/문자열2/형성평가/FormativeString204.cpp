#include "FormativeString204.h"

/// <summary>
/// 문제
/// 10 이하의 정수 n을 입력받고 n개의 문자열을 입력받은 후 그 크기를 비교하여 가장 작은 문자열부터 차례로 출력하는 프로그램을 작성하시오.
/// 문자열의 길이는 100자 이하다.사전순(아스키코드순)으로 뒤에 나오는 것을 큰 것으로 한다.
/// 
/// 입력 예
/// 3
/// notebook
/// pencil
/// eraser
/// 
/// 출력 예
/// eraser
/// notebook
/// pencil
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=92&sca=10f0
/// </summary>
void FormativeString204::Code()
{
	int n;

	std::cin >> n;

	string* arr = new string[n];

	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				string temp{ arr[j] };
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << '\n';
	}

	delete[] arr;
}