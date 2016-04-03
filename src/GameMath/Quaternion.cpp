#include "Quaternion.h"

Quaternion::Quaternion(float x, float y, float z, float w)
{
	Quaternion::x = x;
	Quaternion::y = y;
	Quaternion::z = z;
	Quaternion::w = w;

	CalculateLength();
}

Quaternion::Quaternion(const Quaternion& q) :
x(q.x),
y(q.y),
z(q.z),
w(q.w)
{

}

void Quaternion::Normalize()
{
	x = x / length;
	y = y / length;
	z = z / length;
	w = w / length;
}

Quaternion Quaternion::Conjugate()
{
	return Quaternion(-x, -y, -z, -w);
}

void Quaternion::CalculateLength()
{
	length = SquareRoot(x * x + y * y + z * z + w * w);
}

Quaternion operator*(Quaternion q1, Quaternion q2)
{

	float _w = q1.w * q2.w - q1.x * q2.x - q1.y * q2.y - q1.z * q2.z;
	float _x = q1.x * q2.w + q1.w * q2.x + q1.y * q2.z - q1.z * q2.y;
	float _y = q1.y * q2.w + q1.w * q2.y + q1.z * q2.x - q1.x * q2.z;
	float _z = q1.z * q2.w + q1.w * q2.z + q1.x * q2.y - q1.y * q2.x;
		
	return Quaternion(_x, _y, _z, _w);
}

Quaternion operator*(Vector3 v, Quaternion q)
{
	float _w = -q.x * v.x - q.y * v.y - q.z * v.z;
	float _x = q.w * v.x + q.y * v.z - q.z * v.y;
	float _y = q.w * v.y + q.z * v.x - q.x * v.z;
	float _z = q.w * v.z + q.x * v.y - q.y * v.x;

	return Quaternion(_x, _y, _z, _w);
}
