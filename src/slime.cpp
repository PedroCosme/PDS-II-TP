#include <iostream>
#include "slime.hpp"

Slime::Slime (float hp, int difficulty):_hp(hp),_difficulty(difficulty);



void Slime::set_hp (int hp){
    _hp += hp;
};
    
float Slime::get_hp (){
    return _hp;
};

void Slime::attack(){
    return attack;
};

float Slime::hp_multiplier(){
    return hp_multiplier;
};
float Slime::take_damage(){
    _hp -= 10 //valor não definido
};
