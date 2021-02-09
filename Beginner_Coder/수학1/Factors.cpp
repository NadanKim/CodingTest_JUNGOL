﻿#include "Factors.h"

/// <summary>
/// 문제
/// 한 개의 정수를 입력받아 입력받은 정수의 약수를 모두 출력하는 프로그램을 작성하시오.
///
/// 입력 형식
/// 정수 N이 주어진다. (2 ≤ N ≤ 21억)
/// 
/// 출력 형식
/// N의 약수를 작은 수부터 차례로 모두 출력한다.
///
/// 입력 예
/// 24
///
/// 출력 예
/// 1 2 3 4 6 8 12 24
/// 
/// Hint!
/// 코드1
/// for (i = 1; i <= N; i++)
/// {
///     if (N % i == 0)
///     {
///         printf("%d ", i);
///     }
/// }
/// 
/// 코드분석 
/// 1부터 N까지 N의 약수인지 모두 확인하여 출력하는 프로그램이다.
/// 그런데 위와 같이 작성하면 N이 21억이 입력이 되었을 때 1부터 21억까지 21억개의 수를 확인해 보아야 한다.당연히 시간초과의 위험이 있으니
/// 프로그램을 수정하여 시간을 줄여보도록 하자.
/// 
/// 코드2
/// int sq; // N의 제곱근을 저장하기 위해
/// int arr[10000], cnt=0; // N의 약수를 저장하기 위해
/// scanf("%d", &N);
/// sq = (int)sqrt(N); // N의 제곱근을 구하여 sq에 저장한다.
/// for (i = 1; i <= sq; i++)
/// {
///     if (N % i == 0)
///     {
///         arr[cnt++] = i; // 작은수 저장
///         if (N / i != i)
///             arr[cnt++] = N / i; // 큰수 저장 (작은수와 같지 않을 경우)
///     }
/// }
/// // 이 부분에는 arr배열에 저장된 값을 정렬하여 모두 출력하도록 스스로 작성해보자.
/// 
/// 코드분석 
/// 위 프로그램은 N의 제곱근까지만 반복문을 실행해서 모든 약수를 구하는 프로그램이다.
/// 만약 N이 100이라고 가정하고 100의 약수를 모두 구해보면 1 * 100 = 100 2 * 50 = 100 4 * 25 = 100 5 * 20 = 100 10 * 10 = 100 위와 같이
/// 성립하므로 100의 약수는 1 2 4 5 10 20 25 50 100 이렇게 9개가 된다.그런데 2가 100의 약수라는 것을 알게 된 순간 50이라는 약수도 구할 수 있게 된다.
/// 즉, a * b = 100일 경우 a를 알게 되면 b를 구할 수 있다는 것이다.그러므로 두 수의 곱이 N일 경우 그 두 수는 N의 약수이며 두 수중
/// 작은 수의 범위는 1~(루트100)이하가 된다.
/// 
/// 위의 경우 10 * 10 = 100 이므로 10 이상의 수는 두 수의 곱으로 나타낼 경우 큰 수에 해당하므로 작은 수를 저장할 때 함께 저장이 되어 있는 것이다.
/// 
/// 04 : sqrt는 제곱근을 구하는 함수이며 double형으로 리턴되므로(int)를 붙여서 정수형으로 변환한 것이다.
/// 08 : N이 100일 때 i가 10이면 작은 수와 큰 수가 모두 10이므로 작은 수 한 번만 저장하면 된다.
/// 05 : 1부터 N의 제곱근까지 반복한다.
/// 
/// 제곱근을 구하는 것이 번거롭다면 부등호의 양변을 제곱하여 아래와 같이 작성해도 된다.
/// for (i = 1; i * i <= N; i++)
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=450&sca=2030
/// </summary>
void Factors::Code()
{
	int n;

	std::cin >> n;

	vector<int> factors;

	for (int i = 1; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			factors.push_back(i);
			if (n / i != i)
			{
				factors.push_back(n / i);
			}
		}
	}

	std::sort(factors.begin(), factors.end());

	for (int& factor : factors)
	{
		std::cout << factor << ' ';
	}
}