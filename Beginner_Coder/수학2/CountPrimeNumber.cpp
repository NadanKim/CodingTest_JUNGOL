#include "CountPrimeNumber.h"

/// <summary>
/// 문제
/// 소수(prime number)란 1보다 큰 자연수 중 1과 자기 자신 두 개만을 약수로 갖는 수를 말한다.
/// 자연수 M과 N을 입력받아 M부터 N까지 소수의 개수를 구하여 출력하는 프로그램을 작성하시오.
///
/// 입력 형식
/// 자연수 M과 N이 공백으로 구분되어 주어진다. (1 ≤ M ≤ N ≤ 2,000,000)
/// 
/// 출력 형식
/// M이상 N이하의 자연수 중 소수가 몇 개인지 구하여 출력한다.
///
/// 입력 예
/// 10 100
///
/// 출력 예
/// 21
/// 
/// Hint!
/// 코드1
/// int prime(int x)
/// {
/// 	int i;
/// 
/// 	for (i = 2; i * i <= x; i++)
/// 	{
/// 		if (x % i == 0)
/// 			return 0; // 약수가 확인되면 소수가 아니므로 0을 리턴한다. 
/// 	}
/// 	return 1; // 범위내에 약수가 없으면 소수이므로 1을 리턴한다. 
/// }
/// 
/// int main() {
/// 	...
/// 		for (i = s; i <= e; i++) {
/// 			cnt += prime(i); //만약 i가 소수이면 1이 리턴되므로 cnt를 1 증가시킨다. 
/// 		}
/// 	printf("%d\n", cnt);
/// 	...
/// }
/// 
/// 코드분석 
/// 앞에서 배운 방법으로 범위내의 모든 수들이 소수인지 아닌지 확인하여 소수의 개수를 누적하여 출력하는 프로그램이다.
/// 이 코드의 시간복잡도는 O(N)으로 비록 많이 줄이긴 했지만 최대값이 입력되면 여전히 시간이 초과될 위험이 있다.
/// 이러한 부담을 줄이기 위해 일정 범위내의 소수를 빠르게 구하는 새로운 방법을 알아보도록 하자.
/// 
/// 알아두기
/// 에라토스테네스의 체(Eratosthenes' sieve) 에라토스테네스가 일정 범위까지의 소수를 간단하게 구하기 위해 고안한 방법으로 
/// 자연수를 ‘체’로 쳐서 걸러내고 ‘소수’만 골라내는 방법이라고 해서 에라토스테네스의 체라고 한다.
/// 
/// 코드2 
/// int prime[2000005];
/// 
/// void eratos(int n)
/// {
///     int i, j;
///     prime[0] = ​prime[1] = 1;
///     for (i = 2; i * i <= n; i++)
///     {
///         if (prime[i] == 0)
///         {
///             for (j = i * i; j <= n; j += i) // i의 제곱부터 n까지 i씩 증가
///             {
///                 prime[j] = 1; // i의 배수 제거하기
///             }
///         }
///     }
/// }
/// 
/// int main()
/// {
///     int s, e, i;
///     int cnt = 0;
///     scanf("%d %d", &s, &e);
/// 
///     eratos(e);
/// 
///     for (i = s; i <= e; i++)
///     {
///         if (prime[i] == 0)
///             cnt++;
///     }
///     printf("%d\n", cnt);
///     return 0;
/// }
/// 
/// eratos는 에라토스테네스의 체를 이용하여 prime배열에서 n까지 소수가 아닌 수들을 1로 바꾸어 주는 함수이다. 
/// 함수를 실행하고 나면 소수는 모두 0이 그대로 있고 1과 합성수는 모두 1로 바뀌어 있다.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=2079&sca=2040
/// </summary>
void CountPrimeNumber::Code()
{
	int n, m;

	std::cin >> n >> m;

	bool* isPrimeNumberArr = new bool[2000001];
	std::fill_n(isPrimeNumberArr, 2000001, true);

	CalculateAllPrimeNumbers(isPrimeNumberArr);

	int count{ 0 };
	for (int i = n; i <= m; i++)
	{
		if (isPrimeNumberArr[i])
		{
			count++;
		}
	}

	std::cout << count;

	delete[] isPrimeNumberArr;
}

void CountPrimeNumber::CalculateAllPrimeNumbers(bool* isPrimeNumberArr)
{
	isPrimeNumberArr[0] = isPrimeNumberArr[1] = false;
	for (int i = 2; i <= 2000000 / i; i++)
	{
		if (isPrimeNumberArr[i])
		{
			for (int j = i * i; j <= 2000000; j += i)
			{
				isPrimeNumberArr[j] = false;
			}
		}
	}
}