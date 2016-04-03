#pragma once
#include "GameMath.h"

class Quaternion {
public:

	Quaternion(float x, float y, float z, float w);
	Quaternion(const Quaternion& q);

	void Normalize();
	Quaternion Conjugate();
	void CalculateLength();


	friend Quaternion operator*(Quaternion q1, Quaternion q2);
	friend Quaternion operator*(Vector3 vec, Quaternion q2);

public:

	float x;
	float y;
	float z;
	float w;
	
	float length;

};

