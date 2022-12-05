#include "doctest.h"
#include "enemy.hpp"


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

