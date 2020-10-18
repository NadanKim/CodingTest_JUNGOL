#include "FormativeDebug03.h"

/// <summary>
/// 문제
/// 아래의 프로그램을 작성하여 디버깅을 하면서 디버깅 창에서 ① 위치에서의 a의 값이 얼마인지 구하여
/// 그 값을 출력하는 프로그램을 작성하시오.
/// #include <stdio.h>
/// int main()
/// {
///		int a = 5;
///		a += 10;
///		a = a - 1; -------------- ①
///		printf("%d\n", 1); // 여기에서 출력될 1을 ①위치에서의 a 값으로 바꾸어 준다.
///		return 0;
/// }
/// 
/// 출력 예
/// ①에서의 a값만 출력하는 프로그램을 작성하시오.
/// 
/// Hint!
/// ''' 
/// python의 경우
/// '''
/// a = 5
/// a += 10
/// a = a - 1 #---------------- - 1.
/// print(0) # 1. 에서의 a값을 0 대신 출력한다.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=18&sca=1040
/// </summary>
void FormativeDebug03::Code()
{
	std::cout << 15;
}