#include "FormativePrint05.h"

/// <summary>
/// ����
/// ���� ��� ���� ���� ��� �ܾ 15ĭ�� �����ʿ� ���߾� ��µǴ� ���α׷��� �ۼ��Ͻÿ�.
/// 
/// ��� ��
///           Seoul     10,312,545        +91,375
///           Pusan      3,567,910         +5,868
///         Incheon      2,758,296        +64,888
///           Daegu      2,511,676        +17,230
///         Gwangju      1,454,636        +29,774
/// 
/// Hint!
/// ��� ' '�� ���ԵǾ������Ƿ� ���ڰ� �ƴ� ���ڿ��� ó���ϸ� �ȴ�.
/// ���鵵 �� ĭ�� �����ϰ� ���� �����϶�.
/// "%15s %15s %15s" �̷��� ǥ���ϸ� �� ��°�� �� ��°�� 16ĭ�� �ǹǷ� "%15s%15s%15s"�� ���� ������ ���� ǥ���ؾ� �ȴ�.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=5
/// </summary>
void FormativePrint05::Code()
{
	std::cout.setf(std::ios::right);

	std::cout << std::setw(15) << "Seoul" << std::setw(15) << "10,312,545" << std::setw(15) << "+91,375" << '\n'
		<< std::setw(15) << "Pusan" << std::setw(15) << "3,567,910" << std::setw(15) << "+5,868" << '\n'
		<< std::setw(15) << "Incheon" << std::setw(15) << "2,758,296" << std::setw(15) << "+64,888" << '\n'
		<< std::setw(15) << "Daegu" << std::setw(15) << "2,511,676" << std::setw(15) << "+17,230" << '\n'
		<< std::setw(15) << "Gwangju" << std::setw(15) << "1,454,636" << std::setw(15) << "+29,774";
}