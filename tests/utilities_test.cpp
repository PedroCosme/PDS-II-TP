
#include "utilities.hpp"
#include "doctest.h"
TEST_CASE("Testing max funcion"){
  CHECK(max(9, 8)==9);
  CHECK(max(29, 20)==29);
}
TEST_CASE("Test min funcion"){
    
SUBCASE("positive"){
  CHECK(min(9, 8)==8);
  CHECK(min(29, 20)==20);
}
  SUBCASE("negative"){
  CHECK_FALSE(min(9, 8)==9);
  CHECK_FALSE(min(29, 20)==29);
  }
}
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