#include "QuickSort.h"

/// <summary>
/// 문제
/// [퀵소트(Quick Sort)]
/// 퀵소트는 토니 호어(찰스 엔터니 리처드 호어 - Charles Antony Richard Hoare)가 개발한 알고리즘이다.
/// 원소들간의 비교와 교환을 통하여 정렬하는 비교기반정렬 알고리즘이다.
/// 원소들 중에 같은 값이 있는 경우 정렬후에 이들의 순서가 달라질 수 있어 불안정 정렬에 속한다.
/// ( 3을 피봇으로 하고 전통적인 방법으로 하는 예 51, 52, 3, 2, 1)
/// ( 22를 피봇으로 하고 아래 설명한 방법으로 하는 예 21, 3, 1, 22)  ​
/// N개의 데이터를 정렬할 때, ​시간복잡도는 ​평균 O(N * logN), 최악의 경우 O(N2) 이 소요된다.
/// 매 단계에서 적어도 1개의 원소가 자기 자리를 찾게 되므로 이후 정렬할 개수가 줄어든다.
/// 이때문에 비교정렬중에서는 비교적 빠른 시간복잡도를 보이며 퀵소트(빠른정렬)라는 이름의 기원이 되었다.
/// 분할정복 알고리즘의 좋은 예중에 하나이다.
/// 합병정렬과는 다르게 비대칭 분할이 이루어지며 분할과 정복 과정은 있으나 합병과정이 없다.
/// 
/// [퀵소트(오름차순) 알고리즘 프로세스]
/// 정렬할 배열을 A[], 구간의 시작 인덱스(배열번호)를 low, 끝 인덱스를 high 라고 하자.
/// 
/// 1. low >= high 라면 현재 구간은 정렬된것으로 본다.
/// 2. 분할(Divide) 과정 :
///    구간내의 임의의 원소를 pivot값으로 정한다. 여기서는 pivot = A[high]로 한다.
///    1) pivot 이하의 값들을 배열의 왼쪽에 pivot 이상의 값들을 오른쪽에 배치시킨다.
///    2) pivot 의 자리를 찾아준다.
///     * 분할 과정을 구현하는 여러가지 방법이 있으나 여기서는 다음과 같은 방법을 사용한다.
///       여기에서 다루는 방법은 비교적 모던한 방법으로 알려져 있으며
///       "쉽게 배우는 알고리즘" - 문병로 저-,   Khan Academy 의 "퀵 정렬"을 참조한 것이다.
///       (도움말의 링크페이지와 pdf파일을 참조하자.)
///       - pivot을 제외한 부분을 3개의 구간으로 나누어 처리한다.
///        (1) A[low] ~ A[i] : pivot보다 작거나 같은 값들로 이루어진 구간
///        (2) A[i + 1] ~ A[j] : pivot보다 크거나 같은 값들로 이루어진 구간
///        (3) A[j+1] ~ A[high - 1] : 아직 처리되지 않은 구간
///       - 이 과정을 의사코드로 작성해 보면 다음과 같다.
///         i = low-1;
///         for (j=low; j < high; j = j+1){
///             if ( A[j] < pivot) swap(A[ ++i], A[j]);
///         }
///         swap(A[++i], A[high]); /// pivot 자리찾기
/// 3. 정복(Conquer) 과정 :
///    pivot을 기준으로 왼쪽과 오른쪽을 재귀호출하여 정렬시킨다.
/// 
/// [퀵소트(오름차순) 의사코드]
/// quickSort(A[], low, high):
///         if low < high:
///             // divide process
///             i ← low-1
///             pivot = A[high]
///             for j ←​ low; j < high; j ←​ j+1:
///                 if  A[j] < pivot :
///                     swap(A[++i], A[j])
///      
///             swap(A[++i], A[high]) /// pivot 자리찾기​
///      
///             // output : 출력 구문 위치
///             
///             // conquer process
///             quickSort(A, low, i-1)
///             quickSort(A, i+1, high)
/// 
/// [문제]
/// N개의 정수를 입력받아 퀵소트의 단계별 결과를 출력하는 프로그램을 작성하시오. (10 <= N <= 1, 000)
/// 각 단계별로 분할 이후 배열 전체의 모습을 행으로 구분하여 출력한다.
///
/// 입력 형식
/// 첫 행에 N을 입력받는다.
/// 다음 행에 N개의 정수 ai를 입력받는다. (1 ≤ ai ≤ 10, 000)
/// 
/// 출력 형식
/// 퀵소트의 각 재귀호출에서 분할과정 이후 배열전체를 행으로 구분하여 출력한다.
///
/// 입력 예
/// 5
/// 5 2 4 1 3
///
/// 출력 예
/// 2 1 3 5 4 
/// 1 2 3 5 4
/// 1 2 3 4 5
/// 
/// Hint!
/// [퀵소트.pdf](http://www.jungol.co.kr/bbs/download.php?bo_table=pds&wr_id=22&no=3&page=7)
/// [QuickSort - Khan Academy](https://www.khanacademy.org/computing/computer-science/algorithms/quick-sort/a/overview-of-quicksort)
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=2858&sca=30
/// </summary>
void QuickSort::Code()
{
	int n;

	std::cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	DoQuickSort(arr, n, 0, n - 1);

	delete[] arr;
}

/// <summary>
/// 퀵 정렬을 이용해 주어진 배열을 정렬한다.
/// </summary>
/// <param name="arr">배열</param>
/// <param name="n">배열의 길이</param>
/// <param name="p">그룹의 시작 인덱스</param>
/// <param name="r">그룹의 끝 인덱스</param>
void QuickSort::DoQuickSort(int arr[], int n, int p, int r)
{
	if (p >= r)
	{
		return;
	}

	int q{ Partition(arr, p, r) };

	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << ' ';
	}
	std::cout << '\n';

	DoQuickSort(arr, n, p, q - 1);
	DoQuickSort(arr, n, q + 1, r);
}

/// <summary>
/// 배열을 가장 끝 값 기준으로 작은 것을 왼쪽으로, 큰 것을 오른쪽 그룹으로 나누고
/// 기준 값의 인덱스를 반환한다.
/// </summary>
/// <param name="arr">배열</param>
/// <param name="p">그룹의 시작 인덱스</param>
/// <param name="r">그룹의 끝 인덱스</param>
/// <returns>분할 후 기준 값 인덱스</returns>
int QuickSort::Partition(int arr[], int p, int r)
{
	int num{ arr[r] };
	int left{ p }, right{ p };

	while (right != r)
	{
		if (arr[right] < num)
		{
			Swap(arr, left, right);
			left++;
		}
		right++;
	}

	Swap(arr, left, r);

	return left;
}

/// <summary>
/// 주 인덱스의 값을 서로 바꾼다.
/// </summary>
/// <param name="arr">배열</param>
/// <param name="left">자리를 바꿀 인덱스1</param>
/// <param name="right">자리를 바꿀 인덱스2</param>
void QuickSort::Swap(int arr[], int left, int right)
{
	int temp{ arr[left] };
	arr[left] = arr[right];
	arr[right] = temp;
}