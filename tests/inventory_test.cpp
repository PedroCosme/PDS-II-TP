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
  //Implementar um try_catch em subtractItem(item):void
  SUBCASE("Testing invalid option-substract item when _inventory[item]==0")
{
  CHECK_THROWS(inventory.subtractItem(itemList.at(ITEMS::HEALTH_POTION)));
  }
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
    
