#include "doctest.h"
#include "monster.hpp"
#include <iostream>

TEST_CASE("isAlive():bool function, case currentHP==0")
{
Monster MONSTER("MONSTER", 0);
  CHECK(MONSTER.isAlive()==0);

}
TEST_CASE("isAlive():bool function, case currentHP!=0")
{
  Monster MONSTER1("MONSTER", 58);
  Monster MONSTER2("MONSTER", 2);
  Monster MONSTER3("MONSTER", 1000);
  CHECK_FALSE(MONSTER1.isAlive()==0);
  CHECK_FALSE(MONSTER2.isAlive()==0);
  CHECK_FALSE(MONSTER3.isAlive()==0);

}
TEST_CASE("mtakeDamage:void function, case damage>currentHp")
{
Monster MONSTER("MONSTER", 50);
  MONSTER.mtakeDamage(60);
  CHECK(MONSTER.isAlive()==0);

}
TEST_CASE("getCurrentHp(): int")
{
Monster MONSTER("MONSTER", 50);
  MONSTER.mtakeDamage(30);
  CHECK(MONSTER.getCurrentHp()==20);

}
TEST_CASE("currentHealth():std::string ")
{
Monster MONSTER("MONSTER", 100);
  CHECK(MONSTER.currentHealth()=="100 / ");
  MONSTER.mtakeDamage(40);
  CHECK_FALSE(MONSTER.currentHealth()=="100 / ");
  MONSTER.mtakeDamage(30);
  CHECK(MONSTER.currentHealth()=="30 / ");
  
  
}

TEST_CASE("ToString(): std::string ")
{
  Monster MONSTER("Goblin", 100);
  CHECK(MONSTER.ToString()=="Goblin - Health: 100 / ");
  MONSTER.mtakeDamage(40);
  CHECK(MONSTER.ToString()=="Goblin - Health: 60 / ");
  
  
  }

