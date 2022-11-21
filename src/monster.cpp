#include "monster.hpp"
#include <cmath>

Monster::Monster(std::string &name, unsigned int toughness, unsigned int currentHp)
    : _name(name),
      _toughnessSkill(toughness), _currentHp(currentHp)
{
}

Monster::Monster(Monster &monster)
    : _name(monster._name),
      _toughnessSkill(monster._toughnessSkill) {}

Monster::~Monster(){};

std::string Monster::getName() const
{
  return _name;
}

bool Monster::isAlive() const
{
  return _currentHp > 0;
}

bool Monster::damage(unsigned int damageAmount)
{
  if (_currentHp > damageAmount)
  {
    _currentHp -= damageAmount;
    return true;
  }
  _currentHp = 0;
  return false;
}
std::string Monster::currentHealth() const
{
  // return std::to_string(_currentHp) + " / " + std::to_string(getMaximumHp());
  return 0;
}

std::string Monster::ToString() const
{
  return _name + " - Health: " + currentHealth() + " TUF:" + std::to_string(_toughnessSkill);
}

bool Monster::takeDamage(unsigned int damage)
{
  if (damage >= _currentHp)
  {
    _currentHp = 0;
    return false;
  }
  _currentHp -= damage;
  _toughnessSkill++;
  return true;
}
