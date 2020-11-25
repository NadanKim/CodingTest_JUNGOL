#pragma once
#include <iostream>

#include "../../../Base.h"

class BasicFunction203 : public Base
{
protected:
	void Code() override;

private:
	template <typename T>
	T Function(T var);
};