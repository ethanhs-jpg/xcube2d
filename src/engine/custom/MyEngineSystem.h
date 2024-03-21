// =====================
// Custom physics engine
// =====================

#ifndef __MY_ENGINE_H__
#define __MY_ENGINE_H__

#include "../EngineCommon.h"
#include <vector> // including vector library for movement
#include <memory>
#include "../GameMath.h" // including the game maths header

/*
Features to add
===============

1. Add world bounds that the player object collides with
2. Integrate text, images, and audio
	a. Background picture
	b. Sound effect when hitting objects
	c. Text popups?
3. Add gravity at a chosen value (moon gravity?) to make the player fall
	a. If they press the downwards movement key (D/down arrow), make them fall faster
	b. Jumping will have to fight against gravity and eventually be overcome before falling down
4. Add platforms that players can collide with and jump on - perhaps let them jump around the world and collect items
5. Add acceleration and deceleration when jumping and moving left/right whilst in the air

===============
*/

class MyEngineSystem {
	friend class XCube2Engine;
	private:
		// private vector variables for gravity and drag
		Vector2f gravity;
		Vector2f drag;

	public:
		void setBounds(float width, float height); // setting world bounds for collision
		void setGravity(float gravityVal, float worldUpdateInterval); // setting value of gravity
		void setAcceleration(float dragVal, float worldUpdateInterval); // setting value for acceleration/deceleration
		void update();
};

#endif