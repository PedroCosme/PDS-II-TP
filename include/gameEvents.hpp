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
#include <string>
#include <time.h>
#include "playableCharacter.hpp"
#include "monster.hpp"
#include "enemy.hpp"
#include "weapon.hpp"
#include "item.hpp"
#include "utilities.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>
#include "inventory.hpp"

/**
 * @brief Especifica o hitOrMiss, calculo de dano e as batalhas.
 * 
 * @details Detalha o hitOrMiss, o calculo de dano e batalhas. Responsável por armazenar toda lógica presente no jogo.
 */

class GameEvents
{
public:

/**
 * @brief Construtor do objeto GameEvents
 * 
 * @details Inicializa a estrutura de GameEvents
 */
  GameEvents();

  /**
   * @brief Destrói o objeto GameEvents
   * 
   */
  ~GameEvents();

  /**
   * @brief Batalha que acontece durante o jogo
   * 
   * @details Lida com a batalha que acontece durante o jogo, utilizando o jogador, monstros e inventário
   * 
   * @param player Jogador
   * @param monster Monstro
   * @param inventory Inventário
   */

  void battle(PlayableCharacter player, Enemy monster, Inventory inventory);

/**
 * @brief 
 * 
 * @param damageRange 
 * @return unsigned int 
 */
  unsigned int calcDamage(unsigned int damageRange);


  int hitOrMissMonster();
  int hitOrMissPlayer();
};

#endif
