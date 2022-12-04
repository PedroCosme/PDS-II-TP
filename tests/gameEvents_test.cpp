#include "gameEvents.hpp"
#include "doctest.h"

TEST_CASE("Test hitorMissPlayer() function:")

  //In this case, the function calls genNum(100, 200)
  GameEvents game;
  CHECK_FALSE(game.hitOrMissPlayer()==201);
  CHECK_FALSE(game.hitOrMissPlayer()==50);
}

TEST_CASE("Test hitorMissMonster() function:")
{
  //In this case, the function calls genNum(1, 100)
  GameEvents game;
  CHECK_FALSE(game.hitOrMissPlayer()==101);
  CHECK_FALSE(game.hitOrMissPlayer()==0);
}

TEST_CASE("Test calDamage function:")
{
  //Implementar o teste após a função em questão ser implementada
  GameEvents game;
  
}

