#include "Lotto.h"

/// <summary>
/// 문제
/// 로또에서는 {1, 2, 3, ... , 48, 49} 번호 중에 6개를 선택해야 한다.
/// 로또 번호를 선택하는 데는 여러 가지 전략이 있겠지만 우리는 49개의 수 중에서 K(6 < K < 13)개가 이미 선택되어 있다고 가정하고
/// 이 선택된 수들로 만들 수 있는 로또 번호를 만들어 보기로 한다.
/// 
/// 예를 들어 K = 8이고 선택된 수들의 집합 S = { 1,2,3,5,8,13,21,34 } 라고 할 때,
/// 가능한 로또 번호는[1, 2, 3, 5, 8, 13], [1, 2, 3, 5, 8, 21], [1, 2, 3, 5, 8, 34], [1, 2, 3, 5, 13, 21], ...[3, 5, 8, 13, 21, 34].로 28개가 있다.
/// 
/// 수의 개수 K와 K개의 수가 주어질 때 가능한 로또 번호를 출력하는 프로그램을 작성하시오.
///
/// 입력 형식
/// 하나의 행에 정수가 주어진다. 첫 수는 수의 개수 K(6 < K <13) 이다.
/// 이어서 공백으로 구분하여 K개의 자연수 Si(1≤ Si ≤ 49)가 오름차순으로 정렬되어 주어진다.
/// 
/// 출력 형식
/// 주어진 K개의 수로 만들 수 있는 가능한 로또 번호를 행으로 구분하여 출력한다.
/// 각 행의 수들과, 행으로 구분된 로또 번호들은 오름차순으로 출력되어야 한다.
///
/// 입력 예
/// 7 1 2 3 4 5 6 7
///
/// 출력 예
/// 1 2 3 4 5 6
/// 1 2 3 4 5 7
/// 1 2 3 4 6 7
/// 1 2 3 5 6 7
/// 1 2 4 5 6 7
/// 1 3 4 5 6 7
/// 2 3 4 5 6 7
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=2082&sca=2080
/// </summary>
void Lotto::Code()
{
	int k;

	std::cin >> k;

	int* arr = new int[k];

	for (int i = 0; i < k; i++)
	{
		std::cin >> arr[i];
	}

	int numbers[6];

	FindLottoNumbers(arr, k, numbers);

	delete[] arr;
}

void Lotto::FindLottoNumbers(int arr[], int k, int numbers[], int depth)
{
	if (depth >= 6)
	{
		for (int i = 0; i < 6; i++)
		{
			std::cout << numbers[i] << ' ';
		}
		std::cout << '\n';
		return;
	}

	for (int i = 0; i <= k - 6; i++)
	{
		if (depth == 0 || arr[depth + i] > numbers[depth - 1])
		{
			numbers[depth] = arr[depth + i];
			FindLottoNumbers(arr, k, numbers, depth + 1);
		}
	}
}