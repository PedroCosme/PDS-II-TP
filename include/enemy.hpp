#ifndef _ENEMY_HPP_
#define _ENEMY_HPP_

#include "monster.hpp"

class Enemy : public Monster
{
private:
    unsigned int _gold;

public:
    Enemy(std::string &name, int gold, uint hitPoints);
    ~Enemy();

    unsigned int goldWorth() const;
};

#endif