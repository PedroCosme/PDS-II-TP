#include "doctest.h"
#include "enemy.hpp"
#include "inventory.hpp"
#include <iostream>

TEST_CASE("Test createInventory and subtractItem")
{
  Inventory inventory;
  inventory.createInventory();
  //consider that initially the inventory contains 2 Health Potions
 inventory.subtractItem(itemList.at(ITEMS::HEALTH_POTION));
  CHECK(inventory._inventory[itemList.at(ITEMS::HEALTH_POTION)]==1);
  inventory.subtractItem(itemList.at(ITEMS::HEALTH_POTION));
  CHECK(inventory._inventory[itemList.at(ITEMS::HEALTH_POTION)]==0);
}

TEST_CASE("Test createInventory and addItem")
{
  Inventory inventory;
  inventory.createInventory();
  inventory.addItem(itemList.at(ITEMS::HEALTH_POTION));
  CHECK(inventory._inventory[itemList.at(ITEMS::HEALTH_POTION)]==3);
  inventory.addItem(itemList.at(ITEMS::HEALTH_POTION));
  inventory.addItem(itemList.at(ITEMS::HEALTH_POTION));
  CHECK(inventory._inventory[itemList.at(ITEMS::HEALTH_POTION)]==5);
}
