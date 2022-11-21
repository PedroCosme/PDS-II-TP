#include <iostream>
#include "slime.hpp"
#include "monster.hpp"

Slime::Slime(float hp, int difficulty) : _hp(hp), _difficulty(difficulty){};

void Slime::set_hp(float hp)
{
    _hp = hp;
};

float Slime::get_hp()
{
    return _hp;
};

// float Slime::attack()
// {
//     return attack;
// };
// void Monster::take_damage() const override
// {
//     set_hp(get_hp() - attack());
// }
void Slime::hp_multiplier(int multiplier)
{
    this->_hp = get_hp() * multiplier;
};
