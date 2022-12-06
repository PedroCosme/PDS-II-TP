#include "enemy.hpp"
#include "monster.hpp"
Enemy::Enemy(uint gold,
             uint xpWorth,
             std::string name,
             int currentHp,
             uint maxHp,
             uint maxDamage,
             uint minDamage) : _gold(gold), _xpWorth(xpWorth), Monster(name, currentHp, maxHp, maxDamage, minDamage){};

Enemy::~Enemy() {}

unsigned int Enemy::goldWorth() const
{
    return _gold;
}

unsigned int Enemy::xpWorth()
{
    return _xpWorth;
}
