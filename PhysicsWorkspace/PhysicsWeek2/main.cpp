#include <iostream>

#include "Vector3.h"
#include "Particle.h"

void PrintParticleInfo(const Particle& p) {
	std::cout << "Velocity: " << p.velocity.y << "\nPosition: " << p.position.y << "\n\n";
}

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

void ParticleTest() {
	Particle p;
	p.position = Vector3(0.f);
	p.velocity = Vector3(0.f, 5.f, 0.f);
	p.acceleration = Vector3(0.f, -1.f, 0.f);

	while (p.position.y >= 0) {
		p.Integrate(0.1f);
		PrintParticleInfo(p);
	}
}

// NewPosition = OldPosition + Velocity * deltaTime
// p1 = p0 + v * dt

// NewVelocity = OldVelocity + Acceleration * deltaTime
// v1 = v0 + a * dt

int main(int argc, char** argv) {
	//VectorTest();
	ParticleTest();

	return EXIT_SUCCESS;
}