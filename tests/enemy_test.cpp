#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
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

TEST_CASE("Test goldWorth():int")
{  
 Enemy bandit(50, 25, "Bandit", 50, 50, 15, 6);
 CHECK(bandit.goldWorth()==50); 
}
TEST_CASE("Test xpWorth():int")
{  
 Enemy bandit(50, 25, "Bandit", 50, 50, 15, 6);
 CHECK(bandit.xpWorth()==25); 
}

