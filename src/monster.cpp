#include "monster.hpp"
#include <cmath>

Monster::Monster(std::string name, unsigned int currentHp)
    : _name(name),
      _currentHp(currentHp)
{
}

/*Monster::Monster(Monster &monster)
    : _name(monster._name) {}
*/
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
  return std::to_string(_currentHp) + " / ";
  //+ std::to_string(getMaximumHp());
  // return _currentHp;
}

std::string Monster::ToString() const
{
  return _name + " - Health: " + currentHealth();
}

bool Monster::takeDamage(unsigned int damage)
{
  if (damage >= _currentHp)
  {
    _currentHp = 0;
    return false;
  }
  _currentHp -= damage;
  return true;
}
