#ifndef _GAMEMATH_
#include "GameMath.h"
#endif // !_GAMEMATH_
#include <iostream>

void main()
{
	float numbertoSine;

	std::cin >> numbertoSine;

	std::cout << sine(numbertoSine) << std::endl;

	system("Pause");
}