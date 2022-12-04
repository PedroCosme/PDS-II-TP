
#include "utilities.hpp"
#include "doctest.h"
TEST_CASE("Testing max funcion"){
  CHECK(max(9, 8)==9);
  CHECK(max(29, 20)==29);
}
TEST_CASE("Testing min funcion"){
    
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
  CHECK_FALSE(genNum(2, 12)==13);
}
