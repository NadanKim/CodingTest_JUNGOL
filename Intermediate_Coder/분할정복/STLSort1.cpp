﻿#include "STLSort1.h"

/// <summary>
/// 문제
/// 우리는 지금까지 여러가지 정렬법을 배워왔다.
/// 정렬법에는 선택 정렬, 버블 정렬, 삽입 정렬, 퀵 정렬, 합병 정렬 등이 있다.
/// 하지만 배열을 정렬할 필요가 생길 때마다 위의 방법을 손으로 구현하는 것은 지루한 작업일 뿐더러,
/// 손으로 코딩하다 보니깐 구현 중에 실수할 확률도 높아진다.
/// 
/// 여러분들의 코딩능력 향상을 위해 지금까지는 숨겨왔지만,
/// 사실 C++에는 크기 비교가 가능한 형식으로 선언된 배열을 정렬해주는 친절한 함수가 존재한다.바로 sort()함수이다.
/// 
/// 여기에서 크기 비교가 가능한 형식은 int나 double처럼 부등호를 사용하여 대소판별이 가능한 자료형을 뜻한다.
/// 간단하게 예를 들자면, 3 < 5는 1(참)이라는 결과값이 명확하게 나오므로, int형식은 대소판별이 가능한 자료형이다.
/// 
/// 이 문제에서는 간단하게 sort()함수의 사용법을 알아보도록 하자.
/// 
/// 사용방법 예시
/// #include <stdio.h>
/// #include <algorithm>  // ⓐ
/// using namespace std; // ⓐ
/// 
/// int main()
/// {
///     int i;
///     int arr[8] = { 1,9,9,4,1,1,0,8 };
/// 
///     sort(arr + 0, arr + 8); // ⓑ
/// 
///     for (i = 0; i < 8; i++) {
///         printf("%d ", arr[i]);
///     }
/// 
///     return 0;
/// }
/// 
/// 실행결과
/// 0 1 1 1 4 8 9 9
/// 
/// 예시 코드에서
/// ⓐ로 표시된 두 문장은 sort() 함수를 쓰기 위해 필요한 헤더파일 선언이다. <stdio.h>를 처음 배울 때 처럼, "아 그렇구나" 하면 되는 부분이다.
/// ⓑ로 표시된 sort()함수를 잘 보면 생소한 형식으로 써 있다는걸 알 수 있다.사용법은 구체적으로 다음과 같다.
/// 
/// sort(배열이름 + 시작위치, 배열이름 + 끝위치); ​
/// 
/// 여기에서 시작위치(arr[0])에는 자료가 저장되어 있지만,
/// 끝위치(arr[8])에는 자료가 없다는 것에 주의하라.
/// 즉, sort 함수의 가동범위는 인덱스 0부터 7까지가 된다.
/// 
/// 정리하자면, 이 경우에 sort 함수는 arr이라는 배열의 0번부터 7번까지의 원소를 오름차순으로 정렬한다.
/// (당연하겠지만, arr + 0의 경우 + 0을 생략하고, arr만 써도 상관 없다 : sort(arr, arr + 8); )
/// 
/// 이제 아래 문제를 읽고 풀어보자
/// 
/// 크기가 N인 배열을 입력받아서
/// 
/// 1. 특정 구간을 정렬한 후, 출력하고,
/// 2. 다시 전체를 정렬한 후 출력하는 프로그램을 작성하시오.
///
/// 입력 형식
/// 첫째 줄에 배열의 크기인 N이 주어진다.
/// 둘째 줄에 배열의 원소들인 a0, a1, ... aN - 1이 공백을 사이에 두고 주어진다.
/// 셋째 줄에 s e가 주어진다.이는 첫 번째 정렬에서는 배열의 원소 중 인덱스가 s이상 e이하인 원소들만 정렬하라는 뜻이다.
/// (e미만이 아님에 주의한다.)
/// 즉 as, as + 1, ...ae - 1, ae만을 정렬한다.
/// 
/// 제약사항
/// 
/// 3≤​N≤100, 000, 0≤​s≤​e < N, 0≤​ai≤​109
/// 
/// 출력 형식
/// 첫째 줄엔 인덱스가 s이상 e이하인 원소들만 오름차순으로 정렬한 결과를 출력한다.
/// 둘째 줄에 배열 전체를 오름차순 정렬한 결과를 출력한다.
/// 
/// 반드시 방금 배운 sort()함수를 사용하도록 한다.
///
/// 입력 예
/// 8
/// 1 9 9 4 1 1 0 8
/// 3 6
///
/// 출력 예
/// 1 9 9 0 1 1 4 8
/// 0 1 1 1 4 8 9 9
///
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=3882&sca=30
/// </summary>
void STLSort1::Code()
{
	int n;
	std::cin >> n;

	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	int s, e;
	std::cin >> s >> e;

	PrintSortedArr(arr, n, s, e);
	PrintSortedArr(arr, n);

	delete[] arr;
}

/// <summary>
/// 배열의 원하는 부분을 정렬하고 전체 배열을 출력한다.
/// </summary>
/// <param name="arr">배열</param>
/// <param name="n">배열의 길이</param>
/// <param name="s">정렬 시작 인덱스</param>
/// <param name="e">정렬 끝 인덱스</param>
void STLSort1::PrintSortedArr(int arr[], int n, int s, int e)
{
	if (e == 0)
	{
		e = n - 1;
	}

	std::sort(arr + s, arr + e + 1);

	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << ' ';
	}
	std::cout << '\n';
}