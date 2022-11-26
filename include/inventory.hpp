#ifndef INVENTORY_H
#define INVENTORY_H

#include <iostream>
#include <string>
#include <list>
#include "equipment.hpp"
#include "weapon.hpp"
#include "utilities.hpp"
#include "item.hpp"
#include <map>

class Inventory : public Item
{
public:
    Inventory(std::map<Item, int> _inventory);
    ~Inventory();

    bool operator<(const Item &rhs) const;

    std::map<Item, int> addItem(std::string itemName);

    std::map<Item, int> createInventory();

    void useItem(Item item);

    std::map<Item, int> subtractItem(std::map<Item, int> inventory);

    void displayInventory(std::map<Item, int> inventory);

public:
    std::map<Item, int> _inventory;
};

#endif