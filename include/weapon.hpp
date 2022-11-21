#ifndef _WEAPON_HPP_
#define _WEAPON_HPP_

#include <string>
#include <map>

class Weapon
{

public:
    Weapon(std::string name);
    Weapon(Weapon &Weapon);
    Weapon();
    ~Weapon();

    virtual std::string getName() const;

protected:
    std::string _name;
};

#endif