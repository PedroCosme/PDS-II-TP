#include "vampire.hpp"

Vampire::Vampire(std::string name, uint currentHp, uint maxDamage, uint minDamage, uint maxHp) : Monster(name, currentHp, maxDamage, minDamage, maxHp){};
Vampire::~Vampire() {}

uint Vampire::drainBlood()
{
    std::cout << "The vampire jumps at you bearing his fangs, you feel an excruciating pain as him bites your neck and draws your blood. He heals himself using your blood" << std::endl;
    int damage = genNum(_minDamage, _maxDamage);
    this->_currentHp += damage;
    return damage;
};