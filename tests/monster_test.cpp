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

TEST_CASE("isAlive():bool function, case currentHp==0")
{
  
Monster MONSTER("MONSTER", 0, 50, 15, 6);
  CHECK(MONSTER.isAlive()==0);

}
TEST_CASE("isAlive():bool function, case currentHp!=0")
{
  Monster MONSTER1("MONSTER", 1, 50, 15, 6);
  Monster MONSTER2("MONSTER", 2, 50, 15, 6);
  Monster MONSTER3("MONSTER", 3, 50, 15, 6);
  CHECK(MONSTER1.isAlive()==1);
  CHECK(MONSTER2.isAlive()==1);
  CHECK(MONSTER3.isAlive()==1);

}
TEST_CASE("takeDamage:void function, case damage>currentHp")
{
Monster MONSTER("MONSTER", 60, 80, 15, 6);
  MONSTER.takeDamage(60);
  CHECK(MONSTER.isAlive()==0);

}
TEST_CASE("getCurrentHp(): int")
{
Monster MONSTER("MONSTER", 60, 70, 15, 6);
  MONSTER.takeDamage(30);
  CHECK(MONSTER.getCurrentHp()==30);

}
TEST_CASE("currentHealth():std::string ")
{
Monster MONSTER("MONSTER", 90, 100, 15, 6);
  CHECK(MONSTER.currentHealth()=="90 / 100");
  MONSTER.takeDamage(40);
  CHECK(MONSTER.currentHealth()=="50 / 100");
  MONSTER.takeDamage(30);
  CHECK(MONSTER.currentHealth()=="20 / 100");
  
  
}

TEST_CASE("getName() const: std::string ")
{
  Monster MONSTER1("Bandit", 30, 100, 15, 6);
  CHECK(MONSTER1.getName()=="Bandit");
  Monster MONSTER2("Vampire", 20, 100, 15, 6);
  CHECK(MONSTER2.getName()=="Vampire");
  
  
  }
