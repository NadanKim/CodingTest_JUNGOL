#include "FormativeStruct02.h"

/// <summary>
/// 문제
/// 이름과 전화번호, 주소를 멤버로하는 구조체를 정의하고 3명의 자료를 입력받은 후 사전순으로 이름이 가장 빠른 사람의 자료를 출력하는
/// 프로그램을 작성하시오.
/// 
/// * *자기주도 C언어 7판 이전 교재는 출력예가 오류입니다.
/// 
/// 입력 예
/// Lim 1234 - 5678 Seoul
/// Hong 2345 - 6789 Gangwon
/// Sung 3456 - 7890 Gyeonggi
/// 
/// 출력 예
/// name: Hong
/// tel : 2345 - 6789
/// addr : Gangwon
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=96&sca=10g0
/// </summary>
void FormativeStruct02::Code()
{
	Person arr[3];

	for (int i = 0; i < 3; i++)
	{
		std::cin >> arr[i].m_name >> arr[i].m_phone >> arr[i].m_address;
	}

	Person& fastest{ arr[0] };
	for (int i = 1; i < 3; i++)
	{
		if (fastest.m_name > arr[i].m_name)
		{
			fastest = arr[i];
		}
	}

	std::cout << "name : " << fastest.m_name << '\n';
	std::cout << "tel : " << fastest.m_phone << '\n';
	std::cout << "addr : " << fastest.m_address;
}