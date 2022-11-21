#include <iostream>
#include <string>
#include <set>
#include "mage.hpp"

// Mage::Mage(std::set<std::string> spells, std::string name, float hp, float mp, int lvl, int xp, Equipment equipment, std::set<Equipment> &equipments)
// {
//     this->_spells = spells;
// };

Mage::Mage(std::string name, int lvl, int xp, float hp, float mp) : PlayableCharacter(name, lvl, xp), _hp(hp), _mp(mp) {}

float Mage::get_mp()
{
    return this->_mp;
}
float Mage::get_hp()
{
    return this->_hp;
}