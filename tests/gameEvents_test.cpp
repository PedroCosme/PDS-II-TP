#include "gameEvents.hpp"
#include "doctest.h"

TEST_CASE("Test hitorMissPlayer() function"){
  GameEvents game;
  CHECK_FALSE(game.hitOrMissPlayer()==201);
  CHECK_FALSE(game.hitOrMissPlayer()==50);
}
}


