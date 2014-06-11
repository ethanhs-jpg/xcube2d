#ifndef __PHYSICS_ENGINE_H__
#define __PHYSICS_ENGINE_H__

#include <vector>
#include <memory>

#include "../math/GameMath.h"

static const float DEFAULT_GRAVITY = -1.0f;

class PhysicsObject;

class PhysicsEngine {
	friend class XCube2Engine;
	friend class PhysicsObject;
	private:
		Vector3f gravity;
		PhysicsEngine();

		std::vector<std::shared_ptr<PhysicsObject>> objects;

		bool isOnPlatform(std::shared_ptr<PhysicsObject>);

	public:
		/**
		* Note that gravity is naturally a negative value
		* update interval in seconds
		*/
		void setGravity(float gravityValue, float worldUpdateInterval);
		void update();

		void registerObject(std::shared_ptr<PhysicsObject>);
};

class PhysicsObject {
	friend class PhysicsEngine;
	protected:
		Point3f center;
		float lX, lY, lZ, hlX, hlY, hlZ;	// lengths and half lengths

		Vector3f force;

		void applyForce(const Vector3f &);
	public:
		PhysicsObject(const Point3f & center, float x, float y, float z);

		Point3f getCenter() { return center; }
		float getLengthX() { return lX; }
		float getLengthY() { return lY; }
		float getLengthZ() { return lZ; }
		float getHalfLengthX() { return hlX; }
		float getHalfLengthY() { return hlY; }
		float getHalfLengthZ() { return hlZ; }

		bool isColliding(const PhysicsObject & other);
		/**
		* If we have different implementations of engines/gravity
		* this can be very useful
		*/
		virtual void applyGravity(const PhysicsEngine & engine);
		virtual void applyAntiGravity(const PhysicsEngine & engine);
};

#endif