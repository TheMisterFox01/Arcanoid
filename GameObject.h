#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
using namespace sf;

class GameObject {
public:

	sf::Vector2f GetPosition();
	virtual void Render(sf::RenderWindow& renderWindow);
	virtual void SetPosition(const sf::Vector2f position);
	sf::Vector2f position;

	Vector2f GetNearPoint(Vector2f objectPosition);
	Vector2f size;
private:

};