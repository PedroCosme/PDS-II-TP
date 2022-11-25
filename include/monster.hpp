#ifndef _MONSTER_HPP_
#define _MONSTER_HPP_

#include <string>

class Monster
{

public:
        Monster(std::string name, int currentHp);
        // Monster(Monster &monster);
        ~Monster();

        std::string getName() const;

        int getCurrentHp();

        bool isAlive() const;

        bool damage(unsigned int damageAmount);

        std::string currentHealth() const;

        void mtakeDamage(unsigned int damage);

        unsigned int monsterDamage(unsigned int damageAmount);

        virtual std::string ToString() const;

protected:
        std::string _name;
        int _currentHp;
};

#endif