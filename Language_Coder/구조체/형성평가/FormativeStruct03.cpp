#include "FormativeStruct03.h"

/// <summary>
/// ����
/// ���簢���� ���� �Ʒ��� ��ǥ(x, y)�� ������ ���� ��ǥ(x2, y2)�� ������ �� �ִ� ����ü �ڷ����� ����� �� ���� ���簢�� �ڷḦ
/// �Է¹޾� �� ���簢���� �����ϴ� �ּ��� ���簢�� �ڷḦ ���Ͽ� ����ü ������ �����ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// ��, ��� �Է°��� 100�� ���� �ʴ´�.
/// 
/// �Է� ��
/// 1 1 6 5
/// 2 0 7 3
/// 
/// ��� ��
/// 1 0 7 5
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=97&sca=10g0
/// </summary>
void FormativeStruct03::Code()
{
	Point lb1, rt1;
	Point lb2, rt2;

	std::cin >> lb1.x >> lb1.y >> rt1.x >> rt1.y;
	std::cin >> lb2.x >> lb2.y >> rt2.x >> rt2.y;

	Point minLb;
	minLb.x = (lb1.x < lb2.x ? lb1.x : lb2.x);
	minLb.y = (lb1.y < lb2.y ? lb1.y : lb2.y);

	Point maxRt;
	maxRt.x = (rt1.x > rt2.x ? rt1.x : rt2.x);
	maxRt.y = (rt1.y > rt2.y ? rt1.y : rt2.y);

	std::cout << minLb.x << ' ' << minLb.y << ' ' << maxRt.x << ' ' << maxRt.y;
}