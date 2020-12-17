#include "FormativeStruct02.h"

/// <summary>
/// ����
/// �̸��� ��ȭ��ȣ, �ּҸ� ������ϴ� ����ü�� �����ϰ� 3���� �ڷḦ �Է¹��� �� ���������� �̸��� ���� ���� ����� �ڷḦ ����ϴ�
/// ���α׷��� �ۼ��Ͻÿ�.
/// 
/// * *�ڱ��ֵ� C��� 7�� ���� ����� ��¿��� �����Դϴ�.
/// 
/// �Է� ��
/// Lim 1234 - 5678 Seoul
/// Hong 2345 - 6789 Gangwon
/// Sung 3456 - 7890 Gyeonggi
/// 
/// ��� ��
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