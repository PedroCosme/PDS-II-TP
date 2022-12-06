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
TEST_CASE("Negative test of genNum funcion"){
//getNum when unnarmed
  CHECK_FALSE(genNum(1, 2)==4);
  //getNum when using the dagger
  CHECK_FALSE(genNum(1, 4)==25);
  //getNum when using the longsword
  CHECK_FALSE(genNum(1, 8)==9);
  //getNum when using the greatsword and the battle xe
  CHECK_FALSE(genNum(2, 12)==13);
}
TEST_CASE("Test ToLower function"){
  CHECK_EQ(toLower("LONGSWORD"), "longsword");
  CHECK_EQ(toLower("greatsword"), "greatsword");
  CHECK_EQ(toLower("GrEaTsWoRd"), "greatsword");
}
TEST_CASE("Test toUpper function"){
  CHECK_EQ(toUpper("longsword"), "LONGSWORD");
  CHECK_EQ(toUpper("GREATSWORD"),"GREATSWORD");
  CHECK_EQ(toUpper("GrEaTsWoRd"), "GREATSWORD");
}
