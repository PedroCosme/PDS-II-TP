#include "enemy.hpp"

Enemy::Enemy(std::string name, int gold, uint hitPoints)
    : Monster(name, hitPoints * 10U),
      _gold(gold) {}
Enemy::~Enemy()
{
}

unsigned int Enemy::goldWorth() const
{
    return _gold;
}