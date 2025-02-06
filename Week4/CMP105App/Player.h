#pragma once
#include "Framework/GameObject.h"
class Player:public GameObject
{
public:
	Player();
	~Player();
	void handleInput(float dt);
	sf::View view;


private:
	enum viewAtBounds {
		none,
		left,
		right
	};
	viewAtBounds boundsHit = none;
};

