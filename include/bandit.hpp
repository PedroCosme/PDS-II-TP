#ifndef BANDIT_H_INCLUDED
#define BANDIT_H_INCLUDED

#include "monster.hpp"
/**
 * @brief Classe responsavel pelo Monster Bandit.
 */
class Bandit : public Monster
{
public:
  /**
   * @brief Construtor padrao que inicializa todas as variaveis da classe.
   * @param hp float com o hp base do jogador
   * @param difficulty int que determina um multiplicador de dificuldade do bandit
   *
   */
  Bandit(float hp, int difficulty);

  float get_hp();

  void set_hp(float _hp);

  // Equipment drop_items();
  /**
   * @brief Retorna o dano do ataque do bandit
   */
  float attack();
  /**
   * @return hp atual do bandit
   */
  void hp_multiplier(int multiplier);
  /**
   * @brief retorna a quantidade de hp atual após o dano

   * @return float com o atual hp do personagem
   */
  void take_damage();
  /**
   * @brief um item é retirado do personagem
   *
   */
  void steal_item();

private:
  float _hp;

  int _difficulty;
};

#endif
