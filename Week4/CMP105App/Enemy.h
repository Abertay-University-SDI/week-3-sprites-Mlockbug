#pragma once
#include "Framework/GameObject.h"
class Enemy:public GameObject
{
public:
	Enemy();
	~Enemy();
	void update(float dt);

private:
	sf::Texture sprite;
	int dirX = 1;
	int dirY = 1;
};

