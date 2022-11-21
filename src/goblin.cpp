#include <iostream>
#include "goblin.hpp"

Goblin::Goblin(float hp, int difficulty) : _hp(hp), _difficulty(difficulty){};

void Goblin::set_hp(float hp)
{
    this->_hp += hp;
};
float Goblin::get_hp()
{
    return this->_hp;
};
// float Goblin::attack()
// {
//     return attack;
// };

void Goblin::hp_multiplier(int multiplier)
{
    this->_hp = get_hp() * multiplier;
};

void Goblin::take_damage()
{
    this->_hp -= 10; // valor não definido
};
