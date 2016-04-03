#pragma once

class Vector3{

public:
	
	//Will create a unit Vector.
	Vector3();

	//Will set x y and z.
	Vector3(float x, float y, float z);
	
	
	//
	//Set Vector Components.
	//
	
	//Sets x and 0s out y and z
	float SetVector(float x);

	//Sets x, y and 0s out z.
	float SetVector(float x, float y);

	//Set x, y, z and calculate the length of the vector based on that.
	float SetVector(float x, float y, float z);

	//Sets the vector length and calculates the x y and z positions dynamically.
	float SetVectorLength(float length);




	//
	// Relational Prospects Of Vectors.
	//

	//Adding Vectors.
	friend Vector3 operator+(Vector3 vec1, Vector3 vec2);
	
	//Subtracting Vectors.
	friend Vector3 operator-(Vector3 vec1, Vector3 vec2);

	//Cross Product
	friend Vector3 operator*(Vector3 vec1, Vector3 vec2);

	float DotProduct(Vector3 vec1, float c)
	{
		//return dotproduct of this.
	}

	float CalculateLengthOfVector()
	{
		//Implement.
	}

public:
	float x;
	float y;
	float z;

	float length;

};