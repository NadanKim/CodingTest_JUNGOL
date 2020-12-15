#include "BasicStruct01.h"

/// <summary>
/// 문제
/// "이름", "학교명", "학년"을 입력받아 아래와 같이 출력하는 프로그램을 작성하시오.
/// (이름과 학교명은 각각 20자 이하이다.)
///
/// 입력 예
/// Songjunhyuk Beolmal 6
///
/// 출력 예
/// Name : Songjunhyuk
/// School : Beolmal
/// Grade : 6
/// 
/// Hint!
/// [*** struct(구조체).pdf ***](http://www.jungol.co.kr/bbs/download.php?bo_table=pds&wr_id=29&no=2&page=3)
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=250&sca=10g0
/// </summary>
void BasicStruct01::Code()
{
	Student student;

	std::cin >> student.m_name >> student.m_schoolName >> student.m_grade;

	std::cout << "Name : " << student.m_name << '\n';
	std::cout << "School : " << student.m_schoolName << '\n';
	std::cout << "Grade : " << student.m_grade;
}