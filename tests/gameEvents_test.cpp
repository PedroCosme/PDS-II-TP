#include "doctest.h"
#include "gameEvents.hpp"
#include "inventory.hpp"
#include <iostream>
#include <sstream>

TEST_CASE("Test battle function"){
  PlayableCharacter P("David",  1,  0,  100, 100, 50, 1000);
  
  Enemy monster(20, 50, "Goblin", 100);
  battle(PlayableCharacter P, Enemy monster);
//Implementar o resto
  
}
