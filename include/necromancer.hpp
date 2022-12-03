/**
 * @file necromancer.hpp
 * @author Victória Tejada (victoriatsiqueiram@gmail.com)
 * @brief Classe principal com a lógica da necromancer 
 * @version 1.0
 * @date 2022-12-03
 * @details Responsável por armazenar e processar todas as informações relevantes sobre o Necromancer.
 * @copyright Copyright (c) 2022
 * 
 */


#ifndef NECROMANCER_H
#define NECROMANCER_H

#include <iostream>
#include "game_events.hpp"
/**
 * @brief Classe responsavel pelo boss necromancer. A classe armazena
 * todos as informações relevantes sobre o Neuromancer.
 *
 */
class Necromancer : public Game_events
{
public:
   /**
    * @brief Construtor padrao que inicializa todas as variaveis da classe.
    * @param hp float com o hp base do jogador
    * @param mp float com o mp base do jogador
    * @param difficulty int que determina um multiplicador de dificuldade do necromancer
    *
    */
   Necromancer(float hp, int mp, int difficulty);
   /**
    * @brief Destrutor padrao.
    */
   ~Necromancer();
   /**
    * @brief Retorna o dano do ataque do necromancer
    */
   void attack();
   /**
    * @brief Retorna o dano da habilidade curse do necromancer
    */
   void curse();
   /**
    * @brief Retorna o dano da habilidade fireball do necromancer
    */
   void fireball();
   /**
    * @brief Retorna o dano da habilidade death ray do necromancer
    */
   void death_ray();
   /**
    * @brief Retorna o dano da habilidade raise_the_dead do necromancer
    */
   void raise_the_dead();
   /**
   * @brief Retorna a quantidade de dano tomado pelo necromancer
     @return float com o atual hp do personagem
   */
   void take_damage();

private:
   float _hp();

   int _mp();

   int _difficulty();
};
#endif
