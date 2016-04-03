#pragma once
#include "GameMath.h"


namespace {
	
	float PythagorasTheorem(float c, float a, float b)
	{
		float squared = PowerOf2(a) + PowerOf2(b);

		return SquareRoot(squared);
	}

}