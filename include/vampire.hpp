#ifndef _VAMPIRE_HPP_
#define _VAMPIRE_HPP_

#include "monster.hpp"

class Vampire : public Monster
{
public:
    Vampire(std::string name = "Vampire", uint hitPoints = 150, uint maxDamage = 2, uint minDamage = 18, uint maxHp = 150);
    ~Vampire();

    uint drainBlood();

private:
};

#endif