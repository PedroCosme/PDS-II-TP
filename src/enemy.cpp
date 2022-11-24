#include "enemy.hpp"

Enemy::Enemy(uint gold, uint xpWorth, std::string name, uint hitPoints) : _gold(gold), _xpWorth(xpWorth), Monster(name, hitPoints){};

Enemy::~Enemy()
{
}

unsigned int Enemy::goldWorth() const
{
    return _gold;
}

unsigned int Enemy::xpWorth()
{
    return _xpWorth;
}
