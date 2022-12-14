#pragma once
#include <iostream>

class Vector3
{
	// private area

public:
	// Public Variables
	// The value along the x-axis
	float x;

	// The value along the y-axis
	float y;

	// The value along the z-axis
	float z;

	// Default Constructor
	// Accepts no parameters
	// Returns nothing
	Vector3();

	// Parameterized Constructor
	// Accepts a value to set for all axis
	// Returns nothing
	Vector3(float value);

	// Parameterized Constructor
	// Accepts values for all axis
	// Returns nothing
	Vector3(float x, float y, float z);

	// Destructor
	// Accepts no parameters
	// Returns nothing
	~Vector3();

	// Copy Constructor
	// Accepts a reference to another Vector3
	// returns nothing
	Vector3(const Vector3& rhs);

	// Assignment Operator Overload
	// Accepts a reference to another Vector3
	// Returns a refernce to the new Vector3
	Vector3& operator=(const Vector3& rhs) ;

	// Add Operator Overload
	// Accepts a reference to the right hand side of the operation
	// Returns a copy to the new Vector3
	Vector3 operator+(const Vector3& rhs) const;

	// Minus Operator Overload
	// Accepts a reference to the right hand side of the operation
	// Returns a copy to the new Vector3
	Vector3 operator-(const Vector3& rhs) const;

	// Multiply Operator Overload
	// Accepts a reference to the right hand side of the operation
	// Returns a copy to the new Vector3
	Vector3 operator*(const float& scalar) const;

	// Division Operator Overload
	// Accepts a reference to the right hand side of the operation
	// Returns a copy to the new Vector3
	Vector3 operator/(const float& scalar) const;

	// Addition assignment Operator Overload
	// Accepts a reference to the right hand side of the operation
	// no return, values are changed internally
	void operator+=(const Vector3& rhs);

	// Subtract assignment Operator Overload
	// Accepts a reference to the right hand side of the operation
	// no return, values are changed internally
	void operator-=(const Vector3& rhs);

	// Multiply assignment Operator Overload
	// Accepts a reference to the right hand side of the operation
	// no return, values are changed internally
	void operator*=(const float& scalar);

	// Division assignment Operator Overload
	// Accepts a reference to the right hand side of the operation
	// no return, values are changed internally
	void operator/=(const float& scalar);

	// Function that streams each axis position stored
	void vOut();

	// Add Scaled Vector
	// Adds a vector that is scaled by a provided scalar to
	// this vector.
	void addScaledVector(const Vector3& vector, float scalar);

	// Normalize changes the value of the vector to be a unit lenght
	void Normalize();

	// Magnitude will return the lenght of then vector
	float Magnitude();

	// Inverse will invert the direction of the vector
	Vector3 Inverse();
};