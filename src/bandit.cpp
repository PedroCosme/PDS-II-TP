#include <iostream>
#include "bandit.hpp"

Bandit::Bandit (float hp, int difficulty):_hp(hp),_difficulty(difficulty);



void Bandit::set_hp (int hp){
    _hp += hp;
};
    
float Bandit::get_hp (){
    return _hp;
};

void Bandit::attack(){
    return attack;
};

float Bandit::hp_multiplier(){
    return hp_multiplier;
};
float Bandit::take_damage(){
    _hp -= 10 //valor não definido
};
