#include "FormativeFileProcess10.h"

/// <summary>
/// ����
/// 10���� �ܾ �Է¹ް� ���� �ϳ��� �� �Է� �޴´�.
/// 
/// ���ڸ� �����ϴ� �ܾ ��� ã�� ���� ������ ����Ͻÿ�.
/// �ܾ�� 100�� ���ϴ�.
/// 
/// * ǥ������¹������ �ۼ��ϼ���.
/// 
/// �Է� ��
/// hancom
/// korea
/// information
/// monitor
/// class
/// member
/// internet
/// bible
/// friends
/// forever
/// i
/// 
/// ��� ��
/// bible
/// friends
/// information
/// internet
/// monitor
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=114&sca=10i0
/// </summary>
void FormativeFileProcess10::Code()
{
	string arr[10];
	char ch;

	for (int i = 0; i < 10; i++)
	{
		std::cin >> arr[i];
	}
	std::cin >> ch;

	vector<string> results;
	for (int i = 0; i < 10; i++)
	{
		if (arr[i].find(ch) < arr[i].size())
		{
			results.push_back(arr[i]);
		}
	}

	for (int i = 1; i < results.size(); i++)
	{
		for (size_t j = 0; j < results.size() - i; j++)
		{
			if (results[j] > results[j + 1])
			{
				string temp{ results[j] };
				results[j] = results[j + 1];
				results[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < results.size(); i++)
	{
		std::cout << results[i] << '\n';
	}
}