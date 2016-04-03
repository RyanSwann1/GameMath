#include "Vector2.h"
#include "GameMath.h"


Vector2::Vector2(float x, float y)
{
	Vector2::x = x;
	Vector2::y = y;

	length = SquareRoot(PowerOf2(x) + PowerOf2(y));
	Stringify();
}

void Vector2::Normalize()
{
	x = x / length;
	y = y / length;

	Stringify();
}

void Vector2::Stringify()
{
	comp = "X: " + std::to_string(x) + "Y: " + std::to_string(y);
}
