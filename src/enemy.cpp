#include "enemy.hpp"

Enemy::Enemy(std::string &name, int gold, uint hitPoints)
    : Monster(name, hitPoints * 10U),
      mGold(gold) {}
Enemy::~Enemy()
{
}

unsigned int Enemy::GoldWorth() const
{
    return mGold;
}