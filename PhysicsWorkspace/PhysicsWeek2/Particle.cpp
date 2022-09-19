#include "Particle.h"

Particle::Particle()
	: position(0.0f)
	, velocity(0.0f)
	, acceleration(0.0f)
	, damping(1.0f)
	, mass(1.0f)
{
}

Particle::~Particle() {
}

// NewPosition = OldPosition + Velocity * deltaTime
// p1 = p0 + v * dt

// NewVelocity = OldVelocity + Acceleration * deltaTime
// v1 = v0 + a * dt

void Particle::PrintInfo() {
	std::cout << "------------------------\n";
	std::cout << "Velocity";
	velocity.vOut();
	std::cout << "Position";
	position.vOut();
}

void Particle::Integrate(float dt) {
	//velocity = velocity + acceleration * dt;
	//velocity *= damping;
	//position = position + velocity * dt;
	velocity.addScaledVector(acceleration, dt);
	velocity *= damping;
	position.addScaledVector(velocity, dt);
}