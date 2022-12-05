
#include "doctest.h"
#include "shop.hpp"

//Item healthPotion("Health Potion", 50, 1);
//Item grenade("Grenade", 80, 2);
//Item dagger("Dagger", 50, 3);
//Item longSword("Long sword", 120, 4);
//Item greatSword("Great Sword", 180, 5);
//Item battleAxe("Battle Axe", 220, 6);

TEST_CASE("Test buyItem( id):int function)
{
         
  CHECK(buyItem(4)==50);
  CHECK(buyItem(2)==80);
  CHECK(buyItem(4)==120);
  CHECK(buyItem(5)==180);
  CHECK(buyItem(6)==220);

}
      
