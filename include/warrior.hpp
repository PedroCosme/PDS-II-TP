#ifndef WARRIOR_H
#define WARRIOR_H

#include <iostream>
#include <string>
#include <set>
#include "playableCharacter.hpp"

/**
 * @brief Classe responsável pela classe de personagem warrior.
 */
class Warrior : public PlayableCharacter{
   public:
/**
 * @brief construtor padrão para a classe de personagem warrior.
 */
    Warrior (std::string name, float hp, float mp, int lvl, int xp, Equipment equipment, std::set<Equipment>& equipments);
};
#endif