#include <iostream>
#include <string>
#include <set>
#include "playableCharacter.hpp"
#include "equipment.hpp"

PlayableCharacter::PlayableCharacter(std::string name,
float hp, float mp, int lvl, int xp, Equipment equipment,
std::set<Equipment> &equipments)
{
 this->_name = name;
 this->_hp = hp;
 this->_mp = mp;
 this->_lvl = lvl;
 this->_xp = xp;
 this->_equipment = equipment;
 this->_equipments = equipments;
};
float PlayableCharacter::get_hp(){
    return this->_hp;
};
float PlayableCharacter::get_mp(){
    return this->_mp;
};
int PlayableCharacter::get_lvl(){
    return this->_lvl;
};
int PlayableCharacter::get_xp(){
    return this->_xp;
};
void PlayableCharacter::set_hp(float hp){
    this->_hp += hp;
};
void PlayableCharacter::set_mp(float mp){
    this->_mp += mp;
};
void PlayableCharacter::set_lvl(int lvl){
    if(this->_xp == 500){
        this->_lvl += 1;
    };
};
void PlayableCharacter::set_xp(int xp){
    this->_xp += xp;
};
bool PlayableCharacter::is_alive(){
    if (this->get_hp() <= 0){
        return false;
    }
    else{
    return true;
    }
};
Equipment PlayableCharacter::get_equipment(){
    return this->_equipment;
};

void PlayableCharacter::set_equipment(Equipment equipment){
    this->_equipment = equipment;
}

void PlayableCharacter::print_equipments(std::set<Equipment> &equipments){
    for (auto &i : this->_equipments){
        std::cout << &i << ' ';
    }
    std::cout << std::endl;
};

void PlayableCharacter::change_equipment(std::set<Equipment> &equipments){
    Equipment choosen_equip;
    this->print_equipments(equipments);
    std::cout << "Escolha o equipamento";
    this->set_equipment(choosen_equip);
};

void PlayableCharacter::add_equipment(Equipment equipment){
    this->_equipments.insert(equipment);
}





