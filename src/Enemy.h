#pragma once
#ifndef __ENEMY__
#define __ENEMY__

#include "GameObject.h"

class Enemy : public GameObject
{
public:
	Enemy();
	~Enemy();

	// GameObject Life Cycle
	void draw() override;
	void update() override;
	void clean() override;
	
private:
	void _move();

	void _checkBounds();
};

#endif /* defined (__ENEMY__) */
