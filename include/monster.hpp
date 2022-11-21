#ifndef _MONSTER_HPP_
#define _MONSTER_HPP_

#include <string>

class Monster
{

public:
        Monster(std::string &name, unsigned int toughness, unsigned int currentHp);
        Monster(Monster &monster);
        ~Monster();

        std::string getName() const;

        bool isAlive() const;

        bool damage(unsigned int damageAmount);

        std::string currentHealth() const;

        bool takeDamage(unsigned int damage);

        virtual std::string ToString() const;

protected:
        std::string _name;
        unsigned int _currentHp;
        unsigned int _toughnessSkill;
};

#endif