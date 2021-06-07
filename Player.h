#pragma once
#include "GameObject.h"

class Player : public GameObject {

public:

    RectangleShape shape;

    bool IsMoovingA = false;
    bool IsMoovingD = false;
    float speed = 5;
    int score = 0;

    void Move();

    void Borders(int boardersX);

    void ChangeSpeed(float speedN);
};