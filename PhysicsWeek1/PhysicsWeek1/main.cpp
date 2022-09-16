#include <iostream>

#include "Vector3.h"

void PrintVector(const Vector3& v)
{
	std::cout << "(" << v.x << ", " << v.y << ", " << v.z << ")";
}

bool CompareVector(const Vector3& v, int x, int y, int z)
{
	if (v.x == x && v.y == y && v.z == z)
		return true;

	return false;
}

// TestVector3Implementations
// Runs functions on Vector3 to determine if
// the resulting value is correct or not.
void TestVector3Implementations()
{
	Vector3 vA(6, 9, 12);
	Vector3 vB(1, 2, 3);
	Vector3 result;

	// operator+
	result = vA + vB;
	std::cout << "vA + vB = ";
	PrintVector(result);
	std::cout << "\n";
	if (CompareVector(result, vA.x + vB.x, vA.y + vB.y, vA.z + vB.z))
		std::cout << "Correct!\n";
	else
		std::cout << "Incorrect!\n";

	// operator-
	result = vA - vB;
	std::cout << "vA - vB = ";
	PrintVector(result);
	std::cout << "\n";
	if (CompareVector(result, vA.x - vB.x, vA.y - vB.y, vA.z - vB.z))
		std::cout << "Correct!\n";
	else
		std::cout << "Incorrect!\n";

	// operator*
	result = vA * 3;
	std::cout << "vA * 3 = ";
	PrintVector(result);
	std::cout << "\n";
	if (CompareVector(result, vA.x * 3, vA.y * 3, vA.z * 3))
		std::cout << "Correct!\n";
	else
		std::cout << "Incorrect!\n";

	// operator/
	result = vA / 3;
	std::cout << "vA / 3 = ";
	PrintVector(result);
	std::cout << "\n";
	if (CompareVector(result, vA.x / 3, vA.y / 3, vA.z / 3))
		std::cout << "Correct!\n";
	else
		std::cout << "Incorrect!\n";

	// operator+=
	result = vA;
	result += vB;
	std::cout << "vA += vB = ";
	PrintVector(result);
	std::cout << "\n";
	if (CompareVector(result, vA.x + vB.x, vA.y + vB.y, vA.z + vB.z))
		std::cout << "Correct!\n";
	else
		std::cout << "Incorrect!\n";

	// operator-=
	result = vA;
	result -= vB;
	std::cout << "vA - vB = ";
	PrintVector(result);
	std::cout << "\n";
	if (CompareVector(result, vA.x - vB.x, vA.y - vB.y, vA.z - vB.z))
		std::cout << "Correct!\n";
	else
		std::cout << "Incorrect!\n";

	// operator*=
	result = vA;
	result *= 3;
	std::cout << "vA += vB = ";
	PrintVector(result);
	std::cout << "\n";
	if (CompareVector(result, vA.x * 3, vA.y * 3, vA.z * 3))
		std::cout << "Correct!\n";
	else
		std::cout << "Incorrect!\n";

	// operator/=
	result = vA;
	result /= 3;
	std::cout << "vA /= 3 = ";
	PrintVector(result);
	std::cout << "\n";
	if (CompareVector(result, vA.x / 3, vA.y / 3, vA.z / 3))
		std::cout << "Correct!\n";
	else
		std::cout << "Incorrect!\n";
}


int main(int argc, char** argv) {

	//Vector3 vA(1,3,5);
	//vA.vOut();

	//Vector3 vB;
	//vB.vOut();

	//vB = vA*2;
	//vB.vOut();
	//vB *= 2;
	//vB.vOut();

	//Vector3 vC;
	//vC += vA;
	//vC.vOut();
	//vC += vB;
	//vC.vOut();

	//vC /= 5;
	//vC.vOut();

	////vC = vC - vB;
	////vC.vOut();

	//vC = vB / 2;
	//vC.vOut();

	TestVector3Implementations();

	system("Pause");

	return EXIT_SUCCESS;
}