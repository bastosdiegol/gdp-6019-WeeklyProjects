#include <iostream>

#include "Vector3.h"

int main(int argc, char** argv) {

	Vector3 vA(1,3,5);
	vA.vOut();

	Vector3 vB;
	vB.vOut();

	vB = vA*2;
	vB.vOut();
	vB *= 2;
	vB.vOut();

	Vector3 vC;
	vC += vA;
	vC.vOut();
	vC += vB;
	vC.vOut();

	vC /= 5;
	vC.vOut();

	//vC = vC - vB;
	//vC.vOut();

	vC = vB / 2;
	vC.vOut();

	return EXIT_SUCCESS;
}