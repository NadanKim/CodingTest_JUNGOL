#include "FormativeStruct04.h"

/// <summary>
/// 문제
/// 어떤 학생의 키는 아버지와 어머니의 키의 평균보다 5cm 크고 몸무게는 아버지와 어머니의 몸무게의 평균보다 4.5kg 가볍다고 한다.
/// 
/// 키와 몸무게를 멤버변수로 갖는 구조체를 정의하고 아버지와 어머니의 키와 몸무게를 입력받아 학생의 키와 몸무게를 출력하는 프로그램을
/// 작성하시오.
/// 
/// 키는 정수미만 버림하고 몸무게는 반올림하여 소수 첫째자리까지 나타낸다.
/// 
/// 입력 예
/// 175 68.8
/// 166 56.4
/// 
/// 출력 예
/// height : 175cm
/// weight : 58.1kg
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=98&sca=10g0
/// </summary>
void FormativeStruct04::Code()
{
	Person father, mother;

	std::cin >> father.height >> father.weight;
	std::cin >> mother.height >> mother.weight;

	Person child;
	child.height = (father.height + mother.height) / 2 + 5;
	child.weight = (father.weight + mother.weight) / 2 - 4.5f;

	std::cout.precision(1);
	std::cout.setf(std::ios::fixed);

	std::cout << "height : " << child.height << "cm\n";
	std::cout << "weight : " << child.weight << "kg";
}