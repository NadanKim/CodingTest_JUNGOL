#include "PrimeNumberAndCompositeNumber.h"

/// <summary>
/// 문제
/// 소수(prime number)란 1보다 큰 자연수 중 1과 자기 자신 두 개만을 약수로 갖는 수를 말한다.
/// 합성수(composite number)란 1보다 큰 자연수 중 소수가 아닌 수를 말하며 3개 이상의 약수를 갖는다.
/// 1은 소수도 합성수도 아니다.
/// 5개의 자연수를 입력받아 소수인지 합성수인지를 판단하는 프로그램을 작성하시오.​
///
/// 입력 형식
/// 10억 이하의 자연수 5개가 공백으로 구분되어 주어진다.
/// 
/// 출력 형식
/// 입력된 순서대로 한 줄에 한 개씩 소수이면 "prime number",
/// 합성수이면 "composite number",
/// 소수도 합성수도 아니면 "number one"이라고 출력한다.
///
/// 입력 예
/// 3 10 1 55 127
///
/// 출력 예
/// prime number
/// composite number
/// number one
/// composite number
/// prime number
/// 
/// Hint!
/// 소수(prime number)란? 문제에서 주어진 바와 같이 약수가 1과 자기 자신 두 개만을 갖는 자연수를 소수라 한다.
/// 20이하의 소수는 8개(2, 3, 5, 7, 11, 13, 17, 19)이다.
/// 
/// 합성수(composite number)란 ?
/// 1과 자기 자신 이외에 다른 약수를 갖는 수, 즉 약수가 3개 이상인 자연수를 말한다.
/// 20이하의 합성수는 11개(4, 6, 8, 9, 10, 12, 14, 15, 16, 18, 20)이다. 1은 소수도 합성수도 아니다.
/// 
/// [코드1]
/// bool isPrimeNaive(int n)
/// {
///     if (n < 2) return false;
///     /// 1이하의 수는 소수가 아니다.(예외처리)
///     for (int i = 2; i < n; i++)   /// 2부터 자신보다 작은 모든수로 나누어 본다.
///     {
///         if (n % i == 0) return false; /// 1과 자신 이외의 약수가 있으므로 소수가 아니다.
///     }
///     return true; /// 1과 자신 이외의 약수가 없으므로 소수이다.
/// }
/// 
/// [코드2]
/// bool isPrime(int n)
/// {
///     if (n < 2) return false;
/// 
///     for (int i = 2; i <= n / i; i++)
///     {
///         /// i*i <= n은 i*i에서 overflow 발생가능
///         if (n % i == 0) return 0;
///     }
///     return 1;
/// }
/// 
/// int main()
/// {
///     ...
/// 
///         if (n < 2) printf("number one\n");
///         else if (isPrime(n)) printf("prime number\n");
///         else printf("composite number\n");
/// 
///     ...
/// }
/// 
/// [코드1 분석]
/// isPrime(int n)함수는 n이 소수이면 true를 아니면 false를 리턴한다.
/// 2부터 n - 1까지 수 중에서 약수가 발견되면 즉시 false를 리턴한다.
/// 2부터 n - 1까지 수 중에서 약수가 발견되지 않으면 tue를 리턴한다.
/// isPrime 함수는 다음과 같이 int형으로 선언하여 처리할 수도 있다.
/// 
/// int prime(int n)
/// {
///     if (n < 2) return 0;
///     for (int i = 2; i < n; i++)
///     {
///         if (n % i == 0) return 0;
///     }
///     return 1;
/// }
/// 
/// [코드1의 고찰] 
/// 위와 같이 처리하면 결과값은 나올 수 있지만 
/// 반복문을 2부터 입력받은 수까지 실행을 해야 하기 때문에 큰 수가 입력되면 시간이 초과될 수 있다. 
/// 시간을 줄이기 위해 약수를 구할 때 제곱근을 이용해 보자. 
/// a * b = n (a > 1, b> 1)이라 할 때 a와 b는 n의 약수이다. 
/// 그러므로 a와 b중 작은 수 쪽만 확인해 보아도 n이 합성수임을 알 수 있는데 작은 수의 범위는 n의 제곱근 이하이다. 
/// 따라서 [코드2]같이 함수를 수정함으로써 시간을 획기적으로 줄일 수 있다. 
/// 
/// [코드2 분석] 
/// int sq = sqrt(n)라고 할 때, (i <= n / i)는 결과적으로 (i <= sq) 와 같다. 
/// 코드2는 코드1에서 i < n을 i <= n / i 로 바꾼 것 뿐이지만 시간은 획기적으로 줄어들게 된다. 
/// 만약 입력된 값이 1억이라면 앞의 코드에서는 반복문을 1억번 실행해야 하지만 
/// 이 코드에서는 1만번만 실행하면 되므로 시간이 1/10000로 단축되는 것이다.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=452&sca=2040
/// </summary>
void PrimeNumberAndCompositeNumber::Code()
{
	int number;

	for (int i = 0; i < 5; i++)
	{
		std::cin >> number;

		if (number == 1)
		{
			std::cout << "number one\n";
		}
		else if (IsPrimeNumber(number))
		{
			std::cout << "prime number\n";
		}
		else
		{
			std::cout << "composite number\n";
		}
	}
}

bool PrimeNumberAndCompositeNumber::IsPrimeNumber(int number)
{
	int limit{ static_cast<int>(std::sqrt(number)) };

	for (int i = 2; i <= limit; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	return true;
}