#pragma once
#include <string>

class Vector2 {
	
public:

	Vector2(float x, float y);
	void Normalize();

	void Stringify();

public:
	float x;
	float y;
	std::string comp;
	float length;
};




