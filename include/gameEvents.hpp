#ifndef GAME_EVENTS_H
#define GAME_EVENTS_H

#include <iostream>
#include <string>
#include <time.h>
#include "playableCharacter.hpp"
#include "monster.hpp"
#include "enemy.hpp"
#include "weapon.hpp"
#include "item.hpp"
#include "shop.hpp"

class GameEvents
{
public:
  GameEvents();
  ~GameEvents();
  void battle(PlayableCharacter player, Enemy monster);
  unsigned int calcDamage(unsigned int damageRange);
  int hitOrMissMonster();
  int hitOrMissPlayer();
};

#endif
