
#ifndef _SLIME_H
#define _SLIME_H

#include "monster.hpp"
/**
 * @brief Classe responsavel pelo Monster Slime.
 */
class Slime: public Monster {
public: 
/**
   * @brief Construtor padrao que inicializa todas as variaveis da classe.
   * @param hp float com o hp base do jogador
   * @param difficulty int que determina um multiplicador de dificuldade do slime
   * 
   */
  Slime(float hp, int difficulty);
  
  float get_hp();
    
  void set_hp();
    
  Equipment drop_items();
/**
 * @brief Retorna o dano do ataque do slime
 */
  void attack();
/**
  * @return hp atual do slime
  */ 
  float hp_multiplier();
/**
 * @brief Retorna a quantidade de dano tomado pelo slime
 * @return float com o atual hp do personagem
 */    
  void take_damage();
    
  void root();
    

private:
       
 float _hp();       
          
 int _difficulty();
 
};




#endif 
