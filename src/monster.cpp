#include "monster.hpp"
#include <cmath>

Monster::Monster(std::string &name, unsigned int toughness)
    : mName(name),
      mToughnessSkill(toughness)
{
  mCurrentHp = getMaximumHp();
}

Monster::Monster(Monster &monster)
    : mName(monster.mName),
      mToughnessSkill(monster.mToughnessSkill)
{
  mCurrentHp = getMaximumHp();
}

Monster::~Monster()
{
}

unsigned int Monster::getMaximumHp() const
{
  return mToughnessSkill / 10U;
}

std::string Monster::getName() const
{
  return mName;
}

bool Monster::isAlive() const
{
  return mCurrentHp > 0;
}

bool Monster::damage(unsigned int damageAmount)
{
  if (mCurrentHp > damageAmount)
  {
    mCurrentHp -= damageAmount;
    return true;
  }
  mCurrentHp = 0;
  return false;
}

float Monster::hpPPercentage() const
{
  return (float)mCurrentHp / (float)getMaximumHp();
}

std::string Monster::currentHealth() const
{
  return std::to_string(mCurrentHp) + " / " + std::to_string(getMaximumHp());
}

std::string Monster::ToString() const
{
  return mName + " - Health: " + currentHealth() + " TUF:" + std::to_string(mToughnessSkill);
}

bool Monster::takeDamage(unsigned int damage)
{
  if (damage >= mCurrentHp)
  {
    mCurrentHp = 0;
    return false;
  }
  mCurrentHp -= damage;
  mToughnessSkill++;
  return true;
}
