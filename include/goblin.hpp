#ifndef _GOBLIN_H
#define _GOBLIN_H

#include "Monster.hpp"
/**
 * @brief Classe responsavel pelo Monster Goblin.
 */

class Goblin: public Monster {
public: 
  /**
   * @brief Construtor padrao que inicializa todas as variaveis da classe.
   * @param hp float com o hp base do jogador
   * @param difficulty int que determina um multiplicador de dificuldade do bandit
   * 
   */
  Bandit(float hp, int difficulty);
  
  /**
   * @brief Destrutor padrao.
   */
  ~Bandit(); 
        
  Equipment drop_items();
  
  /**
   * @brief Retorna o dano do ataque do bandit
   */
  void attack();
  
   /**
   * @brief Retorna o hp do bandit
   */
  float hp_multiplier();
  
  /**
   * @brief Retorna a quantidade de dano tomado pelo bandit
   * @return float com o atual hp do personagem
   */
  float take_damage();
  
  /**
   * @brief Retorna o dano da habilidade bonus_stats do bandit
   */
  void bonus_stats();
    
 


private:
       
  float _hp();       
          
  int _difficulty();
 
};

#endif 
