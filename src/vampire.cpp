#include "vampire.hpp"

Vampire::Vampire(uint gold, uint xpWorth, std::string name, uint hitPoints, uint maxDamage, uint minDamage, uint maxHp) : Enemy(gold, xpWorth, name, hitPoints, maxDamage, minDamage, maxHp){};
Vampire::~Vampire() {}

uint Vampire::drainBlood()
{
    int damage = genNum(_minDamage, _maxDamage);
    this->_currentHp += damage;
    return damage;
}