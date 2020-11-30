#include "FormativeFunction206.h"

/// <summary>
/// 문제
/// 자료의 개수 7을 매크로 상수로 정의하여 자료의 개수만큼 정수를 입력받아 입력받은 순서대로 앞에서부터 마지막까지 가면서
/// 바로 뒤의 숫자와 비교하여 크면 교환한다.이러한 작업을 세 번 반복한 후 그 결과를 하나의 행에 공백으로 구분하여 출력하는
/// 프로그램을 작성하시오.
/// 
/// 입력 예
/// 15 20 41 8 26 33 19
/// 
/// 출력 예
/// 8 15 20 19 26 33 41
/// 
/// Hint!
/// 버블정렬에서 i를 N-1부터 N-3까지 3번 실행하면 된다.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=80&sca=10c0
/// </summary>
void FormativeFunction206::Code()
{
	int arr[N];

	for (int i = 0; i < N; i++)
	{
		std::cin >> arr[i];
	}

	Function(arr);
}

void FormativeFunction206::Function(int arr[])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < N - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp{ arr[j] };
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		std::cout << arr[i] << ' ';
	}
}