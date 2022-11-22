#include "great_sword.hpp"

GreatSword::GreatSword(std::string name, unsigned int minDamage, unsigned int maxDamage, float dropRate)
    : Weapon(name), _minDamage(minDamage), _maxDamage(maxDamage), _droprate(dropRate) {}

// std::string Weapon::getWeaponName()
// {
//   return _name;
// }

unsigned int GreatSword::damageRange()
{
  return _maxDamage - _minDamage;
}

unsigned int GreatSword::getDamage(int damage)
{
  return 100;
}