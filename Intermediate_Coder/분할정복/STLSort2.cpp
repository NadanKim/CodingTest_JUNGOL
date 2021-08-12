#include "STLSort2.h"

/// <summary>
/// 문제
/// 이전 시간에는 배열을 오름차순으로 정렬하는 함수인 sort()에 대하여 알아보았다.
/// 이번 시간에는 내림차순으로 정렬하는 방법을 배워 보자.
/// 
/// 방법 1. reverse() 함수 사용.
/// #include <stdio.h>
/// #include <algorithm>
/// using namespace std;
/// 
/// int main()
/// {
/// 	int i;
/// 	int arr[8] = { 1,9,9,4,1,1,0,8 };
/// 
/// 	sort(arr + 0, arr + 8);
/// 	reverse(arr + 0, arr + 8);
/// 
/// 	for (i = 0; i < 8; i++)
/// 		printf("%d ", arr[i]);
/// 
/// 	return 0;
/// }
/// 실행결과
/// 9 9 8 4 1 1 1 0
/// 
/// reverse() 함수는 "뒤집다" 라는 뜻에 맞게, 배열의 앞뒤를 뒤집어 주는 함수이다.
/// 따라서 sort()함수를 호출하여 오름차순 정렬한 후, reverse()함수를 호출하면 앞뒤로 뒤집히므로 내림차순 정렬이 된다.
/// 
/// 방법 2. compare 함수 작성
/// 
/// sort()함수는 무작정 크기가 작은 자료를 앞으로 보낸다.
/// compare 함수는 두 자료가 주어지면, 크기가 작은 경우에 true를 리턴하게 해주는 함수이다.
/// compare 함수를 만들면서, 실제로는 큰 값일 때, true를 리턴하게 만들면, 컴퓨터는 값이 큰 자료를 "작다"라고 생각해버려서 맨 앞으로 보내게 된다.
/// 
/// compare 함수의 사용법을 익혀보도록 하자.
/// #include <stdio.h>
/// #include <algorithm>
/// using namespace std;
/// 
/// bool compare(int x, int y)
/// {
/// 	return x > y;
/// }
/// 
/// int main()
/// {
/// 	int i;
/// 	int arr[8] = { 1,9,9,4,1,1,0,8 };
/// 
/// 	sort(arr + 0, arr + 8, compare);
/// 
/// 	for (i = 0; i < 8; i++)
/// 		printf("%d ", arr[i]);
/// 
/// 	return 0;
/// }
/// 
/// 실행결과
/// 9 9 8 4 1 1 1 0
/// 
/// compare 함수는 x값이 y값보다 큰 경우 참을 리턴하는 함수임이 자명하다. (bool 자료형은 참 또는 거짓을 저장하는 자료형이다.)
/// 이를 sort() 함수의 세 번째 인자로 넣어주게 되면, 정렬 과정에서 대소비교를 할 때마다 compare 함수를 호출하게 되고, x값보다 y값이 작다고 "생각하게" 되면 x값을 앞으로 보내게 된다.
/// 즉 실제로는 x값이 y값보다 큰 경우에 true를 리턴하므로, 그런 경우에 x를 y보다 앞으로 보내게 되는 것이다.
/// 
/// 이제 아래 문제를 풀어보도록 하자.
/// 
/// 크기 N의 정수 배열을 입력 받아서, 내림차순으로 정렬하는 프로그램을 작성하라.
/// 시간이 있다면, 두 가지 방법을 다 시도해보도록 한다.
///
/// 입력 형식
/// 첫 줄에 배열의 크기 N이 주어진다.(1≤​N≤​100,000)
/// 둘째 줄에 각 배열의 값인 ai가 순서대로 주어진다.(1≤​​ai≤​​109)
/// 
/// 출력 형식
/// 입력받은 배열을 내림차순 정렬하여 출력한다.
/// 가능하다면 위에 설명된 두 가지 방법을 각각 사용해서 두 번 채점받아 본다.
///
/// 입력 예
/// 7
/// 1 5 1 6 3 9 4
///
/// 출력 예
/// 9 6 5 4 3 1 1
/// 
/// Hint!
/// compare 함수는 다음과 같이 참조형으로 작성하여 호출하는 것이 시간적으로 더 효율적이다.
/// (메모리 복사가 안 일어나기 때문)
/// bool compare(int& x, int& y)
/// {
/// 	return x > y;
/// }
///
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=3883&sca=30
/// </summary>
void STLSort2::Code()
{
	int n;
	std::cin >> n;

	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	SortDesc(arr, n);

	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << ' ';
	}

	delete[] arr;
}

/// <summary>
/// 주어진 배열을 내림차순으로 정렬한다.
/// </summary>
/// <param name="arr">배열</param>
/// <param name="n">배열의 길이</param>
void STLSort2::SortDesc(int arr[], int n)
{
	std::sort(arr, arr + n);
	std::reverse(arr, arr + n);
}