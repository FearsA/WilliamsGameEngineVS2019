#pragma once

#include "Engine/GameEngine.h"

class Laser : public GameObject
{
public:
	// Creates our Laser.
	Laser(sf::Vector2f pos);

	// Functions overridden from GameObject:
	void draw();
	void update(sf::Time& elapsed);
	sf::FloatRect getCollisionRect();
private:
	sf::Sprite sprite_;
};

typedef std::shared_ptr<Laser> LaserPtr;