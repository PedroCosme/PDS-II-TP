#ifndef _ENEMY_HPP_
#define _ENEMY_HPP_

#include "monster.hpp"

class Enemy : public Monster
{
private:
    unsigned int mGold;

public:
    Enemy(std::string &name, int gold, uint hitPoints);
    ~Enemy();

    unsigned int GoldWorth() const;
};

#endif