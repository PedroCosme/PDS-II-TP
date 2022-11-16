#ifndef GOBLIN_H
#define GOBLIN_H

#include "monster.hpp"
/**
 * @brief Classe responsavel pelo Monster Goblin.
 */
class Goblin: public Monster {
public: 
  /**
   * @brief Construtor padrao que inicializa todas as variaveis da classe.
   * @param hp float com o hp base do jogador
   * @param difficulty int que determina um multiplicador de dificuldade do goblin
   * 
   */
  Goblin(float hp, int difficulty);
  
  float get_hp();
    
  void set_hp(float _hp);
  /**
   * @brief Destrutor padrao.
   */
  ~Goblin(); 
       
  Equipment drop_items();
  /**
   * @brief Retorna o dano do ataque do goblin
   */
  float attack();
  /**
   * @return hp atual do goblin
   */
  float hp_multiplier();
  /**
   * @brief Retorna a quantidade de dano tomado pelo goblin
   * @return float com o atual hp do personagem
   */
  float take_damage();
  /**
   * @brief Retorna o dano da habilidade bonus_stats do goblin
   */
  void bonus_stats();
    
 
private:
       
  float _hp();       
          
  int _difficulty();
 
};

#endif 
