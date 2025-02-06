#include "Cursor.h"

Cursor::Cursor()
{
}

Cursor::~Cursor()
{
}

void Cursor::update(float dt)
{
	setPosition(sf::Vector2f(sf::Mouse::getPosition()));
}
