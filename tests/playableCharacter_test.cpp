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
TEST_CASE("Test getName():std::string function:")
{
 PlayableCharacter player("Mike", 1, 0, 100, 100, 50, 1000);
  CHECK(player.getName()=="Mike");
  
}


TEST_CASE("Test getCurrentHp():int function:")
{
 PlayableCharacter player("Mike", 1, 0, 100, 100, 50, 1000);
  CHECK(player.getCurrentHp()==100);
  player.takeDamage(50);
  CHECK(player.getCurrentHp()==50);
  player.heal(10);
  CHECK(player.getCurrentHp()==60);
 //if heal amount is bigger than the maxHp -> currentHp==maxHp
  player.heal(300);
  CHECK(player.getCurrentHp()==100);
  
}
  TEST_CASE("Test getLvl():int function:")
{
 PlayableCharacter player("Mike", 1, 0, 100, 100, 50, 1000);
  CHECK(player.getLvl()==1);
  player.lvlUp();
  CHECK(player.getLvl()==2);
  
  }
TEST_CASE("Test getXp():int function:")
{
  
  PlayableCharacter player("Tyler", 1, 0, 100, 100, 50, 1000);
  Enemy monster1(30, 80, "Goblin", 0, 80, 32, 8);
  GameEvents game;
   player.setXp(monster1.xpWorth());
  CHECK(player.getXp()==80);
  //When xp>=0, the player level up and his new xp is now zero
  Enemy monster2(30, 100, "Vampire", 0, 20, 32, 8);
  player.setXp(monster2.xpWorth());
  CHECK(player.getXp()==0);
}
   TEST_CASE("Test isALive():bool function:")
  {
  PlayableCharacter player("Tyler", 1, 0, 100, 100, 50, 1000);
   player.isAlive();
  CHECK(player.isAlive()==true);
  player.takeDamage(100);
  CHECK(player.isAlive()==false);
}
TEST_CASE("Test getGold():int function"){
PlayableCharacter player("Mike", 1, 0, 100, 100, 50, 1000);
Enemy bandit(50, 25, "Bandit", 50, 50, 15, 6);
player.subtractGold(300);
CHECK(player.getGold()==700);
player.addGold(bandit.goldWorth());
CHECK(player.getGold()==750);
  
}
