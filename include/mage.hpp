#ifndef MAGE_H
#define MAGE_H

#include <iostream>
#include <string>
#include <set>
#include "playableCharacter.hpp"

/**
 * @brief Classe responsável pela classe de personagem mago.
 */
class Mage : public PlayableCharacter{
    public:
     /**
   * @param spells set com os spells disponíveis
   */
  Mage(std::set<std::string> spells);

 private:
    std::set<std::string> _spells;
};
#endif