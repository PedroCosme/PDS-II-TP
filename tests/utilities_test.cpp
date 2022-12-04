
#include "utilities.hpp"
#include "doctest.h"
TEST_CASE("Testing max funcion"){
  CHECK(max(9, 8)==9);
  CHECK(max(29, 20)==29);
}
TEST_CASE("Testing min funcion"){
  CHECK_FALSE(min(9, 8)==9);
  CHECK_FALSE(min(29, 20)==29);
}
