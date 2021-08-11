#pragma once
#include <iostream>

#include "../../Base.h"

class MergeSort : public Base
{
private:
	void DoMergeSort(int arr[], int tempArr[], int n, int p, int r);
	void Merge(int arr[], int tempArr[], int p, int q, int r);

protected:
	void Code() override;
};