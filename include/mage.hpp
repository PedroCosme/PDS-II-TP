#ifndef MAGE_H
#define MAGE_H

#include <iostream>
#include <string>
#include <set>
#include "playableCharacter.hpp"

/**
 * @brief Classe responsável pela classe de personagem mago.
 */
class Mage : public PlayableCharacter
{
public:
  /**
   * @param spells set com os spells disponíveis
   */
  // Mage(std::set<std::string> spells, std::string name, float hp, float mp, int lvl, int xp, Equipment equipment, std::set<Equipment>& equipments);
  Mage(std::string name, int lvl = 1, int xp = 0, float _hpMultiplier = 1.0, float _mpMultiplier = 150);

  float get_hp();

  float get_mp();

  void set_hp(float hp);

  void set_mp(float mp);

private:
  // std::set<std::string> _spells;
  float _hpMultiplier;
  float _mpMultiplier;
};
#endif