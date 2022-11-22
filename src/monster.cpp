#include "monster.hpp"
#include <cmath>
#include <string>

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

std::string Monster::monsterDamage(unsigned int damageAmount)
{
  std::string attacklog = "The monster attacked you and dealt " + std::to_string(damageAmount) + " damage!";
  
  return attacklog;
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
unsigned int Monster::getCurrentHp()
{
    return this->_currentHp;
}