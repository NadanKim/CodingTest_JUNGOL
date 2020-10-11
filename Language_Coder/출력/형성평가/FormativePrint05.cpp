#include "FormativePrint05.h"

/// <summary>
/// 문제
/// 다음 출력 예와 같이 모든 단어를 15칸씩 오른쪽에 맞추어 출력되는 프로그램을 작성하시오.
/// 
/// 출력 예
///           Seoul     10,312,545        +91,375
///           Pusan      3,567,910         +5,868
///         Incheon      2,758,296        +64,888
///           Daegu      2,511,676        +17,230
///         Gwangju      1,454,636        +29,774
/// 
/// Hint!
/// 모두 ' '가 포함되어있으므로 숫자가 아닌 문자열로 처리하면 된다.
/// 공백도 한 칸을 차지하게 됨을 주의하라.
/// "%15s %15s %15s" 이렇게 표시하면 두 번째와 세 번째는 16칸이 되므로 "%15s%15s%15s"와 같이 공백이 없이 표시해야 된다.
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