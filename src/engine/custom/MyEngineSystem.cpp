// =====================
// Custom physics engine
// =====================

#include "MyEngineSystem.h"

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

void MyEngineSystem::setBounds(float screenWidth, float screenHeight) {
	// setting the world bounds here

}

void MyEngineSystem::setGravity(float value, float interval) {
	// setting value of gravity here

}

void MyEngineSystem::setAcceleration(float value, float interval) {
	// setting value of drag here

}

void MyEngineSystem::update() {
	// updating the physics here

}