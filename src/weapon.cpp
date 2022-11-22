#include "weapon.hpp"
#include "utilities.hpp"

Weapon::Weapon(std::string name)
    : _name(name) {}

// Weapon::Weapon(Weapon &weapon) : _name(weapon._name){};

Weapon::~Weapon(){};

std::string Weapon::getWeaponName()
{
    return _name;
}
