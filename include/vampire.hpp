#ifndef _VAMPIRE_HPP_
#define _VAMPIRE_HPP_
#include "enemy.hpp"

class Vampire : public Enemy
{
public:
    Vampire(uint gold = 10000, uint xpWorth = 2000, std::string name = "Vampire", uint hitPoints = 300, uint maxDamage = 2, uint minDamage = 18, uint maxHp = 300);
    ~Vampire();

    uint drainBlood();
    uint deathRay();

private:
};

#endif