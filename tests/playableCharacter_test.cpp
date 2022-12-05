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
