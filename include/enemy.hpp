/**
 * @file enemy.hpp
 * @author Victória Tejada (victoriatsiqueiram@gmail.com)
 * @brief Classe principal com a lógica de enemy
 * @version 1.0
 * @date 2022-12-03
 * @details Responsável por processar e armazenar toda logica dos inimigos com atributos vindos dos monstros.
 * @copyright Copyright (c) 2022
 *
 */

#ifndef _ENEMY_HPP_
#define _ENEMY_HPP_

#include "monster.hpp"
#include "playableCharacter.hpp"
#include "inventory.hpp"
// #include "gameEvents.hpp"
// #include "vampire.hpp"
class Enemy : public Monster
{

public:
    Enemy(uint gold,
          uint xpWorth,
          std::string name,
          int currentHp,
          uint maxHp,
          uint maxDamage,
          uint minDamage);
    ~Enemy();

    unsigned int goldWorth() const;

    unsigned int xpWorth();

    // void attack(PlayableCharacter *player, Enemy *monster, Inventory *inventory);

    int hitOrMiss();

private:
    uint _gold;
    uint _xpWorth;
};

#endif
