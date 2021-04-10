﻿#include "BinaryNumber.h"

/// <summary>
/// 문제
/// 컴퓨터는 내부적으로 0과 1 두 개의 숫자만을 사용하여 모든 프로그램이 동작된다.
/// 
/// 이렇게 두 개의 숫자만으로 이루어진 수를 이진수라 한다.
/// 
/// 2진수를 입력받아 10진수로 변환하여 출력하는 프로그램을 작성하시오.
///
/// 입력 형식
/// 0과 1로만 이루어져 있는 30자리 이하의 2진수를 입력받는다.
/// 
/// 출력 형식
/// 입력된 2진수를 10진수로 변환하여 출력한다.
///
/// 입력 예
/// 10101
///
/// 출력 예
/// 21
/// 
/// Hint!
/// 10진수란?
/// 어떤 수를 0부터 9까지 10개의 숫자로 나타내는 표시방법을 10진법이라 하고 이렇게 표시된 수를 10진수라 한다.한자리에서 10개가 넘으면 묶어서 자리올림이 발생된다.
/// 10진수 12345는 다음과 같이 식으로 표시할 수 있다.
/// 12345 = 1 * 104 + 2 * 103 + 3 * 102 + 4 * 101 + 5 * 100 (모든 수의 0제곱은 1을 나타낸다.)
/// 
/// 2진수란 ?
/// 어떤 수를 0과 1 두개의 숫자로 나타내는 표시방법을 2진법이라 하고 이렇게 표시된 수를 2진수라 한다.한자리에서 2개가 넘으면 묶어서 자리올림이 발생된다.
/// 2진수 10101은 다음과 같이 식으로 표시할 수 있다.
/// 10101 = 1 * 24 + 0 * 23 + 1 * 22 + 0 * 21 + 1 * 20
/// 2진수를 10진수로 변환하기 위해서는 위와 같은 식을 이용해서 계산을 하면 된다.
/// 위의 식을 정리하면 2진수 10101은 16 + 4 + 1 = 21이 되는 것이다.
/// 위의(10101)2 은(1010)2 * 2 + 1과 같다.이러한 성질을 재귀적으로 이용하면 앞에서부터 계속 2를 곱하면서 더해 나가는 방법으로 쉽게 프로그래밍을 할 수 있다.
/// 
/// 10101을 변환하는 과정을 살펴보자.
/// • 처음에 맨 앞의 1을 10진수로 변환하면 1이다.
/// • 다음 앞에서 두자리(10)까지 변환하면 1 * 2 + 0 = 2이다.
/// • 다음 세자리(101)까지 변환하면 2 * 2 + 1 = 5이다.
/// • 다음 네자리(1010)까지 변환하면 5 * 2 + 0 = 10이다.
/// • 다음 다섯자리(10101)까지 변환하면 10 * 2 + 1 = 21이다.
/// 
/// 10진수를 2진수로 변환하기
/// 10진수를 2진수로 변환하기 위해서는 위의 과정을 역순으로 하여 2씩 묶어가면서 나머지를 1의 자리부터 확정해 나가면 된다. 10진수 21을 2진수로 변환하는과정은 다음과 같다.
/// 
/// 2 | 21
/// 2 | 10     ... 1  21을 2로 나눈 몫은 10이고 나머지 1은 1의 자리이다.
/// 2 | 5       ... 0  10을 2로 나눈 몫은 5이고 나머지 0은 2의 자리이다.
/// 2 | 2       ... 1                             ...
/// 2 | 1       ... 0                             ...
/// 0       ... 1 몫이 0일때 종료하고 나머지를 역순으로 연결하면 10101이 된다.
/// 
/// #include <stdio.h>
/// #include <string.h>
/// 
/// int change(char t[])
/// {
///     int i, len, ten = 0;
///     len = strlen(t);
///     for (i = 0; i < len; i++)
///     {
///         ten = ten * 2 + (t[i] - '0');  //앞자리까지의 값에 2를 곱하고 현재의 값을 더한다.
///     }
///     return ten;
/// }
/// 
/// int main()
/// {
///     char two[35];
///     scanf("%s", two);
///     printf("%d\n", change(two));
///     return 0;
/// }
/// 
/// 코드분석
/// change 함수는 문자열로 된 이진수를 받아서 10진수로 변환하여 리턴하는 함수이다.
/// t[i]는 문자 ‘0’ 또는 ‘1’이므로 숫자로 변환하기 위해서는 ‘0’을 빼주어야 한다.
/// 참고로 change 함수는 재귀적 성질을 이용하여 아래와 같이 재귀함수로 작성할 수도 있다.
/// 
/// #include <stdio.h>
/// #include <string.h>
/// 
/// int change(char t[], int len)
/// {
///     if (len == 0) return 0;
///     return change(t, len - 1) * 2 + (t[len - 1] - '0');
/// }
/// 
/// int main()
/// {
///     char two[35];
///     scanf("%s", two);
///     printf("%d\n", change(two, strlen(two)));
///     return 0;
/// }
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=2080&sca=2040
/// </summary>
void BinaryNumber::Code()
{
	string str;

	std::cin >> str;

	int strSize{ static_cast<int>(str.size()) };
	int multiValue{ static_cast<int>(std::pow(2, strSize - 1)) };

	int result{ 0 };

	for (int i = 0; i < strSize; i++)
	{
		result += (str[i] - '0') * multiValue;
		multiValue /= 2;
	}

	std::cout << result;
}