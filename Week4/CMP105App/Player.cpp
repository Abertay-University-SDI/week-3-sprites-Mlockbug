#include "Player.h"

Player::Player()
{
	
}

Player::~Player()
{

}

void Player::handleInput(float dt)
{
	boundsHit = none;
	if (view.getCenter().x <= window->getSize().x/2) { boundsHit = left; }
	if (view.getCenter().x >= 11038-(window->getSize().x/2)) { boundsHit = right; }

	if (input->isKeyDown(sf::Keyboard::A)) {
		move(sf::Vector2f(-100, 0) * dt);
		if (boundsHit != left) { view.move(sf::Vector2f(-100, 0) * dt); }
	}
	if (input->isKeyDown(sf::Keyboard::W)) {
		move(sf::Vector2f(0,-100) * dt);
	}
	if (input->isKeyDown(sf::Keyboard::D)) {
		move(sf::Vector2f(100, 0) * dt);
		if (boundsHit != right) { view.move(sf::Vector2f(100, 0) * dt); }
	}
	if (input->isKeyDown(sf::Keyboard::S)) {
		move(sf::Vector2f(0,100) * dt);
	}
	window->setView(view);
}
