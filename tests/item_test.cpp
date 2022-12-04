#include "doctest.h"
#include "item.hpp"
#include <iostream>

TEST_CASE("getItemById(int itemId name): std::string")
{
   CHECK(getItemById(1)=="Health Potion");
  CHECK(getItemById(2)=="Grenade");
  CHECK(getItemById(3)=="dagger");
  CHECK(getItemById(4)=="Long Sword");
  CHECK(getItemById(5)=="Great Sword");
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


TEST_CASE("getName(): std::string")
{
  CHECK(itemList.at(ITEMS::HEALTH_POTION).getName()=="Health Potion");
  CHECK(itemList.at(ITEMS::GRENADE).getName()=="Grenade");
  CHECK(itemList.at(ITEMS::GREAT_SWORD).getName()=="Great Sword");
  CHECK(itemList.at(ITEMS::BATTLE_AXE).getName()=="Battle Axe");
  CHECK(itemList.at(ITEMS::DAGGER).getName()=="Dagger");
  CHECK(itemList.at(ITEMS::LONG_SWORD).getName()=="Long sword");
}
