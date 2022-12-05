/**
 * @file gameEvents.hpp
 * @author Victória Tejada (victoriatsiqueiram@gmail.com)
 * @brief Classe principal com a lógica de gameEvents
 * @version 1.0
 * @date 2022-12-03
 * @details Responsável por processar e armazenar toda lógica do jogo.
 * @copyright Copyright (c) 2022
 *
 */

#ifndef GAME_EVENTS_H
#define GAME_EVENTS_H

#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>
#include <string>
#include <time.h>
#include "playableCharacter.hpp"
#include "monster.hpp"
#include "enemy.hpp"
#include "vampire.hpp"
#include "weapon.hpp"
#include "item.hpp"
#include "utilities.hpp"
#include "inventory.hpp"
class GameEvents
{
public:
  void battle(PlayableCharacter *player, Enemy *monster, Inventory *inventory);
  void finalBattle(PlayableCharacter *player, Vampire *monster, Inventory *inventory);
  unsigned int calcDamage(unsigned int damageRange);
  int hitOrMissMonster();
  int hitOrMissPlayer();
};

#endif
