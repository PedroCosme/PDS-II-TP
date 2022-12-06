#include "weapon.hpp"

// Weapon::Weapon(std::string name, unsigned int minDamage, unsigned int maxDamage, int price, int id)
//     : _name(name), _minimumDamage(minDamage), _maximumDamage(maxDamage), Item(price, id)
// {
// }
Weapon::Weapon(std::string name, unsigned int minDamage, unsigned int maxDamage, int price, int id)
    : Item(name, price, id), _name(name), _minimumDamage(minDamage), _maximumDamage(maxDamage)
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
    return this->_name;
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
    {WEAPONS::UNARMED, Weapon("Unarmed", 1, 2, 2, 25)},
    {WEAPONS::DAGGER, Weapon("Dagger", 2, 8, 50, 3)},
    {WEAPONS::LONGSWORD, Weapon("Longsword", 4, 12, 120, 4)},
    {WEAPONS::GREATSWORD, Weapon("Greatsword", 6, 16, 180, 5)},
    {WEAPONS::BATTLEAXE, Weapon("Battle Axe", 8, 20, 220, 6)}

};
