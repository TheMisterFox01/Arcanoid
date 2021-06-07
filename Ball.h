#pragma once
#include "GameObject.h"
#include "Player.h"
#include "Block.h"

class Ball : public GameObject {

public:

    sf::CircleShape shape;

    sf::Vector2f speed;


    void Move();

    void CollisionsPlayer(Player player);

    bool CollisionBlock(Block* block);

    void Borders(int boardersX, int boardersY, Player* player);

    void ChangeSpeed(sf::Vector2f speedN);

    void ChangeShape(sf::Vector2f positionN, float radius);

    sf::Vector2f Distance(sf::Vector2f point);

};