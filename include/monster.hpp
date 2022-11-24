#ifndef _MONSTER_HPP_
#define _MONSTER_HPP_

#include <string>

class Monster
{

public:
        Monster(std::string name, unsigned int currentHp);
        // Monster(Monster &monster);
        ~Monster();

        std::string getName() const;

        bool isAlive() const;

        bool damage(unsigned int damageAmount);

        std::string currentHealth() const;

        void mtakeDamage(unsigned int damage);

        unsigned int monsterDamage(unsigned int damageAmount);

        virtual std::string ToString() const;

        unsigned int getCurrentHp();

protected:
        std::string _name;
        unsigned int _currentHp;
};

#endif