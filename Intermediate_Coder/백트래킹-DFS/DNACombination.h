#pragma once
#include <iostream>
#include <string>
#include <algorithm>

#include "../../Base.h"

using std::string;

class DNACombination : public Base
{
private:
	size_t GetMinLengthOfCombination(string arr[7], int n, string combination = "");
	void CopyArrWithoutIdx(string arr[7], string copyArr[7], int n, int idx);
	string CombineDNA(string originDNA, string addDNA);

protected:
	void Code() override;
};