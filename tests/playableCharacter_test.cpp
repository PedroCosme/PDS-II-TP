#include "playableCharacter.hpp"
#include "doctest.h"

TEST_CASE("Test getName():std::string function:")
{
 PlayableCharacter player("Mike", 1, 0, 100, 100, 50, 1000);
  CHECK(player.getName()=="Mike");
  
}


TEST_CASE("Test getName():std::string function:")
{
 PlayableCharacter player("Mike", 1, 0, 100, 100, 50, 1000);
  CHECK(player.getCurrentHp()==100);
  player.takeDamage(50);
  CHECK(player.getCurrentHp()==50);
  
}
  TEST_CASE("Test getLvl():std::string function:")
{
 PlayableCharacter player("Mike", 1, 0, 100, 100, 50, 1000);
  CHECK(player.getLvl()==1);
  player.lvlUp();
  CHECK(player.getLvl()==2);
  
  }
TEST_CASE("Test getXp():int function:")
{
  
  PlayableCharacter player("Tyler", 1, 0, 100, 100, 50, 1000);
  Enemy monster(30, 100, "Goblin", 0, 100, 32, 8);
  GameEvents game;
  player.setXp(monster.xpWorth());
  CHECK(player.getXp()==100);
}
   TEST_CASE("Test isALive():bool function:")
  {
  PlayableCharacter player("Tyler", 1, 0, 100, 100, 50, 1000);
   player.isAlive();
  CHECK(player.isAlive()==true);
  player.takeDamage(100);
  CHECK(player.isAlive()==false);
}
