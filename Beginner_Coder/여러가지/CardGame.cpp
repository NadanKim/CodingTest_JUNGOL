#include "CardGame.h"

/// <summary>
/// 문제
/// 근우는 오늘 재미있는 카드 게임을 배우고 있다. 
/// 카드는 빨간색, 파란색, 노란색, 녹색의 네 가지 색이 있고, 색깔별로 1부터 9까지 숫자가 쓰여진 카드가 9장씩 있다.
/// 카드는 모두 36(= 4x9)장이다.근우가 배운 카드 게임은 36장의 카드에서 5장을 뽑고, 아래와 같은 규칙으로 점수를 계산하는 것이다.
/// 
/// 각 카드는 다음과 같이 나타낸다.
/// 카드의 색깔은 영어 대문자 R, B, Y, G로 나타내는데, R은 빨간색, B는 파란색, Y는 노란색, G는 녹색을 뜻한다.
/// 예를 들어서 Y8은 노란색 8을 나타내고, B5는 파란색 5를 나타낸다.
/// 
/// <점수를 정하는 규칙>
/// ① 카드 5장이 모두 같은 색이면서 숫자가 연속적일 때, 점수는 가장 높은 숫자에 900을 더한다.
/// 예를 들어, 카드가 Y4, Y3, Y2, Y5, Y6 일 때 점수는 906(= 6 + 900)점이다.
/// 
/// ② 카드 5장 중 4장의 숫자가 같을 때 점수는 같은 숫자에 800을 더한다.
/// 예를 들어, 카드가 B3, R3, B7, Y3, G3 일 때 점수는 803(= 3 + 800)점이다.
/// 
/// ③ 카드 5장 중 3장의 숫자가 같고 나머지 2장도 숫자가 같을 때 점수는 3장이 같은 숫자에 10을 곱하고
/// 2장이 같은 숫자를 더한 다음700을 더한다.
/// 예를 들어, 카드가 R5, Y5, G7, B5, Y7 일 때 점수는 757(= 5x10 + 7 + 700)점이다.
/// 
/// ④ 5장의 카드 색깔이 모두 같을 때 점수는 가장 높은 숫자에 600을 더한다.
/// 예를 들어, 카드가 Y3, Y4, Y8, Y6, Y7 일 때 점수는 608(= 8 + 600)점이다.
/// 
/// ⑤ 카드 5장의 숫자가 연속적일 때 점수는 가장 높은 숫자에 500을 더한다.
/// 예를 들어 R7, R8, G9, Y6, B5 일 때 점수는 509(= 9 + 500)점이다.
/// 
/// ⑥ 카드 5장 중 3장의 숫자가 같을 때 점수는 같은 숫자에 400을 더한다.
/// 예를 들어 R7, Y7, R2, G7, R5 일 때 점수는 407(= 7 + 400)점이다.
/// 
/// ⑦ 카드 5장 중 2장의 숫자가 같고 또 다른 2장의 숫자가 같을 때
/// 점수는 같은 숫자 중 큰 숫자에 10을 곱하고 같은 숫자 중 작은 숫자를 더한 다음 300을 더한다.
/// 예를 들어, R5, Y5, Y4, G9, B4 일 때 점수는 354(= 5X10 + 4 + 300)점이다.
/// 
/// ⑧ 카드 5장 중 2장의 숫자가 같을 때 점수는 같은 숫자에 200을 더한다.
/// 예를 들어, R5, Y2, B5, B3, G4 일 때 점수는 205(= 5 + 200)점이다.
/// 
/// ⑨ 위의 어떤 경우에도 해당하지 않을 때 점수는 가장 큰 숫자에 100을 더한다.
/// 예를 들어, R1, R2, B4, B8, Y5 일 때 점수는 108(= 8 + 100)점이다.
/// 
/// 입력으로 카드 5장이 주어질 때, 카드 게임의 점수를 구하는 프로그램을 작성하시오.
/// 두 가지 이상의 규칙을 적용할 수 있는 경우에는 가장 높은 점수가 카드 게임의 점수이다.
///
/// 입력 형식
/// 첫째 줄부터 다섯째 줄까지 한 줄에 카드 하나씩 입력된다.
/// 카드의 색깔과 숫자 사이에는 빈 칸이 하나 있다.
/// 
/// 출력 형식
/// 한 줄에 카드의 점수를 출력한다.
///
/// 입력 예
/// B 3
/// B 7
/// R 1
/// B 2
/// Y 7
///
/// 출력 예
/// 207
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=591&sca=2060
/// </summary>
void CardGame::Code()
{
	Card deck[5];

	for (int i = 0; i < 5; i++)
	{
		std::cin >> deck[i].Color >> deck[i].Number;
	}

	for (int i = 1; i < 5; i++)
	{
		for (int j = 0; j < 5 - i; j++)
		{
			if (deck[j].Number > deck[j + 1].Number)
			{
				deck[j].Swap(deck[j + 1]);
			}
		}
	}

	bool isDeckAllSameColor{ IsDeckSameColor(deck) };
	bool isDeckConsectiveNumber{ IsDeckConsectiveNumber(deck) };
	int highestNumber{ GetHighestNumber(deck) };
	int fourMatchNumber{ GetMatchNumberIfExists(deck, 4) };
	int threeMatchNumber{ GetMatchNumberIfExists(deck, 3, fourMatchNumber) };
	int twoMatchNumber1{ GetMatchNumberIfExists(deck, 2, threeMatchNumber) };
	int twoMatchNumber2{ GetMatchNumberIfExists(deck, 2, threeMatchNumber != -1 ? threeMatchNumber : twoMatchNumber1) };

	if (isDeckAllSameColor && isDeckConsectiveNumber)
	{
		std::cout << 900 + highestNumber;
	}
	else if (fourMatchNumber != -1)
	{
		std::cout << 800 + fourMatchNumber;
	}
	else if (threeMatchNumber != -1 && twoMatchNumber1 != -1)
	{
		std::cout << 700 + threeMatchNumber * 10 + twoMatchNumber1;
	}
	else if (isDeckAllSameColor)
	{
		std::cout << 600 + highestNumber;
	}
	else if (isDeckConsectiveNumber)
	{
		std::cout << 500 + highestNumber;
	}
	else if (threeMatchNumber != -1)
	{
		std::cout << 400 + threeMatchNumber;
	}
	else if (twoMatchNumber1 != -1 && twoMatchNumber2 != -1)
	{
		int big{ twoMatchNumber1 > twoMatchNumber2 ? twoMatchNumber1 : twoMatchNumber2 };
		int small{ twoMatchNumber1 == big ? twoMatchNumber2 : twoMatchNumber1 };
		std::cout << 300 + big * 10 + small;
	}
	else if (twoMatchNumber1 != -1)
	{
		std::cout << 200 + twoMatchNumber1;
	}
	else
	{
		std::cout << 100 + highestNumber;
	}
}

bool CardGame::IsDeckSameColor(Card deck[])
{
	char color{ deck[0].Color };
	for (int i = 1; i < 5; i++)
	{
		if (deck[i].Color != color)
		{
			return false;
		}
	}
	return true;
}

bool CardGame::IsDeckConsectiveNumber(Card deck[])
{
	int number{ deck[0].Number };
	for (int i = 1; i < 5; i++)
	{
		number += 1;
		if (deck[i].Number != number)
		{
			return false;
		}
	}

	return true;
}

int CardGame::GetMatchNumberIfExists(Card deck[], int matchCount, int exceptNumber)
{
	for (int i = 0; i < 5; i++)
	{
		int number{ deck[i].Number };
		int count{ 0 };

		if (number == exceptNumber)
		{
			continue;
		}

		for (int j = 0; j < 5; j++)
		{
			if (deck[j].Number == number)
			{
				count++;
			}
		}

		if (count == matchCount)
		{
			return number;
		}
	}

	return -1;
}

int CardGame::GetHighestNumber(Card deck[])
{
	int number{ deck[0].Number };
	for (int i = 1; i < 5; i++)
	{
		if (number < deck[i].Number)
		{
			number = deck[i].Number;
		}
	}

	return number;
}