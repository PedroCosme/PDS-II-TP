#ifndef WARRIOR_H
#define WARRIOR_H

#include <iostream>
#include <string>
#include <set>
#include "playableCharacter.hpp"

/**
 * @brief Classe responsável pela classe de personagem warrior.
 */
class Warrior : public PlayableCharacter
{
public:
   /**
    * @brief construtor padrão para a classe de personagem warrior.
    */
   //  Warrior (std::string name, float hp, float mp, int lvl, int xp, Equipment equipment, std::set<Equipment>& equipments);
   Warrior(std::string name = "", int lvl = 1, int xp = 0, float hp = 250, float mp = 50);

   float get_hp();

   float get_mp();

   void set_hp(float hp);

   void set_mp(float mp);

private:
   float _hp;
   float _mp;
   int _lvl;
   int _xp;
};
#endif