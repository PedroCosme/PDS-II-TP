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

//Item healthPotion("Health Potion", 50, 1);
//Item grenade("Grenade", 80, 2);
//Item dagger("Dagger", 50, 3);
//Item longSword("Long sword", 120, 4);
//Item greatSword("Great Sword", 180, 5);
//Item battleAxe("Battle Axe", 220, 6);

TEST_CASE("Test buyItem( id):int function")
{
         
  SUBCASE("Health Potion")
  {
  CHECK(buyItem(1)==50);
  } 
         
         
  SUBCASE("Grenade")
  {
   CHECK(buyItem(2)==80);
  } 
         
         
  SUBCASE("Dagger")
  {
       CHECK(buyItem(3)==50);
  }
         
         
  SUBCASE("Long Sword")
  {
  CHECK(buyItem(4)==120);
  }
         
         
  SUBCASE("Great Sword")
  {
  CHECK(buyItem(5)==180);
  }
     
         
  SUBCASE("Battle Axe")
 {
  CHECK(buyItem(6)==220);

  }
}
