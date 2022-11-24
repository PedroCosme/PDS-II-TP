#ifndef _ENEMY_HPP_
#define _ENEMY_HPP_

#include "monster.hpp"

class Enemy : public Monster
{

public:
    Enemy(uint gold, uint xpWorth, std::string name, uint hitPoints);
    ~Enemy();

    unsigned int goldWorth() const;

    unsigned int xpWorth();

private:
    unsigned int _gold;
    unsigned int _xpWorth;
};

#endif