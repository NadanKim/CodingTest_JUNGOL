#pragma once
#include <iostream>

#include "../../Base.h"

class CardGame : public Base
{
private:
	struct Card
	{
		char Color;
		int Number;

		void Swap(Card& card)
		{
			Card temp{ Color, Number };
			Color = card.Color;
			Number = card.Number;
			card.Color = temp.Color;
			card.Number = temp.Number;
		}
	};

	bool IsDeckSameColor(Card deck[]);
	bool IsDeckConsectiveNumber(Card deck[]);
	int GetMatchNumberIfExists(Card deck[], int matchCount, int exceptNumber = -1);
	int GetHighestNumber(Card deck[]);

protected:
	void Code() override;
};