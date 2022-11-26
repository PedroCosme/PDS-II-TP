#ifndef INVENTORY_H
#define INVENTORY_H

#include <iostream>
#include <string>
#include <list>
#include "weapon.hpp"
#include "utilities.hpp"
#include "item.hpp"
#include <map>

class Inventory : public Item
{
public:
    // Inventory(std::map<Item, int> _inventory);
    Inventory();
    ~Inventory();

    std::map<Item, int> createInventory();

    void useItem(Item item);

    std::map<Item, int> subtractItem(Item item);

    void displayInventory();

    bool operator<(const Item &rhs) const;

    std::map<Item, int> addItem(Item item);

public:
    std::map<Item, int> _inventory;
};

#endif