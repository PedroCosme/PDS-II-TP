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
