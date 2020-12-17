#include "FormativeStruct01.h"

/// <summary>
/// 문제
/// 이름과 전화번호, 주소를 멤버로하는 구조체를 정의하여 1개의 자료를 입력받고 출력하는 프로그램을 작성하시오.
/// 각각의 길이는 100자 이하다.
/// 
/// 입력 예
/// Lim 1234-5678 Seoul
/// 
/// 출력 예
/// name : Lim
/// tel : 1234 - 5678
/// addr : Seoul
/// 
/// Hint!
/// 전화번호는 문자열로 처리하는 것이 편리하고 일반적이다.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=95&sca=10g0
/// </summary>
void FormativeStruct01::Code()
{
	Person var;

	std::cin >> var.m_name >> var.m_phone >> var.m_address;

	std::cout << "name : " << var.m_name << '\n';
	std::cout << "tel : " << var.m_phone << '\n';
	std::cout << "addr : " << var.m_address;
}