#include "weapon.hpp"
#include "ultilities.hpp"

Weapon::Weapon(std::string name)
    : _name(name) {}

Weapon::Weapon(Weapon &weapon) : _name(weapon._name){};

Weapon::~Weapon(){};

std::string Weapon::getName() const
{
    return _name;
}
