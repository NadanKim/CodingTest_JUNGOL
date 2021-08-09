#pragma once
#include <iostream>

#include "../../Base.h"

class QuickSort : public Base
{
private:
	void DoQuickSort(int arr[], int n, int p, int r);
	int Partition(int arr[], int p, int r);
	void Swap(int arr[], int left, int right);

protected:
	void Code() override;
};