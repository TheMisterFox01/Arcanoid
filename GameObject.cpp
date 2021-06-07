#include "GameObject.h"

Vector2f GameObject::GetNearPoint(Vector2f objectPosition) {
    Vector2f point;
    if (position.x + size.x >= objectPosition.x && position.x <= objectPosition.x) {
        point.x = objectPosition.x;
    }
    else if (position.x >= objectPosition.x) {
        point.x = position.x;
    }
    else {
        point.x = position.x + size.x;
    }
    if (position.y + size.y >= objectPosition.y && position.y <= objectPosition.y) {
        point.y = objectPosition.y;
    }
    else if (position.y >= objectPosition.y) {
        point.y = position.y;
    }
    else {
        point.y = position.y + size.y;
    }
    return point;
}