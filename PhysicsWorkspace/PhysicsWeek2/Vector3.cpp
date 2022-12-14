#include "Vector3.h"

// Default Constructor
// Accepts no parameters
// Returns nothing
Vector3::Vector3()
	//: Vector3(0.f)
	: x(0.f)
	, y(0.f)
	, z(0.f)
{
	//std::cout << "Default Constructor Vector3()\n";
}

// Parameterized Constructor
// Accepts a value to use for all axis
// Returns nothing
Vector3::Vector3(float value)
	//: Vector3(value, value, value)
	: x(value)
	, y(value)
	, z(value)
{
	//std::cout << "Parameterized Constructor Vector3(float value)\n";
}

// Parameterized Constructor
// Accepts a value for each axis
// Returns nothing
Vector3::Vector3(float x, float y, float z)
	: x(x)
	, y(y)
	, z(z)
{
	//std::cout << "Parameterized Constructor Vector3(float x, float y, float z)\n";
}

// Destructor
// Accepts no parameters
// Returns nothing
Vector3::~Vector3() {
	//std::cout << "Destructor ~Vector3()\n";
}

// Copy Constructor
// Accepts a reference to another Vector3
// returns nothing
Vector3::Vector3(const Vector3& rhs)
//: x(other.x)		This is another option instead
//, y(other.y)		of assigning all of the values
//, z(other.z)		within the constructor.
{
	x = rhs.x;
	y = rhs.y;
	z = rhs.z;

	//std::cout << "Copy Constructor Vector3(const Vector3& rhs)\n";
}

// Assignment Operator Overload
// Accepts a reference to another Vector3
// Returns a refernce to the new Vector3
Vector3& Vector3::operator=(const Vector3& rhs) {
	x = rhs.x;
	y = rhs.y;
	z = rhs.z;

	//std::cout << "Assignment Operator Overload Vector3::operator=(const Vector3& rhs)\n";

	return *this;
}

// Add Operator Overload
// Accepts a reference to the right hand side of the add operation
// Returns a copy to the new Vector3
Vector3 Vector3::operator+(const Vector3& rhs) const {

	// TODO
	//A new vector who will store result of the add operation and return it
	//Vector3 vResult;
	//vResult.x = x + rhs.x;
	//vResult.y = y + rhs.y;
	//vResult.z = z + rhs.z;
	//std::cout << "Add Operator Overload Vector3::operator+(const Vector3& rhs)\n";

	//Instead of creating a variable to store and return values
	//Directly returning the operation optimize 2 lines of execution (operator+destruction)
	return Vector3(x + rhs.x, y + rhs.y, z + rhs.z);
}

// Substract Operator Overload
// Accepts a reference to the right hand side of the substract operation
// Returns a copy to the new Vector3
Vector3 Vector3::operator-(const Vector3& rhs) const {

	// TODO
	//std::cout << "Substract Operator Overload Vector3::operator-(const Vector3& rhs)\n";

	return Vector3(x - rhs.x, y - rhs.y, z - rhs.z);
}

// Multiply Operator Overload
// Accepts a scalar for the multiply operation
// Returns a copy to the new Vector3
Vector3 Vector3::operator*(const float& scalar) const {

	// TODO
	//A new vector who will store result of the multiply operation and return it
	//Vector3 vResult;
	//vResult.x = x * scalar;
	//vResult.y = y * scalar;
	//vResult.z = z * scalar;
	//std::cout << "Multiply Operator Overload Vector3::operator*(const float& scalar)\n";

	return Vector3(x * scalar, y * scalar, z * scalar);
}

// Division Operator Overload
// Accepts a scalar for the division operation
// Returns a copy to the new Vector3
Vector3 Vector3::operator/(const float& scalar) const {

	// TODO
	//std::cout << "Division Operator Overload Vector3::operator/(const float& scalar)\n";

	return Vector3(x / scalar, y / scalar, z / scalar);
}

// Add Assignment Operator Overload
// Accepts a reference to the right hand side of the add operation
// no return, values are changed internally
void Vector3::operator+=(const Vector3& rhs) {

	// TODO
	x += rhs.x;
	y += rhs.y;
	z += rhs.z;

	//std::cout << "Add Assignment Operator Overload Vector3::operator+=(const Vector3& rhs)\n";
}

// Subtract Assignment Operator Overload
// Accepts a reference to the right hand side of the add operation
// no return, values are changed internally
void Vector3::operator-=(const Vector3& rhs) {

	// TODO
	x -= rhs.x;
	y -= rhs.y;
	z -= rhs.z;

	//std::cout << "Subtract Assignment Operator Overload Vector3::operator-=(const Vector3& rhs)\n";
}

// Multiply Assignment Operator Overload
// Accepts a reference to the right hand side of the add operation
// no return, values are changed internally
void Vector3::operator*=(const float& scalar) {

	// TODO
	x *= scalar;
	y *= scalar;
	z *= scalar;

	//std::cout << "Multiply Assignment Operator Overload Vector3::operator*=(const Vector3& rhs)\n";
}

// Division Assignment Operator Overload
// Accepts a reference to the right hand side of the add operation
// no return, values are changed internally
void Vector3::operator/=(const float& scalar) {

	// TODO
	x /= scalar;
	y /= scalar;
	z /= scalar;

	//std::cout << "Division Assignment Operator Overload Vector3::operator/=(const Vector3& rhs)\n";
}

// Function that streams each axis position internally stored
void Vector3::vOut() {
	std::cout << "(" << x << ", " << y << ", " << z << ")\n";
}

// Add Scaled Vector
// Adds a vector that is scaled by a provided scalar to
// this vector.
void Vector3::addScaledVector(const Vector3& vector, float scalar)
{
	*this += vector * scalar;
}

// Normalize changes the value of the vector to be a unit lenght
void Vector3::Normalize() {
	*this /= Magnitude();
}

// Magnitude will return the lenght of then vector
float Vector3::Magnitude() {
	return sqrt(x * x + y * y + z * z);;
}

// Inverse will invert the direction of the vector
Vector3 Vector3::Inverse() {
	return *this * -1.f;
}
