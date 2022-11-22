#ifndef _MONSTER_HPP_
#define _MONSTER_HPP_

#include <string>

class Monster
{

public:
        Monster(std::string name, unsigned int currentHp);
        //Monster(Monster &monster);
        ~Monster();

        std::string getName() const;

        bool isAlive() const;

        bool damage(unsigned int damageAmount);

        unsigned int currentHealth() const;

        bool takeDamage(unsigned int damage);

        bool monsterDamage(unsigned int damageAmount);

        virtual std::string ToString() const;

protected:
        std::string _name;
        unsigned int _currentHp;
};

#endif