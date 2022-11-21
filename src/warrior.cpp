#include "warrior.hpp"
#include <playableCharacter.hpp>

// Warrior::Warrior(std::string name, float hp, float mp, int lvl, int xp, Equipment equipment, std::set<Equipment> &equipments) {}

Warrior::Warrior(std::string name, int lvl, int xp, float hp, float mp) : PlayableCharacter(name, lvl, xp), _hp(hp), _mp(mp) {}
//(std::string name, float hp, float mp, int lvl, int xp) {}

float Warrior::get_mp()
{
    return this->_mp;
}
float Warrior::get_hp()
{
    return this->_hp;
}
