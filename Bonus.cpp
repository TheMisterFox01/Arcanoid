
#include "Bonus.h"

    void Bonus::MoveDown() {

        position.y += 1;
        shape.setPosition(position);

    }


    void Bonus::ChangeShape(Vector2f positionN, float radius) {
        position = positionN;
        shape.setRadius(radius);
        shape.setPosition(positionN);
    }

    bool Bonus::CollisionsPlayer(Player player) {


        if (Distance(player.GetNearPoint(position)).y <= 1 && Distance(player.GetNearPoint(position)).x <= 1) {
            return true;
        }
        return false;

    }

    Vector2f Bonus::Distance(Vector2f point) {
        Vector2f vector;
        vector.x = abs(point.x - position.x);
        vector.y = abs(point.y - position.y);
        if (point.y > position.y) {
            vector.y -= shape.getRadius() * 2;
        }
        if (point.x > position.x) {
            vector.x -= shape.getRadius() * 2;
        }
        return vector;
    }
