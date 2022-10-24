#ifndef NECROMANCER_H
#define NECROMANCER_H

#include <iostream>
#include "game_events.hpp"

class Necromancer: public Game_events{
    public:
        void attack();
        void curse();
        void fireball();
        void death_ray();
        void raise_the_dead();
        float take_damage();
    
    private:
        float _hp();
        int _mp();
        int _difficulty();
};
#endif