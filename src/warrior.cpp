#include "warrior.hpp"

Warrior::Warrior(std::string name, float hp, float mp, int lvl, int xp, Equipment equipment, std::set<Equipment>& equipments){
    this -> _hp = hp;
    this -> _mp = mp;
    this -> _lvl = lvl;
    this -> _xp = xp;
    this -> _equipment = equipment;
    this -> _equipments = equipments;
}
