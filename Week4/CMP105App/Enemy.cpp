#include "Enemy.h"

Enemy::Enemy()
{

}

Enemy::~Enemy()
{

}

void Enemy::update(float dt)
{
	move(sf::Vector2f(dirX, dirY) * dt * 200.0f);
	if (getPosition().x <= 0 || getPosition().x >= window->getSize().x) { dirX *= -1; }
	if (getPosition().y <= 0 || getPosition().y >= window->getSize().y) { dirY *= -1; }
}
