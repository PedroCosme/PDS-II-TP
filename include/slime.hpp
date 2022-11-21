
#ifndef SLIME_H
#define SLIME_H

#include "monster.hpp"
/**
 * @brief Classe responsavel pelo Monster Slime.
 */
class Slime : public Monster
{
public:
  /**
   * @brief Construtor padrao que inicializa todas as variaveis da classe.
   * @param hp float com o hp base do jogador
   * @param difficulty int que determina um multiplicador de dificuldade do slime
   *
   */
  Slime(float hp, int difficulty);

  float get_hp();

  void set_hp(float _hp);

  // Equipment drop_items();
  /**
   * @brief Retorna o dano do ataque do slime
   */
  float attack();
  /**
   * @return hp atual do slime
   */
  void hp_multiplier(int multiplier);
  /**
   * @brief Retorna a quantidade atual de hp após dano
   */
  void take_damage();

  void root();

private:
  float _hp;

  int _difficulty;
};

#endif
