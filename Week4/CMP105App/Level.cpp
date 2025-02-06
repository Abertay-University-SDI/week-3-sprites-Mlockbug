#include "Level.h"
#include "Player.h"
#include "Enemy.h"
#include "Background.h"
#include "Cursor.h"

Player p1;
Enemy e1, e2;
Background bg;
Cursor cursor;
Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	window->setMouseCursorVisible(false);

	// initialise game objects
	texture.loadFromFile("gfx/snas.png");

	p1.setTexture(&texture);
	p1.setSize(sf::Vector2f(100, 100));
	p1.setPosition(100, 100);
	p1.setInput(in);
	p1.setWindow(hwnd);
	p1.view = window->getDefaultView();

	enemyTexture.loadFromFile("gfx/snas.png");
	e1.setTexture(&enemyTexture);
	e1.setSize(sf::Vector2f(50,50));
	e1.setPosition(500,500);
	e1.setWindow(hwnd);

	enemyTexture2.loadFromFile("gfx/snas.png");
	e2.setTexture(&enemyTexture2);
	e2.setSize(sf::Vector2f(20, 20));
	e2.setPosition(500, 200);
	e2.setWindow(hwnd);

	bgTexture.loadFromFile("gfx/Level1_1.png");
	bg.setTexture(&bgTexture);
	bg.setSize(sf::Vector2f(11038, 675));
	bg.setPosition(0, 0);

	cTexture.loadFromFile("gfx/icon.png");
	cursor.setTexture(&cTexture);
	cursor.setSize(sf::Vector2f(20, 20));
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	p1.handleInput(dt);
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}

}

// Update game objects
void Level::update(float dt)
{
	e1.update(dt);
	e2.update(dt);
	cursor.update(dt);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(bg);
	window->draw(testSprite);
	window->draw(p1);
	window->draw(e1);
	window->draw(e2);
	window->draw(cursor);

	endDraw();
}
