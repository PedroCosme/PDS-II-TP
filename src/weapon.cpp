#include "weapon.hpp"
#include "utilities.hpp"

Weapon::Weapon(std::string name, unsigned int minDamage, unsigned int maxDamage)
    : _name(name), _minimumDamage(minDamage), _maximumDamage(maxDamage)
{
}
// Weapon::Weapon(Weapon &weapon) : _name(weapon._name){};
Weapon::~Weapon(){};

std::string Weapon::getName()
{
    return _name;
}

unsigned int Weapon::damageRange()
{
    return _maximumDamage - _minimumDamage;
}

unsigned int Weapon::getDamage(int damage)
{
    return 0;
}

std::map<WEAPONS, Weapon> AvailableWeapons = std::map<WEAPONS, Weapon>{
    {WEAPONS::UNARMED, Weapon("Unarmed", 1, 2)},
    {WEAPONS::DAGGER, Weapon("Dagger", 1, 4)},
    {WEAPONS::LONGSWORD, Weapon("Longsword", 1, 8)},
    {WEAPONS::GREATSWORD, Weapon("Greatsword", 2, 12)},
    {WEAPONS::BATTLEAXE, Weapon("Battle Axe", 2, 12)}

};
