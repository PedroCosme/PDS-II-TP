#include <iostream>
#include <string>
#include <set>
#include "necromancer.hpp"
#include "game_events.hpp"

Necromancer::Necromancer(float hp, int mp, int difficulty){
    this -> _hp = hp;
    this -> _mp = mp;
    this -> _difficulty = difficulty;
}
