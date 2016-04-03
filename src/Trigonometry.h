#pragma once
#include "GameMath.h"
#include <iostream>

namespace {

	float sine(float x)
	{
		float result = 0;

		result = x - (x * x * x) + (x * x * x * x * x) / 120;
		std::cout << result << std::endl;

		result = result / 180;
		std::cout << result << std::endl;
		result = result / _PI;
		std::cout << result << std::endl;
		result = result / x;
		std::cout << result << std::endl;

		return result;

	}
}