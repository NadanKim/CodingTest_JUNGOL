#include "BasicFileProcess05.h"

/// <summary>
/// 문제
/// 100이하의 정수 N을 입력받은 후 공백이 포함된 N행의 문장을 입력받아서 역순으로 출력하는 프로그램을 작성하시오.
/// 각 문장의 길이는 100이하이다.
///
/// * 표준입출력방식으로 작성하세요.
/// 
/// 입력 예
/// 3
/// I love korea.
/// My name is chulgi.
/// I'm happy.
/// 
/// 출력 예
/// I'm happy.
/// My name is chulgi.
/// I love korea.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=267&sca=10i0
/// </summary>
void BasicFileProcess05::Code()
{
	int n;

	std::cin >> n;

	string* arr = new string[n];

	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	for (int i = 0; i < n; i++)
	{
		std::getline(std::cin, arr[i]);
	}

	for (int i = n - 1; i >= 0; i--)
	{
		std::cout << arr[i] << '\n';
	}

	delete[] arr;
}