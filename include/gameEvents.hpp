/**
 * @file gameEvents.hpp
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
#include <tabulate/table.hpp>

/**
 * @brief Lida com os eventos de batalha do jogo.
 *
 * @details Contém todas as informações necessárias para se iniciar uma batalha durante o jogo.
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
   * @details Lida com a batalha que acontece durante o jogo, utilizando um ponteiro para jogador, um para o monstro monstros e outro para o inventário do jogador
   *
   * @param player Ponteiro para jogador
   * @param monster Ponteiro para Monstro
   * @param inventory Ponteiro para Inventário
   */
  void battle(PlayableCharacter *player, Enemy *monster, Inventory *inventory);

  /**
   * @brief Batalha contra o boss final
   *
   * @details Lida com a batalha que acontece durante o jogo, utilizando um ponteiro para jogador, um para o monstro monstros e outro para o inventário do jogador
   *
   * @param player Ponteiro para jogador
   * @param monster Ponteiro para vampire
   * @param inventory Ponteiro para Inventário
   */
  void finalBattle(PlayableCharacter *player, Vampire *monster, Inventory *inventory);

  /**
   * @brief Função que verifica se o ataque do monstro acertou, errou, ou deu acerto critíco
   *
   * @return int de 1 a 100
   */
  int hitOrMissMonster();

  /**
   * @brief Função que verifica se o ataque do jogador acertou, errou, ou deu acerto critíco
   *
   * @return int de 100 a 200
   */
  int hitOrMissPlayer();
};

#endif
