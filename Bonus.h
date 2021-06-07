#pragma once

#include "GameObject.h"
#include "Player.h"


class Bonus : public GameObject {

public:
    CircleShape shape;

    void MoveDown();


    void ChangeShape(Vector2f positionN, float radius);

    bool CollisionsPlayer(Player player);

    Vector2f Distance(Vector2f point);

};