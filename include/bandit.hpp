
#ifndef _BANDIT_H
#define _BANDIT_H

#include "monster.hpp"
/**
 * @brief Classe responsavel pelo Monster Bandit.
 */
class Bandit: public Monster {
public: 
  /**
   * @brief Construtor padrao que inicializa todas as variaveis da classe.
   * @param hp float com o hp base do jogador
   * @param difficulty int que determina um multiplicador de dificuldade do bandit
   * 
   */  
    Bandit(float hp, int difficulty);
  
    float get_hp();
    
    void set_hp(float hp);
    
    Equipment drop_items();
  /**
   * @brief Retorna o dano do ataque do bandit
   */
   void attack();    
  /**
   * @return hp atual do bandit
   */
    float hp_multiplier();    
  /**
   * @brief retorna a quantidade de dano tomado pelo bandit
   
   * @return float com o atual hp do personagem
   */    
    void take_damage();    
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
