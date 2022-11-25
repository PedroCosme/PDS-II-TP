#include "weapon.hpp"

Weapon::Weapon(std::string name, unsigned int minDamage, unsigned int maxDamage)
    : _name(name), _minimumDamage(minDamage), _maximumDamage(maxDamage)
{
}

WEAPONS getFromName(std::string weaponName)
{
    WEAPONS result = WEAPONS::UNARMED;

    std::string low = toLower(weaponName);
    if (low == "dagger")
    {
        result = WEAPONS::DAGGER;
    }
    else if (low == "longsword")
    {
        result = WEAPONS::LONGSWORD;
    }
    else if (low == "great sword")
    {
        result = WEAPONS::GREATSWORD;
    }
    else if (low == "battle axe")
    {
        result = WEAPONS::BATTLEAXE;
    }

    return result;
}

std::string Weapon::getName()
{
    return _name;
}

unsigned int Weapon::damageRange()
{
    return _maximumDamage - _minimumDamage;
}

unsigned int Weapon::getDamage()
{
    uint weaponDamage = genNum(this->_minimumDamage, this->_maximumDamage);
    return weaponDamage;
}

std::map<WEAPONS, Weapon> availableWeapons = std::map<WEAPONS, Weapon>{
    {WEAPONS::UNARMED, Weapon("Unarmed", 1, 2)},
    {WEAPONS::DAGGER, Weapon("Dagger", 1, 4)},
    {WEAPONS::LONGSWORD, Weapon("Longsword", 1, 8)},
    {WEAPONS::GREATSWORD, Weapon("Greatsword", 2, 12)},
    {WEAPONS::BATTLEAXE, Weapon("Battle Axe", 2, 12)}

};
