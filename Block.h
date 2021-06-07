#pragma once
#include "GameObject.h"

class Block : public GameObject {

public:

    RectangleShape shape;
    int hp = 1;
    bool IsAlive = true;
    bool IsBonus = false;
    bool IsImmortal = false;

    void Damaged();

    void BonusBlock(bool bonus = false, bool immortal = false);
private:

};