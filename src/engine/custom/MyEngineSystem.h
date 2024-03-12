// =====================
// Custom physics engine
// =====================

#ifndef __MY_ENGINE_H__
#define __MY_ENGINE_H__

#include "../EngineCommon.h"
#include <vector> // including vector library for movement
#include <memory>
#include "../GameMath.h" // including the game maths header

class MyEngineSystem {
	friend class XCube2Engine;
	private:
		// private vector variables for gravity and drag
		Vector2f gravity;
		Vector2f drag;

	public:
		// public function declarations for setting gravity, drag, and updating
		void setGravity(float gravityVal, float worldUpdateInterval);
		void setDrag(float dragVal, float worldUpdateInterval);
		void update();
};

#endif