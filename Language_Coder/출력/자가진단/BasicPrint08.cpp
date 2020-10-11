#include "BasicPrint08.h"

/// <summary>
/// ����
/// ������ ���� ��µǴ� ���α׷��� �ۼ��϶�.
/// (�� ��ҵ��� 10ĭ�� ������ Ȯ���Ͽ� ���������� �����Ͽ� ����Ѵ�.)
/// 
/// ��� ��
///       item     count     price
///        pen        20       100
///       note         5        95
///     eraser       110        97
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=145&sca=10
/// </summary>
void BasicPrint08::Code()
{
	std::cout.setf(std::ios::right);

	std::cout << std::setw(10) << "item" << std::setw(10) << "count" << std::setw(10) << "price" << '\n'
		<< std::setw(10) << "pen" << std::setw(10) << 20 << std::setw(10) << 100 << '\n'
		<< std::setw(10) << "note" << std::setw(10) << 5 << std::setw(10) << 95 << '\n'
		<< std::setw(10) << "eraser" << std::setw(10) << 110 << std::setw(10) << 97;
}