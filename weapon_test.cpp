#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "weapon.hpp"
#include <iostream>

TEST_CASE("testando damageRange()")
{
  CHECK(availableWeapons.at(WEAPONS::UNARMED).damageRange()==1);
  CHECK(availableWeapons.at(WEAPONS::DAGGER).damageRange()==3);
  CHECK(availableWeapons.at(WEAPONS::LONGSWORD).damageRange()==7);
  CHECK(availableWeapons.at(WEAPONS::GREATSWORD).damageRange()==10);
  CHECK(availableWeapons.at(WEAPONS::BATTLEAXE).damageRange()==10);

}

TEST_CASE("testando getName()")
{
  
  CHECK_EQ(availableWeapons.at(WEAPONS::UNARMED).getName(), "Unarmed");
  CHECK_EQ(availableWeapons.at(WEAPONS::DAGGER).getName(), "Dagger");
  CHECK_EQ(availableWeapons.at(WEAPONS::LONGSWORD).getName(), "Longsword");
  CHECK_EQ(availableWeapons.at(WEAPONS::GREATSWORD).getName(), "Greatsword");
  CHECK_EQ(availableWeapons.at(WEAPONS::BATTLEAXE).getName(), "Battle Axe");

}
