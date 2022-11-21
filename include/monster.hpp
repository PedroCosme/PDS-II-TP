#ifndef _MONSTER_HPP_
#define _MONSTER_HPP_

#include <string>

class Monster
{

public:
        Monster(std::string &name, unsigned int baseHp);
        Monster(Monster &monster);
        ~Monster();

        std::string getName() const;

        bool isAlive() const;

        bool damage(unsigned int damageAmount);

        float hpPPercentage() const;

        std::string currentHealth() const;

        bool takeDamage(unsigned int damage) noexcept;

        virtual std::string ToString() const;

protected:
        std::string mName;
        unsigned int mCurrentHp;

        unsigned int getMaximumHp() const;

        unsigned int mToughnessSkill;
};

#endif