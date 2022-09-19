#include <iostream>
#include <cmath>

#include "Vector3.h"
#include "Particle.h"
#include "ParticleManager.h"

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

class Tank {
public:
	Tank() {}
	~Tank() {}

	Vector3 position;
	float radius;
};

void ParticleManagerTest(int xVelocity, int yVelocity) {
	Tank enemyTank;
	enemyTank.position = Vector3(80.0f, 0.0f, 0.0f);
	enemyTank.radius = 2; // Hit > [78.f, 82.f]

	ParticleManager particleManager;

	Particle& p = particleManager.CreateParticle(Vector3(0, 1, 0));
	p.velocity = Vector3((float)xVelocity, (float)yVelocity, 0);

	// Cannon --->

	for (int i = 0; i < 100; i++) {
		particleManager.Integrate(0.01f);
	}

	float distanceToTarget = abs(enemyTank.position.x - p.position.x);
	// Why abs -> ensure to have a positive result
	//  a+b  ===  b+a
	//  a-b  =/=  b-a
	// |a-b| === |b-a|

	std::cout << "------------------------\n\n";

	if (distanceToTarget <= enemyTank.radius) {
		std::cout << "Direct Hit!\n";
	}
	else {
		std::cout << "Landed at '" << p.position.x << "' Missed by "
			<< distanceToTarget << " meters!\n";
	}
}


int main(int argc, char** argv) {
	if (argc != 3) {
		std::cout << "Requires x and y velocity!\n";
		return EXIT_FAILURE;
	}
	//VectorTest();
	//ParticleTest();

	int xVelocity, yVelocity;
	sscanf_s(argv[1], "%d", &xVelocity);
	sscanf_s(argv[2], "%d", &yVelocity);

	ParticleManagerTest(xVelocity, yVelocity);
	
	return EXIT_SUCCESS;
}