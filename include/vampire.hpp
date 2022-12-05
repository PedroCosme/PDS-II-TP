#ifndef _VAMPIRE_HPP_
#define _VAMPIRE_HPP_

#include "monster.hpp"

class Vampire : public Monster
{
public:
    Vampire(std::string name = "Vampire", uint hitPoints = 300, uint maxDamage = 2, uint minDamage = 18, uint maxHp = 300);
    ~Vampire();

    uint drainBlood();
    uint deathRay();

private:
};

#endif