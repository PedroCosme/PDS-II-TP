#include "monster.hpp"

Monster::Monster(std::string name,
                 int currentHp,
                 uint maxHp,
                 uint maxDamage,
                 uint minDamage) : _name(name), _currentHp(currentHp), _maxHp(maxHp), _maxDamage(maxDamage), _minDamage(minDamage) {}

Monster::~Monster(){};

std::string Monster::getName() const
{
  return _name;
}

bool Monster::isAlive() const
{
  if (_currentHp > 0)
  {
    return true;
  }
  else
    return false;
}

unsigned int Monster::monsterDamage()
{
  uint damage = genNum(_minDamage, _maxDamage);

  return damage;
}

uint Monster::getMaximumHp() const
{
  return this->_maxHp;
}

std::string Monster::currentHealth() const
{
  return std::to_string(_currentHp) + " / " + std::to_string(getMaximumHp());
}

void Monster::takeDamage(unsigned int damage)
{
  _currentHp -= damage;
  if (this->getCurrentHp() < 0)
  {
    this->isAlive();
  }
}
int Monster::getCurrentHp()
{
  return this->_currentHp;
}
