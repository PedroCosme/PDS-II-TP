#ifndef _WEAPON_HPP_
#define _WEAPON_HPP_

#include <string>
#include <map>

class Weapon
{

public:
    Weapon(std::string name, unsigned int minDamage, unsigned int maxDamage);
    Weapon(Weapon &Weapon);
    Weapon();
    ~Weapon();

    std::string getName() const;
    unsigned int damageRange() const;
    unsigned int getDamage(int damage) const;

private:
    std::string _name;
    unsigned int _minDamage;
    unsigned int _maxDamage;
};

#endif