#ifndef _WEAPON_HPP_
#define _WEAPON_HPP_

#include <string>
#include <map>

class Weapon
{

public:
    Weapon(std::string name = "");
    // Weapon(Weapon &Weapon);
    ~Weapon();

    std::string getWeaponName();

protected:
    std::string _name;
};

#endif