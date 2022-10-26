
#ifndef _BANDIT_H
#define _BANDIT_H

#include "Monster.hpp"
/**
 * @brief Classe responsavel pelo Monster Bandit.
 */


class Bandit: public Monster {
public: 
  /**
   * @brief Construtor padrao que inicializa todas as variaveis da classe.
   * @param hp float com o hp base do jogador
   * @param difficulty int que determina um multiplicador de dificuldade do goblin
   * 
   */
    
    Bandit(float hp, int difficulty);
  
    float get_hp();
    
    void set_hp();
    
    Equipment drop_items();
    
  /**
   * @brief Retorna o dano do ataque do goblin
   */
    
    void attack();
        
  /**
   * @return hp atual do goblin
   */
    float hp_multiplier();
    
  /**
   * @brief retorna a quantidade de dano tomado pelo goblin
   * @return float com o atual hp do personagem
   */
    
    float take_damage();
    
  /**
   * @brief um item é retirado do personagem
   * 
   */
    
    void steal_item();
    



private:
       
    float _hp();
                    
    int _difficulty();
    
 };

#endif 
