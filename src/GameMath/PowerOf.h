#pragma once

namespace {
	float PowerOf(float number, float exponent)
	{
		while (exponent != 0)
		{
			number * number;
			--exponent;
		}

		return number;
	}

	float PowerOf2(float number)
	{
		number = number * number;

		return number;
	}

	float PowerOf3(float number)
	{
		number = number * number * number;

		return number;
	}

}