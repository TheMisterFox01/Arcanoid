#include "Block.h"




    void Block::Damaged() {
        if (!IsImmortal) {
            hp -= 1;
        }
        if (hp == 0) {
            IsAlive = false;
            shape.setSize(Vector2f(0, 0));
        }
    }

    void Block::BonusBlock(bool bonus, bool immortal) {
        IsBonus = bonus;
        IsImmortal = immortal;
    }

