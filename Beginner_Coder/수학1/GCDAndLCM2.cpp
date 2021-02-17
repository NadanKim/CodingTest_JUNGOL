#include "GCDAndLCM2.h"

/// <summary>
/// 문제
/// n개의 정수를 입력받아서 최대공약수와 최소공배수를 구하는 프로그램을 작성하여 보자.
///
/// 입력 형식
/// 첫째 줄에 N (2≤N≤10) 을 입력 받고 다음 줄에 N개의 정수를 공백으로 구분하여 입력 받는다.
/// 입력 받는 정수는 2이상 10, 000 이하이다.데이터의 크기가 주어진 범위를 벗어나는 입력은 없다.
/// 
/// 출력 형식
/// 입력받은 정수들의 최대공약수와 최소공배수를 공백으로 구분하여 출력한다.
/// 최소공배수는 20억 이하의 정수이다.
///
/// 입력 예
/// 3
/// 2 8 10
///
/// 출력 예
/// 2 40
/// 
/// Hint!
/// 두 개의 수 A와 B의 최대공약수를 D라 하면, 세 개의 수 A, B, C의 최대공약수는 D와 C의 최대공약수와 같다.
/// 이런 규칙을 이용하면 두 수의 최대공약수를 구하는 함수 한 개만으로도 여러 수의 최대공약수를 구할 수 있다.
/// 최소공배수 역시 두 수의 최소공배수를 구해 나가는 방법으로 구할 수 있다.
/// a배열에 N개의 수가 저장되어 있다고 가정한다면 다음과 같이 구현할 수 있다.
/// 
/// 코드
/// gcd = lcm = a[0];
/// for (i=1; i < N; i++) { 
///     gcd = gcd_get(gcd, a[i]); 
///     lcm = lcm / gcd_get(lcm, a[i]) * a[i];
/// }
/// 
/// 코드분석 
/// 첫 번째 수를 최대공약수(gcd)로 정하고 두 번째 수부터 이전까지의 최대공약수(gcd)와 현재 배열의 값(a[i])의 최대공약수를 구하여 다시 gcd에 저장한다. 
/// 이러한 작업을 마지막까지 반복하면 모든 수의 최대공약수가 구해진다.
/// 최소공배수도 같은 방법으로 구할 수 있다.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=281&sca=2030
/// </summary>
void GCDAndLCM2::Code()
{
	int n;
	int arr[10]{};

	std::cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	int GCD{ arr[0] }, LCM{ arr[0] };
	for (int i = 1; i < n; i++)
	{
		GCD = GetGCD(GCD, arr[i]);
		LCM = LCM * arr[i] / GetGCD(LCM, arr[i]);
	}

	std::cout << GCD << ' ' << LCM;
}

int GCDAndLCM2::GetGCD(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	return GetGCD(b, a % b);
}