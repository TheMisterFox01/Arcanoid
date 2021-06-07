#include "Player.h"

    void Player::Move() {
        if (IsMoovingA) {
            position.x -= speed;
        }
        else if (IsMoovingD) {
            position.x += speed;
        }
        shape.setPosition(position);
    }

    void Player::Borders(int boardersX) {
        if (position.x + speed + shape.getSize().x >= boardersX && IsMoovingD) {
            IsMoovingD = false;
        }
        else if (position.x - speed <= 0 && IsMoovingA) {
            IsMoovingA = false;
        }
    }

    void Player::ChangeSpeed(float speedN) {

        speed = speedN;

    }