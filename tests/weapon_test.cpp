#include "../third_party/doctest.h"
#include "../include/enemy.hpp"
#include "../include/monster.hpp"
#include "../include/utilities.hpp"
#include "../include/gameEvents.hpp"
#include "../include/inventory.hpp"
#include "../include/item.hpp"
#include "../include/playableCharacter.hpp"
#include "../include/shop.hpp"
#include "../include/weapon.hpp"
#include <iostream>

TEST_CASE("testando damageRange()")

/**
    {WEAPONS::UNARMED, Weapon("Unarmed", 1, 2)},
    {WEAPONS::DAGGER, Weapon("Dagger", 2, 8)},
    {WEAPONS::LONGSWORD, Weapon("Longsword", 4, 12)},
    {WEAPONS::GREATSWORD, Weapon("Greatsword", 6, 16)},
    {WEAPONS::BATTLEAXE, Weapon("Battle Axe", 8, 20)}
*/
{
  CHECK(availableWeapons.at(WEAPONS::UNARMED).damageRange()==1);
  CHECK(availableWeapons.at(WEAPONS::DAGGER).damageRange()==6);
  CHECK(availableWeapons.at(WEAPONS::LONGSWORD).damageRange()==8);
  CHECK(availableWeapons.at(WEAPONS::GREATSWORD).damageRange()==10);
  CHECK(availableWeapons.at(WEAPONS::BATTLEAXE).damageRange()==12);

}

TEST_CASE("testando getName()")
{
  
  CHECK_EQ(availableWeapons.at(WEAPONS::UNARMED).getName(), "Unarmed");
  CHECK_EQ(availableWeapons.at(WEAPONS::DAGGER).getName(), "Dagger");
  CHECK_EQ(availableWeapons.at(WEAPONS::LONGSWORD).getName(), "Longsword");
  CHECK_EQ(availableWeapons.at(WEAPONS::GREATSWORD).getName(), "Greatsword");
  CHECK_EQ(availableWeapons.at(WEAPONS::BATTLEAXE).getName(), "Battle Axe");

}
TEST_CASE("testando getDamage()")
{
  
  CHECK_FALSE(availableWeapons.at(WEAPONS::UNARMED).getDamage()==3);
  CHECK_FALSE(availableWeapons.at(WEAPONS::DAGGER).getDamage()==8);
  CHECK_FALSE(availableWeapons.at(WEAPONS::LONGSWORD).getDamage()==0);
  CHECK_FALSE(availableWeapons.at(WEAPONS::GREATSWORD).getDamage()==13);
  CHECK_FALSE(availableWeapons.at(WEAPONS::BATTLEAXE).getDamage()==1);
  
}
