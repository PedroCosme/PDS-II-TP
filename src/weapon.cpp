#include "weapon.hpp"
#include "ultilities.hpp"

Weapon::Weapon(std::string name, unsigned int minDamage, unsigned int maxDamage)
    : _name(name), _minDamage(minDamage), _maxDamage(maxDamage) {}

Weapon::Weapon(Weapon &weapon) : _name(weapon._name), _minDamage(weapon._minDamage), _maxDamage(weapon._maxDamage){};

Weapon::~Weapon(){};

std::string Weapon::getName() const
{
    return _name;
}

unsigned int Weapon::damageRange() const
{
    return _maxDamage - _minDamage;
}

unsigned int Weapon::getDamage(int damage) const
{
    return 0;
}