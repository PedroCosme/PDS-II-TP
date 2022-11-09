#include <iostream>
#include <string>
#include <playableCharacter.hpp>

PlayableCharacter::PlayableCharacter(std::string name,
float hp, float mp, int lvl, int xp, Equipment equipment,
std::set<Equipment>& equipments)
{
 _name = name;
 _hp = hp;
 _mp = mp;
 _lvl = lvl;
 _xp = xp;
 _equipment = equipment;
 _equipments = equipments;
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
