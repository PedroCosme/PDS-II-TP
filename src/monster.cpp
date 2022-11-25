#include "monster.hpp"
#include <cmath>
#include <string>

Monster::Monster(std::string name, int currentHp)
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
  if (_currentHp > 0)
  {
    return true;
  }
  else
    return false;
}

unsigned int Monster::monsterDamage(unsigned int damageAmount)
{
  unsigned int damage = damageAmount;

  return damage;
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

void Monster::mtakeDamage(unsigned int damage)
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
