#include <iostream>
#include "bandit.hpp"

Bandit::Bandit(float hp, int difficulty) : _hp(hp), _difficulty(difficulty){};

void Bandit::set_hp(float hp)
{
    this->_hp += hp;
};

float Bandit::get_hp()
{
    return this->_hp;
};

// int Bandit::attack()
//{
//     return attack;
// };

void Bandit::hp_multiplier(int multiplier)
{
    this->_hp = get_hp() * multiplier;
};

void Bandit::take_damage()
{
    _hp -= 10; // valor não definido
};
