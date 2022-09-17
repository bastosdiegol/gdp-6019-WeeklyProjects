#include <iostream>
#include "Vector3.h"

void VectorTest() {
	Vector3 v(2, 3, 4);
	float mag = v.Magnitude();

	std::cout << "Vector(2, 3, 4)\n";
	std::cout << "Magnitude of the vector is: " << mag << "\n";

	v.Normalize();
	std::cout << "The vector normalized is: ";
	v.vOut();

	v.Inverse();
	std::cout << "The inverse of the normalized vector is:";
	v.vOut();
}

int main(int argc, char** argv) {
	VectorTest();

	return EXIT_SUCCESS;
}