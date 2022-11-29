#include "doctest.h"
#include "item.hpp"
#include <iostream>

TEST_CASE("getByName(std::string name): ITEMS")
{
  //implememtar
}

TEST_CASE(" bool operator<(const Item &rhs) const")
{
  //implememtar
}
TEST_CASE("getPrice(): int")
{

  CHECK(itemList.at(ITEMS::HEALTH_POTION).getPrice()==50);
  CHECK(itemList.at(ITEMS::GRENADE).getPrice()==80);
  CHECK(itemList.at(ITEMS::GREAT_SWORD).getPrice()==180);
  CHECK(itemList.at(ITEMS::BATTLE_AXE).getPrice()==220);
  CHECK(itemList.at(ITEMS::DAGGER).getPrice()==50);
  CHECK(itemList.at(ITEMS::LONG_SWORD).getPrice()==120);
}


