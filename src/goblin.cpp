#include <iostream>
#include "goblin.hpp"

Goblin::Goblin (float hp, int difficulty):_hp(hp),_difficulty(difficulty);



void Goblin::set_hp (int hp){
    _hp += hp;
};    
float Goblin::get_hp (){
    return _hp;
};     
void Goblin::attack(){
    return attack;
}; 

float Goblin::hp_multiplier(){
    return hp_multiplier;
}; 
float Goblin::take_damage(){
    _hp -= 10 //valor não definido
}; 
